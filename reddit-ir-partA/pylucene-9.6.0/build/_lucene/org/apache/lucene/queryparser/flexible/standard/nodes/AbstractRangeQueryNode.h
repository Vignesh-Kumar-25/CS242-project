#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_AbstractRangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_AbstractRangeQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
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
              class RangeQueryNode;
              class FieldValuePairQueryNode;
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
          namespace standard {
            namespace nodes {

              class AbstractRangeQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_getField_1487175e1bd58fa5,
                  mid_getLowerBound_6976d54e71646912,
                  mid_getUpperBound_6976d54e71646912,
                  mid_isLowerInclusive_ee8b0a5fa521ddac,
                  mid_isUpperInclusive_ee8b0a5fa521ddac,
                  mid_setBounds_9558cf50e8310a9a,
                  mid_setField_b00f79ee482db81d,
                  mid_toQueryString_0fc4c0ffb620828a,
                  mid_toString_dc633f13a47328a8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AbstractRangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AbstractRangeQueryNode(const AbstractRangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                ::java::lang::CharSequence getField() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getLowerBound() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getUpperBound() const;
                jboolean isLowerInclusive() const;
                jboolean isUpperInclusive() const;
                void setBounds(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode &, const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode &, jboolean, jboolean) const;
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
          namespace standard {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(AbstractRangeQueryNode);
              extern PyTypeObject *PY_TYPE(AbstractRangeQueryNode);

              class t_AbstractRangeQueryNode {
              public:
                PyObject_HEAD
                AbstractRangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AbstractRangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AbstractRangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AbstractRangeQueryNode&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
