#ifndef org_apache_lucene_search_similarities_SimilarityBase_H
#define org_apache_lucene_search_similarities_SimilarityBase_H

#include "org/apache/lucene/search/similarities/Similarity.h"

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

          class SimilarityBase : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_computeNorm_be117a53e4614893,
              mid_getDiscountOverlaps_ee8b0a5fa521ddac,
              mid_log2_7c88f981e0181669,
              mid_scorer_33adf81e84eefec3,
              mid_setDiscountOverlaps_4f96af910856b303,
              mid_toString_dc633f13a47328a8,
              mid_explain_5a7a052126cad006,
              mid_explain_47bf8a0edfcdca9f,
              mid_score_be35337652c82dfe,
              mid_newStats_76df2825d84ca171,
              mid_fillBasicStats_fcc6da876ae00bdd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimilarityBase(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimilarityBase(const SimilarityBase& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            SimilarityBase();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jboolean getDiscountOverlaps() const;
            static jdouble log2(jdouble);
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            void setDiscountOverlaps(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(SimilarityBase);
          extern PyTypeObject *PY_TYPE(SimilarityBase);

          class t_SimilarityBase {
          public:
            PyObject_HEAD
            SimilarityBase object;
            static PyObject *wrap_Object(const SimilarityBase&);
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
