#ifndef org_apache_lucene_search_similarities_BM25Similarity_H
#define org_apache_lucene_search_similarities_BM25Similarity_H

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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class BM25Similarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_4f96af910856b303,
              mid_init$_798c1353e7b22f8d,
              mid_init$_cb1f2d93e188e8a1,
              mid_computeNorm_be117a53e4614893,
              mid_getB_15cd8574741b1394,
              mid_getDiscountOverlaps_ee8b0a5fa521ddac,
              mid_getK1_15cd8574741b1394,
              mid_idfExplain_b2abcbbf8d7a9bf0,
              mid_idfExplain_eb5ef6dcbf1ce4ad,
              mid_scorer_33adf81e84eefec3,
              mid_toString_dc633f13a47328a8,
              mid_idf_8eedd45047b439d2,
              mid_avgFieldLength_0ecc9a1e03c19ba2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BM25Similarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BM25Similarity(const BM25Similarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            BM25Similarity();
            BM25Similarity(jboolean);
            BM25Similarity(jfloat, jfloat);
            BM25Similarity(jfloat, jfloat, jboolean);

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jfloat getB() const;
            jboolean getDiscountOverlaps() const;
            jfloat getK1() const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
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
          extern PyType_Def PY_TYPE_DEF(BM25Similarity);
          extern PyTypeObject *PY_TYPE(BM25Similarity);

          class t_BM25Similarity {
          public:
            PyObject_HEAD
            BM25Similarity object;
            static PyObject *wrap_Object(const BM25Similarity&);
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
