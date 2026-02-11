#ifndef org_apache_lucene_search_QueryRescorer_H
#define org_apache_lucene_search_QueryRescorer_H

#include "org/apache/lucene/search/Rescorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
        class Explanation;
        class TopDocs;
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

        class QueryRescorer : public ::org::apache::lucene::search::Rescorer {
         public:
          enum {
            mid_init$_60638ee06ec0416b,
            mid_explain_3f41d42ef6815ded,
            mid_rescore_5d0fbf45a4594016,
            mid_rescore_d98acef2b526777e,
            mid_combine_465ccf7f1cf6b60d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryRescorer(jobject obj) : ::org::apache::lucene::search::Rescorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryRescorer(const QueryRescorer& obj) : ::org::apache::lucene::search::Rescorer(obj) {}

          QueryRescorer(const ::org::apache::lucene::search::Query &);

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Explanation &, jint) const;
          ::org::apache::lucene::search::TopDocs rescore(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &, jint) const;
          static ::org::apache::lucene::search::TopDocs rescore(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &, const ::org::apache::lucene::search::Query &, jdouble, jint);
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
        extern PyType_Def PY_TYPE_DEF(QueryRescorer);
        extern PyTypeObject *PY_TYPE(QueryRescorer);

        class t_QueryRescorer {
        public:
          PyObject_HEAD
          QueryRescorer object;
          static PyObject *wrap_Object(const QueryRescorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
