#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_IntervalQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_IntervalQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class FieldableNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
            }
          }
          namespace standard {
            namespace nodes {
              namespace intervalfn {
                class IntervalFunction;
              }
              class IntervalQueryNode;
            }
          }
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
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

              class IntervalQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_0aec86fe545c69da,
                  mid_cloneTree_def7be1a0fa5e65a,
                  mid_getField_1487175e1bd58fa5,
                  mid_getQuery_0b32ec998a0c18fa,
                  mid_setAnalyzer_cea12a5ff05f6816,
                  mid_setField_b00f79ee482db81d,
                  mid_toQueryString_a0018089a5e07824,
                  mid_toString_dc633f13a47328a8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit IntervalQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                IntervalQueryNode(const IntervalQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                IntervalQueryNode(const ::java::lang::String &, const ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction &);

                IntervalQueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::org::apache::lucene::search::Query getQuery() const;
                void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
                void setField(const ::java::lang::CharSequence &) const;
                ::java::lang::String toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
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
              extern PyType_Def PY_TYPE_DEF(IntervalQueryNode);
              extern PyTypeObject *PY_TYPE(IntervalQueryNode);

              class t_IntervalQueryNode {
              public:
                PyObject_HEAD
                IntervalQueryNode object;
                static PyObject *wrap_Object(const IntervalQueryNode&);
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
