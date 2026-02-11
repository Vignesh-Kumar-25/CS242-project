#ifndef org_apache_lucene_search_highlight_QueryTermScorer_H
#define org_apache_lucene_search_highlight_QueryTermScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace highlight {
          class Scorer;
          class WeightedTerm;
          class TextFragment;
        }
      }
      namespace analysis {
        class TokenStream;
      }
      namespace index {
        class IndexReader;
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
        namespace highlight {

          class QueryTermScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_adf6609733e76265,
              mid_init$_60638ee06ec0416b,
              mid_init$_93b96c8b14ec99bd,
              mid_init$_d4d7def7ff622422,
              mid_allFragmentsProcessed_3353d9f14bbfd91a,
              mid_getFragmentScore_15cd8574741b1394,
              mid_getMaxTermWeight_15cd8574741b1394,
              mid_getTokenScore_15cd8574741b1394,
              mid_init_879ac71ff4d4fee2,
              mid_startFragment_9d6a693cd43dcd24,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTermScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryTermScorer(const QueryTermScorer& obj) : ::java::lang::Object(obj) {}

            QueryTermScorer(const JArray< ::org::apache::lucene::search::highlight::WeightedTerm > &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

            void allFragmentsProcessed() const;
            jfloat getFragmentScore() const;
            jfloat getMaxTermWeight() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            void startFragment(const ::org::apache::lucene::search::highlight::TextFragment &) const;
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(QueryTermScorer);
          extern PyTypeObject *PY_TYPE(QueryTermScorer);

          class t_QueryTermScorer {
          public:
            PyObject_HEAD
            QueryTermScorer object;
            static PyObject *wrap_Object(const QueryTermScorer&);
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
