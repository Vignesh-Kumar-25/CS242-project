#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeError_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeError_H

#include "java/lang/Error.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {
            class NLSException;
            class Message;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryNodeError : public ::java::lang::Error {
             public:
              enum {
                mid_init$_923f33f8220e0899,
                mid_init$_ef75518c77ddb275,
                mid_init$_47f1eb71b33e42a0,
                mid_getMessageObject_47cceacf481e2d94,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeError(jobject obj) : ::java::lang::Error(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeError(const QueryNodeError& obj) : ::java::lang::Error(obj) {}

              QueryNodeError(const ::java::lang::Throwable &);
              QueryNodeError(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeError(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              ::org::apache::lucene::queryparser::flexible::messages::Message getMessageObject() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            extern PyType_Def PY_TYPE_DEF(QueryNodeError);
            extern PyTypeObject *PY_TYPE(QueryNodeError);

            class t_QueryNodeError {
            public:
              PyObject_HEAD
              QueryNodeError object;
              static PyObject *wrap_Object(const QueryNodeError&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
