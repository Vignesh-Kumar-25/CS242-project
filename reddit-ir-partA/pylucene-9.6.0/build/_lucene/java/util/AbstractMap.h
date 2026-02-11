#ifndef java_util_AbstractMap_H
#define java_util_AbstractMap_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractMap : public ::java::lang::Object {
     public:
      enum {
        mid_clear_3353d9f14bbfd91a,
        mid_containsKey_6084f78e09b6c0c3,
        mid_containsValue_6084f78e09b6c0c3,
        mid_entrySet_9a625d56b67c7390,
        mid_equals_6084f78e09b6c0c3,
        mid_get_73b517fb00cf5d09,
        mid_hashCode_15aa3d485e96b665,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_keySet_9a625d56b67c7390,
        mid_put_eed45094c70976e5,
        mid_putAll_62c0fdc62292ffbf,
        mid_remove_73b517fb00cf5d09,
        mid_size_15aa3d485e96b665,
        mid_toString_dc633f13a47328a8,
        mid_values_b47b7eaa8124fb60,
        mid_clone_bdd51648087bae52,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractMap(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractMap(const AbstractMap& obj) : ::java::lang::Object(obj) {}

      void clear() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractMap);
    extern PyTypeObject *PY_TYPE(AbstractMap);

    class t_AbstractMap {
    public:
      PyObject_HEAD
      AbstractMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_AbstractMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
