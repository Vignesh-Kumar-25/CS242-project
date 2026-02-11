#ifndef org_apache_lucene_search_spell_JaroWinklerDistance_H
#define org_apache_lucene_search_spell_JaroWinklerDistance_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class StringDistance;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class JaroWinklerDistance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_equals_6084f78e09b6c0c3,
              mid_getDistance_526cb5efabbaf83c,
              mid_getThreshold_15cd8574741b1394,
              mid_hashCode_15aa3d485e96b665,
              mid_setThreshold_354c036766ff84b4,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JaroWinklerDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JaroWinklerDistance(const JaroWinklerDistance& obj) : ::java::lang::Object(obj) {}

            JaroWinklerDistance();

            jboolean equals(const ::java::lang::Object &) const;
            jfloat getDistance(const ::java::lang::String &, const ::java::lang::String &) const;
            jfloat getThreshold() const;
            jint hashCode() const;
            void setThreshold(jfloat) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(JaroWinklerDistance);
          extern PyTypeObject *PY_TYPE(JaroWinklerDistance);

          class t_JaroWinklerDistance {
          public:
            PyObject_HEAD
            JaroWinklerDistance object;
            static PyObject *wrap_Object(const JaroWinklerDistance&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
