#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
    class CloneNotSupportedException;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              class EscapeQuerySyntax;
            }
            namespace nodes {
              class TextableQueryNode;
              class FieldValuePairQueryNode;
              class FieldQueryNode;
            }
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
            namespace nodes {

              class FieldQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_e621908edc857219,
                  mid_cloneTree_5533d54f1eedb9ae,
                  mid_getBegin_15aa3d485e96b665,
                  mid_getEnd_15aa3d485e96b665,
                  mid_getField_1487175e1bd58fa5,
                  mid_getFieldAsString_dc633f13a47328a8,
                  mid_getPositionIncrement_15aa3d485e96b665,
                  mid_getText_1487175e1bd58fa5,
                  mid_getTextAsString_dc633f13a47328a8,
                  mid_getValue_1487175e1bd58fa5,
                  mid_setBegin_da425451c8de636b,
                  mid_setEnd_da425451c8de636b,
                  mid_setField_b00f79ee482db81d,
                  mid_setPositionIncrement_da425451c8de636b,
                  mid_setText_b00f79ee482db81d,
                  mid_setValue_b00f79ee482db81d,
                  mid_toQueryString_0fc4c0ffb620828a,
                  mid_toString_dc633f13a47328a8,
                  mid_getTermEscaped_0fc4c0ffb620828a,
                  mid_getTermEscapeQuoted_0fc4c0ffb620828a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldQueryNode(const FieldQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                FieldQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                FieldQueryNode cloneTree() const;
                jint getBegin() const;
                jint getEnd() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                jint getPositionIncrement() const;
                ::java::lang::CharSequence getText() const;
                ::java::lang::String getTextAsString() const;
                ::java::lang::CharSequence getValue() const;
                void setBegin(jint) const;
                void setEnd(jint) const;
                void setField(const ::java::lang::CharSequence &) const;
                void setPositionIncrement(jint) const;
                void setText(const ::java::lang::CharSequence &) const;
                void setValue(const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(FieldQueryNode);
              extern PyTypeObject *PY_TYPE(FieldQueryNode);

              class t_FieldQueryNode {
              public:
                PyObject_HEAD
                FieldQueryNode object;
                static PyObject *wrap_Object(const FieldQueryNode&);
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
