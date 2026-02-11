#ifndef org_apache_lucene_search_uhighlight_PassageScorer_H
#define org_apache_lucene_search_uhighlight_PassageScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class Passage;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class PassageScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_14f56bf6b53c4897,
              mid_norm_cc3c9b7e666e88d5,
              mid_score_68be1de0b2c64364,
              mid_tf_5a508175754b7f99,
              mid_weight_5a508175754b7f99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageScorer(const PassageScorer& obj) : ::java::lang::Object(obj) {}

            PassageScorer();
            PassageScorer(jfloat, jfloat, jfloat);

            jfloat norm(jint) const;
            jfloat score(const ::org::apache::lucene::search::uhighlight::Passage &, jint) const;
            jfloat tf(jint, jint) const;
            jfloat weight(jint, jint) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(PassageScorer);
          extern PyTypeObject *PY_TYPE(PassageScorer);

          class t_PassageScorer {
          public:
            PyObject_HEAD
            PassageScorer object;
            static PyObject *wrap_Object(const PassageScorer&);
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
