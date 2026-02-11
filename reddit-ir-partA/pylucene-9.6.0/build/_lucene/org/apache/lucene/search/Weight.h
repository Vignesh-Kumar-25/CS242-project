#ifndef org_apache_lucene_search_Weight_H
#define org_apache_lucene_search_Weight_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class Explanation;
        class ScorerSupplier;
        class Scorer;
        class SegmentCacheable;
        class BulkScorer;
        class Matches;
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

        class Weight : public ::java::lang::Object {
         public:
          enum {
            mid_bulkScorer_d09b0f7e18a37f2a,
            mid_count_4d1f88ab1427afdf,
            mid_explain_36f8550bdb83cd3a,
            mid_getQuery_0b32ec998a0c18fa,
            mid_matches_ea51d1aa7ef1abf6,
            mid_scorer_bdd7c3e9f89ed598,
            mid_scorerSupplier_222cba90348c04f3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Weight(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Weight(const Weight& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::BulkScorer bulkScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jint count(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          ::org::apache::lucene::search::Query getQuery() const;
          ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScorerSupplier scorerSupplier(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(Weight);
        extern PyTypeObject *PY_TYPE(Weight);

        class t_Weight {
        public:
          PyObject_HEAD
          Weight object;
          static PyObject *wrap_Object(const Weight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
