#ifndef org_apache_lucene_search_highlight_QueryTermExtractor_H
#define org_apache_lucene_search_highlight_QueryTermExtractor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace highlight {
          class WeightedTerm;
        }
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

          class QueryTermExtractor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_getIdfWeightedTerms_c3e3fcef67421763,
              mid_getTerms_33f90b33a842e308,
              mid_getTerms_c7624b97e8065610,
              mid_getTerms_f4efcf873a4a4897,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTermExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryTermExtractor(const QueryTermExtractor& obj) : ::java::lang::Object(obj) {}

            QueryTermExtractor();

            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getIdfWeightedTerms(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &, jboolean);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &, jboolean, const ::java::lang::String &);
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
          extern PyType_Def PY_TYPE_DEF(QueryTermExtractor);
          extern PyTypeObject *PY_TYPE(QueryTermExtractor);

          class t_QueryTermExtractor {
          public:
            PyObject_HEAD
            QueryTermExtractor object;
            static PyObject *wrap_Object(const QueryTermExtractor&);
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
