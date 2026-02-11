#ifndef org_tartarus_snowball_ext_ArmenianStemmer_H
#define org_tartarus_snowball_ext_ArmenianStemmer_H

#include "org/tartarus/snowball/SnowballStemmer.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {

        class ArmenianStemmer : public ::org::tartarus::snowball::SnowballStemmer {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_stem_ee8b0a5fa521ddac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ArmenianStemmer(jobject obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ArmenianStemmer(const ArmenianStemmer& obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {}

          ArmenianStemmer();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean stem() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {
        extern PyType_Def PY_TYPE_DEF(ArmenianStemmer);
        extern PyTypeObject *PY_TYPE(ArmenianStemmer);

        class t_ArmenianStemmer {
        public:
          PyObject_HEAD
          ArmenianStemmer object;
          static PyObject *wrap_Object(const ArmenianStemmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
