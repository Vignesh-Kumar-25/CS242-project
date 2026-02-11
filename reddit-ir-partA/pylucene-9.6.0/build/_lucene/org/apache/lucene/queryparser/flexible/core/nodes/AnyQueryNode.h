#ifndef org_apache_lucene_queryparser_flexible_core_nodes_AnyQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_AnyQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/AndQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class CharSequence;
    class Class;
    class CloneNotSupportedException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class AnyQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode {
               public:
                enum {
                  mid_init$_1a7462a9e7cd06d9,
                  mid_cloneTree_d7e8adcabfecf417,
                  mid_getField_1487175e1bd58fa5,
                  mid_getFieldAsString_dc633f13a47328a8,
                  mid_getMinimumMatchingElements_15aa3d485e96b665,
                  mid_setField_b00f79ee482db81d,
                  mid_toQueryString_0fc4c0ffb620828a,
                  mid_toString_dc633f13a47328a8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AnyQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AnyQueryNode(const AnyQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode(obj) {}

                AnyQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, jint);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                jint getMinimumMatchingElements() const;
                void setField(const ::java::lang::CharSequence &) const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
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
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(AnyQueryNode);
              extern PyTypeObject *PY_TYPE(AnyQueryNode);

              class t_AnyQueryNode {
              public:
                PyObject_HEAD
                AnyQueryNode object;
                static PyObject *wrap_Object(const AnyQueryNode&);
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
