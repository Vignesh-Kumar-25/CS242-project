#ifndef java_lang_Object_H
#define java_lang_Object_H

#include "JObject.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class String;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Object : public ::JObject {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_equals_6084f78e09b6c0c3,
        mid_getClass_18822df052d4f846,
        mid_hashCode_15aa3d485e96b665,
        mid_notify_3353d9f14bbfd91a,
        mid_notifyAll_3353d9f14bbfd91a,
        mid_toString_dc633f13a47328a8,
        mid_wait_3353d9f14bbfd91a,
        mid_wait_db2028ac45cd5b77,
        mid_wait_6dbbaef8380ec710,
        mid_finalize_3353d9f14bbfd91a,
        mid_clone_bdd51648087bae52,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Object(jobject obj) : ::JObject(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Object(const Object& obj) : ::JObject(obj) {}

      Object();

      jboolean equals(const Object &) const;
      ::java::lang::Class getClass() const;
      jint hashCode() const;
      void notify() const;
      void notifyAll() const;
      ::java::lang::String toString() const;
      void wait() const;
      void wait(jlong) const;
      void wait(jlong, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Object);
    extern PyTypeObject *PY_TYPE(Object);

    class t_Object {
    public:
      PyObject_HEAD
      Object object;
      static PyObject *wrap_Object(const Object&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
