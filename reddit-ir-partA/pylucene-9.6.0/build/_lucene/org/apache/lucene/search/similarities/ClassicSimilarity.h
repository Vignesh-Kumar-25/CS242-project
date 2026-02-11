#ifndef org_apache_lucene_search_similarities_ClassicSimilarity_H
#define org_apache_lucene_search_similarities_ClassicSimilarity_H

#include "org/apache/lucene/search/similarities/TFIDFSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class TermStatistics;
        class CollectionStatistics;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class ClassicSimilarity : public ::org::apache::lucene::search::similarities::TFIDFSimilarity {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_idf_8eedd45047b439d2,
              mid_idfExplain_eb5ef6dcbf1ce4ad,
              mid_lengthNorm_cc3c9b7e666e88d5,
              mid_tf_0d6098a24f544e47,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::TFIDFSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicSimilarity(const ClassicSimilarity& obj) : ::org::apache::lucene::search::similarities::TFIDFSimilarity(obj) {}

            ClassicSimilarity();

            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            jfloat lengthNorm(jint) const;
            jfloat tf(jfloat) const;
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
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(ClassicSimilarity);
          extern PyTypeObject *PY_TYPE(ClassicSimilarity);

          class t_ClassicSimilarity {
          public:
            PyObject_HEAD
            ClassicSimilarity object;
            static PyObject *wrap_Object(const ClassicSimilarity&);
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
