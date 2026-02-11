#ifndef org_apache_lucene_search_similarities_TFIDFSimilarity_H
#define org_apache_lucene_search_similarities_TFIDFSimilarity_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class TermStatistics;
        namespace similarities {
          class Similarity$SimScorer;
        }
        class CollectionStatistics;
      }
      namespace index {
        class FieldInvertState;
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
        namespace similarities {

          class TFIDFSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_computeNorm_be117a53e4614893,
              mid_getDiscountOverlaps_ee8b0a5fa521ddac,
              mid_idf_8eedd45047b439d2,
              mid_idfExplain_b2abcbbf8d7a9bf0,
              mid_idfExplain_eb5ef6dcbf1ce4ad,
              mid_lengthNorm_cc3c9b7e666e88d5,
              mid_scorer_33adf81e84eefec3,
              mid_setDiscountOverlaps_4f96af910856b303,
              mid_tf_0d6098a24f544e47,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TFIDFSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TFIDFSimilarity(const TFIDFSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            TFIDFSimilarity();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jboolean getDiscountOverlaps() const;
            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            jfloat lengthNorm(jint) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            void setDiscountOverlaps(jboolean) const;
            jfloat tf(jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(TFIDFSimilarity);
          extern PyTypeObject *PY_TYPE(TFIDFSimilarity);

          class t_TFIDFSimilarity {
          public:
            PyObject_HEAD
            TFIDFSimilarity object;
            static PyObject *wrap_Object(const TFIDFSimilarity&);
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
