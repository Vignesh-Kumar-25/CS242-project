#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class FieldableNode;
              class TextableQueryNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
            }
          }
          namespace standard {
            namespace nodes {
              class RegexpQueryNode;
            }
          }
        }
      }
    }
  }
}
namespace java {
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
          namespace standard {
            namespace nodes {

              class RegexpQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_0e2dd6423c6180d1,
                  mid_init$_e621908edc857219,
                  mid_cloneTree_e09157a437a163ac,
                  mid_getField_1487175e1bd58fa5,
                  mid_getFieldAsString_dc633f13a47328a8,
                  mid_getText_1487175e1bd58fa5,
                  mid_setField_b00f79ee482db81d,
                  mid_setText_b00f79ee482db81d,
                  mid_textToBytesRef_e6961a1ebae5a29a,
                  mid_toQueryString_0fc4c0ffb620828a,
                  mid_toString_dc633f13a47328a8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RegexpQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RegexpQueryNode(const RegexpQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                RegexpQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &);
                RegexpQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                RegexpQueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                ::java::lang::CharSequence getText() const;
                void setField(const ::java::lang::CharSequence &) const;
                void setText(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::util::BytesRef textToBytesRef() const;
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
          namespace standard {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(RegexpQueryNode);
              extern PyTypeObject *PY_TYPE(RegexpQueryNode);

              class t_RegexpQueryNode {
              public:
                PyObject_HEAD
                RegexpQueryNode object;
                static PyObject *wrap_Object(const RegexpQueryNode&);
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
