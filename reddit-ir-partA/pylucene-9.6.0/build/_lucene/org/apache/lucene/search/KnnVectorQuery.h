#ifndef org_apache_lucene_search_KnnVectorQuery_H
#define org_apache_lucene_search_KnnVectorQuery_H

#include "org/apache/lucene/search/KnnFloatVectorQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class KnnVectorQuery : public ::org::apache::lucene::search::KnnFloatVectorQuery {
         public:
          enum {
            mid_init$_39fee07b00877200,
            mid_init$_32174603768177a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorQuery(jobject obj) : ::org::apache::lucene::search::KnnFloatVectorQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorQuery(const KnnVectorQuery& obj) : ::org::apache::lucene::search::KnnFloatVectorQuery(obj) {}

          KnnVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, jint);
          KnnVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::search::Query &);
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
        extern PyType_Def PY_TYPE_DEF(KnnVectorQuery);
        extern PyTypeObject *PY_TYPE(KnnVectorQuery);

        class t_KnnVectorQuery {
        public:
          PyObject_HEAD
          KnnVectorQuery object;
          static PyObject *wrap_Object(const KnnVectorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
