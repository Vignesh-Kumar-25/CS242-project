#ifndef org_apache_lucene_sandbox_search_QueryProfilerIndexSearcher_H
#define org_apache_lucene_sandbox_search_QueryProfilerIndexSearcher_H

#include "org/apache/lucene/search/IndexSearcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class ScoreMode;
        class Weight;
      }
      namespace sandbox {
        namespace search {
          class QueryProfilerResult;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
      namespace sandbox {
        namespace search {

          class QueryProfilerIndexSearcher : public ::org::apache::lucene::search::IndexSearcher {
           public:
            enum {
              mid_init$_f48a27e209678b8f,
              mid_createWeight_d1787431f7f105c4,
              mid_getProfileResult_0bc66e960964b70a,
              mid_getRewriteTime_058f5911dcf5d8a4,
              mid_rewrite_5a65f017700c85fe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryProfilerIndexSearcher(jobject obj) : ::org::apache::lucene::search::IndexSearcher(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryProfilerIndexSearcher(const QueryProfilerIndexSearcher& obj) : ::org::apache::lucene::search::IndexSearcher(obj) {}

            QueryProfilerIndexSearcher(const ::org::apache::lucene::index::IndexReader &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            ::java::util::List getProfileResult() const;
            jlong getRewriteTime() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::Query &) const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(QueryProfilerIndexSearcher);
          extern PyTypeObject *PY_TYPE(QueryProfilerIndexSearcher);

          class t_QueryProfilerIndexSearcher {
          public:
            PyObject_HEAD
            QueryProfilerIndexSearcher object;
            static PyObject *wrap_Object(const QueryProfilerIndexSearcher&);
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
