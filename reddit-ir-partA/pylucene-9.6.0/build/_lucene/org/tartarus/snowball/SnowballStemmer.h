#ifndef org_tartarus_snowball_SnowballStemmer_H
#define org_tartarus_snowball_SnowballStemmer_H

#include "org/tartarus/snowball/SnowballProgram.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {

      class SnowballStemmer : public ::org::tartarus::snowball::SnowballProgram {
       public:
        enum {
          mid_init$_3353d9f14bbfd91a,
          mid_stem_ee8b0a5fa521ddac,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SnowballStemmer(jobject obj) : ::org::tartarus::snowball::SnowballProgram(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SnowballStemmer(const SnowballStemmer& obj) : ::org::tartarus::snowball::SnowballProgram(obj) {}

        SnowballStemmer();

        jboolean stem() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      extern PyType_Def PY_TYPE_DEF(SnowballStemmer);
      extern PyTypeObject *PY_TYPE(SnowballStemmer);

      class t_SnowballStemmer {
      public:
        PyObject_HEAD
        SnowballStemmer object;
        static PyObject *wrap_Object(const SnowballStemmer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
