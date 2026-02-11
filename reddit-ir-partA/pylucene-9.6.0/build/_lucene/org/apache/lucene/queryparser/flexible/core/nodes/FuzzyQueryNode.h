#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FuzzyQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FuzzyQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldQueryNode.h"

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
              class FuzzyQueryNode;
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
          namespace core {
            namespace nodes {

              class FuzzyQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode {
               public:
                enum {
                  mid_init$_11dbd8b8df05934d,
                  mid_cloneTree_3f3bf14c6f3ad58e,
                  mid_getPrefixLength_15aa3d485e96b665,
                  mid_getSimilarity_15cd8574741b1394,
                  mid_setPrefixLength_da425451c8de636b,
                  mid_setSimilarity_354c036766ff84b4,
                  mid_toQueryString_0fc4c0ffb620828a,
                  mid_toString_dc633f13a47328a8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FuzzyQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FuzzyQueryNode(const FuzzyQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {}

                FuzzyQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jfloat, jint, jint);

                FuzzyQueryNode cloneTree() const;
                jint getPrefixLength() const;
                jfloat getSimilarity() const;
                void setPrefixLength(jint) const;
                void setSimilarity(jfloat) const;
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
              extern PyType_Def PY_TYPE_DEF(FuzzyQueryNode);
              extern PyTypeObject *PY_TYPE(FuzzyQueryNode);

              class t_FuzzyQueryNode {
              public:
                PyObject_HEAD
                FuzzyQueryNode object;
                static PyObject *wrap_Object(const FuzzyQueryNode&);
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
