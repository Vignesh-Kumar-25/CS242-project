#ifndef org_apache_lucene_search_PhraseWeight_H
#define org_apache_lucene_search_PhraseWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class Scorer;
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

        class PhraseWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_explain_36f8550bdb83cd3a,
            mid_isCacheable_7f6d289efb1f533f,
            mid_matches_ea51d1aa7ef1abf6,
            mid_scorer_bdd7c3e9f89ed598,
            mid_getStats_e1503edd064d9562,
            mid_getPhraseMatcher_5c0cb71d654f6adc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseWeight(const PhraseWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PhraseWeight);
        extern PyTypeObject *PY_TYPE(PhraseWeight);

        class t_PhraseWeight {
        public:
          PyObject_HEAD
          PhraseWeight object;
          static PyObject *wrap_Object(const PhraseWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
