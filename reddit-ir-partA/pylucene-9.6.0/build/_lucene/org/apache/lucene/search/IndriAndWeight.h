#ifndef org_apache_lucene_search_IndriAndWeight_H
#define org_apache_lucene_search_IndriAndWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class Explanation;
        class Scorer;
        class ScoreMode;
        class BulkScorer;
        class IndriAndQuery;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriAndWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_init$_85a4efbe0ab1db5a,
            mid_bulkScorer_d09b0f7e18a37f2a,
            mid_explain_36f8550bdb83cd3a,
            mid_isCacheable_7f6d289efb1f533f,
            mid_scorer_bdd7c3e9f89ed598,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriAndWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriAndWeight(const IndriAndWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

          IndriAndWeight(const ::org::apache::lucene::search::IndriAndQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat);

          ::org::apache::lucene::search::BulkScorer bulkScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(IndriAndWeight);
        extern PyTypeObject *PY_TYPE(IndriAndWeight);

        class t_IndriAndWeight {
        public:
          PyObject_HEAD
          IndriAndWeight object;
          static PyObject *wrap_Object(const IndriAndWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
