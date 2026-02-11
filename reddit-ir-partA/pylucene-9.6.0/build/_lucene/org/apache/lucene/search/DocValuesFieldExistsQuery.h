#ifndef org_apache_lucene_search_DocValuesFieldExistsQuery_H
#define org_apache_lucene_search_DocValuesFieldExistsQuery_H

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

        class DocValuesFieldExistsQuery : public ::org::apache::lucene::search::FieldExistsQuery {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesFieldExistsQuery(jobject obj) : ::org::apache::lucene::search::FieldExistsQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesFieldExistsQuery(const DocValuesFieldExistsQuery& obj) : ::org::apache::lucene::search::FieldExistsQuery(obj) {}

          DocValuesFieldExistsQuery(const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(DocValuesFieldExistsQuery);
        extern PyTypeObject *PY_TYPE(DocValuesFieldExistsQuery);

        class t_DocValuesFieldExistsQuery {
        public:
          PyObject_HEAD
          DocValuesFieldExistsQuery object;
          static PyObject *wrap_Object(const DocValuesFieldExistsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
