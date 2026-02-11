#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorImpl_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            class QueryNodeException;
            namespace config {
              class QueryConfigHandler;
            }
            namespace processors {
              class QueryNodeProcessor;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace processors {

              class QueryNodeProcessorImpl : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3353d9f14bbfd91a,
                  mid_init$_35db791de6b12627,
                  mid_getQueryConfigHandler_512928cbb623ab42,
                  mid_process_5b40657c8df69ae6,
                  mid_setQueryConfigHandler_35db791de6b12627,
                  mid_preProcessNode_5b40657c8df69ae6,
                  mid_postProcessNode_5b40657c8df69ae6,
                  mid_setChildrenOrder_8cdc94b2f26ee964,
                  mid_processChildren_8fd536b733ad4249,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeProcessorImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeProcessorImpl(const QueryNodeProcessorImpl& obj) : ::java::lang::Object(obj) {}

                QueryNodeProcessorImpl();
                QueryNodeProcessorImpl(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);

                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
              };
            }
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
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(QueryNodeProcessorImpl);
              extern PyTypeObject *PY_TYPE(QueryNodeProcessorImpl);

              class t_QueryNodeProcessorImpl {
              public:
                PyObject_HEAD
                QueryNodeProcessorImpl object;
                static PyObject *wrap_Object(const QueryNodeProcessorImpl&);
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
}

#endif
