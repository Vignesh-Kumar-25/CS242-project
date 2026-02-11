#ifndef org_apache_lucene_queryparser_flexible_standard_processors_BooleanQuery2ModifierNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_BooleanQuery2ModifierNodeProcessor_H

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
          namespace standard {
            namespace processors {

              class BooleanQuery2ModifierNodeProcessor : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3353d9f14bbfd91a,
                  mid_getQueryConfigHandler_512928cbb623ab42,
                  mid_process_5b40657c8df69ae6,
                  mid_setQueryConfigHandler_35db791de6b12627,
                  mid_preProcessNode_5b40657c8df69ae6,
                  mid_postProcessNode_5b40657c8df69ae6,
                  mid_processChildren_8fd536b733ad4249,
                  mid_fillChildrenBufferAndApplyModifiery_8fd536b733ad4249,
                  mid_isDefaultBooleanQueryNode_e64c616be1f748e4,
                  mid_tagModifierButDoNotOverride_380d4f9ea4a22199,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit BooleanQuery2ModifierNodeProcessor(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                BooleanQuery2ModifierNodeProcessor(const BooleanQuery2ModifierNodeProcessor& obj) : ::java::lang::Object(obj) {}

                BooleanQuery2ModifierNodeProcessor();

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
          namespace standard {
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(BooleanQuery2ModifierNodeProcessor);
              extern PyTypeObject *PY_TYPE(BooleanQuery2ModifierNodeProcessor);

              class t_BooleanQuery2ModifierNodeProcessor {
              public:
                PyObject_HEAD
                BooleanQuery2ModifierNodeProcessor object;
                static PyObject *wrap_Object(const BooleanQuery2ModifierNodeProcessor&);
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
