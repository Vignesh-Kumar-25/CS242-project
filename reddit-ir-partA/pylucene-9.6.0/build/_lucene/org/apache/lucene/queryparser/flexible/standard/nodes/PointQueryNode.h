#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_PointQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_PointQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace java {
  namespace lang {
    class Number;
    class CharSequence;
    class Class;
    class String;
  }
  namespace text {
    class NumberFormat;
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

              class PointQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_13af0f43641970cc,
                  mid_getField_1487175e1bd58fa5,
                  mid_getNumberFormat_3f16f67992196800,
                  mid_getValue_72def02dd614d827,
                  mid_setField_b00f79ee482db81d,
                  mid_setNumberFormat_35b56184f5da0c68,
                  mid_setValue_c7d623afba71fc5b,
                  mid_toQueryString_0fc4c0ffb620828a,
                  mid_toString_dc633f13a47328a8,
                  mid_getTermEscaped_0fc4c0ffb620828a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PointQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PointQueryNode(const PointQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                PointQueryNode(const ::java::lang::CharSequence &, const ::java::lang::Number &, const ::java::text::NumberFormat &);

                ::java::lang::CharSequence getField() const;
                ::java::text::NumberFormat getNumberFormat() const;
                ::java::lang::Number getValue() const;
                void setField(const ::java::lang::CharSequence &) const;
                void setNumberFormat(const ::java::text::NumberFormat &) const;
                void setValue(const ::java::lang::Number &) const;
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
              extern PyType_Def PY_TYPE_DEF(PointQueryNode);
              extern PyTypeObject *PY_TYPE(PointQueryNode);

              class t_PointQueryNode {
              public:
                PyObject_HEAD
                PointQueryNode object;
                static PyObject *wrap_Object(const PointQueryNode&);
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
