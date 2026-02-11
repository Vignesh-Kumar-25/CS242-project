#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H

#include "org/apache/lucene/queryparser/flexible/core/QueryNodeException.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {
            class Message;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryNodeParseException : public ::org::apache::lucene::queryparser::flexible::core::QueryNodeException {
             public:
              enum {
                mid_init$_923f33f8220e0899,
                mid_init$_ef75518c77ddb275,
                mid_init$_47f1eb71b33e42a0,
                mid_getBeginColumn_15aa3d485e96b665,
                mid_getBeginLine_15aa3d485e96b665,
                mid_getErrorToken_dc633f13a47328a8,
                mid_getQuery_1487175e1bd58fa5,
                mid_setNonLocalizedMessage_ef75518c77ddb275,
                mid_setQuery_b00f79ee482db81d,
                mid_setErrorToken_4a883f7810d2effa,
                mid_setBeginLine_da425451c8de636b,
                mid_setBeginColumn_da425451c8de636b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeParseException(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeException(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeParseException(const QueryNodeParseException& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeException(obj) {}

              QueryNodeParseException(const ::java::lang::Throwable &);
              QueryNodeParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              jint getBeginColumn() const;
              jint getBeginLine() const;
              ::java::lang::String getErrorToken() const;
              ::java::lang::CharSequence getQuery() const;
              void setNonLocalizedMessage(const ::org::apache::lucene::queryparser::flexible::messages::Message &) const;
              void setQuery(const ::java::lang::CharSequence &) const;
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
            extern PyType_Def PY_TYPE_DEF(QueryNodeParseException);
            extern PyTypeObject *PY_TYPE(QueryNodeParseException);

            class t_QueryNodeParseException {
            public:
              PyObject_HEAD
              QueryNodeParseException object;
              static PyObject *wrap_Object(const QueryNodeParseException&);
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
