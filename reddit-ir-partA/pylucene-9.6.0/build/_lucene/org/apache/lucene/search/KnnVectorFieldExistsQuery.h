#ifndef org_apache_lucene_search_KnnVectorFieldExistsQuery_H
#define org_apache_lucene_search_KnnVectorFieldExistsQuery_H

#include "org/apache/lucene/search/FieldExistsQuery.h"

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

        class KnnVectorFieldExistsQuery : public ::org::apache::lucene::search::FieldExistsQuery {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorFieldExistsQuery(jobject obj) : ::org::apache::lucene::search::FieldExistsQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorFieldExistsQuery(const KnnVectorFieldExistsQuery& obj) : ::org::apache::lucene::search::FieldExistsQuery(obj) {}

          KnnVectorFieldExistsQuery(const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(KnnVectorFieldExistsQuery);
        extern PyTypeObject *PY_TYPE(KnnVectorFieldExistsQuery);

        class t_KnnVectorFieldExistsQuery {
        public:
          PyObject_HEAD
          KnnVectorFieldExistsQuery object;
          static PyObject *wrap_Object(const KnnVectorFieldExistsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
