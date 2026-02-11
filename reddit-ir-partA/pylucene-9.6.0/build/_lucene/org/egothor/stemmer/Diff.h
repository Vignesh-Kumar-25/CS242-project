#ifndef org_egothor_stemmer_Diff_H
#define org_egothor_stemmer_Diff_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class String;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Diff : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3353d9f14bbfd91a,
          mid_init$_dfabecda8fb9b5ea,
          mid_apply_89b68bda52db5fca,
          mid_exec_4178ea5d4aed7988,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Diff(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Diff(const Diff& obj) : ::java::lang::Object(obj) {}

        Diff();
        Diff(jint, jint, jint, jint);

        static void apply(const ::java::lang::StringBuilder &, const ::java::lang::CharSequence &);
        ::java::lang::String exec(const ::java::lang::String &, const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Diff);
      extern PyTypeObject *PY_TYPE(Diff);

      class t_Diff {
      public:
        PyObject_HEAD
        Diff object;
        static PyObject *wrap_Object(const Diff&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
