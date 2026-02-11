#ifndef org_apache_pylucene_search_similarities_PythonSimilarity_H
#define org_apache_pylucene_search_similarities_PythonSimilarity_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInvertState;
      }
      namespace search {
        class TermStatistics;
        namespace similarities {
          class Similarity$SimScorer;
        }
        class CollectionStatistics;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {

          class PythonSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_computeNorm_be117a53e4614893,
              mid_finalize_3353d9f14bbfd91a,
              mid_pythonDecRef_3353d9f14bbfd91a,
              mid_pythonExtension_058f5911dcf5d8a4,
              mid_pythonExtension_db2028ac45cd5b77,
              mid_scorer_33adf81e84eefec3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonSimilarity(const PythonSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            PythonSimilarity();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            void finalize() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(PythonSimilarity);
          extern PyTypeObject *PY_TYPE(PythonSimilarity);

          class t_PythonSimilarity {
          public:
            PyObject_HEAD
            PythonSimilarity object;
            static PyObject *wrap_Object(const PythonSimilarity&);
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
