#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_PrefixWildcardQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_PrefixWildcardQueryNode_H

#include "org/apache/lucene/queryparser/flexible/standard/nodes/WildcardQueryNode.h"

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
          namespace standard {
            namespace nodes {
              class PrefixWildcardQueryNode;
            }
          }
          namespace core {
            namespace nodes {
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
          namespace standard {
            namespace nodes {

              class PrefixWildcardQueryNode : public ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode {
               public:
                enum {
                  mid_init$_f2bc13e5b5bcb407,
                  mid_init$_e621908edc857219,
                  mid_cloneTree_24b41128f7bd4778,
                  mid_toString_dc633f13a47328a8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PrefixWildcardQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PrefixWildcardQueryNode(const PrefixWildcardQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode(obj) {}

                PrefixWildcardQueryNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode &);
                PrefixWildcardQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                PrefixWildcardQueryNode cloneTree() const;
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
              extern PyType_Def PY_TYPE_DEF(PrefixWildcardQueryNode);
              extern PyTypeObject *PY_TYPE(PrefixWildcardQueryNode);

              class t_PrefixWildcardQueryNode {
              public:
                PyObject_HEAD
                PrefixWildcardQueryNode object;
                static PyObject *wrap_Object(const PrefixWildcardQueryNode&);
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
