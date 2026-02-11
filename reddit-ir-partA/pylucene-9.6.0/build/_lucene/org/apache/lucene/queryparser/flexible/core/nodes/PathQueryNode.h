#ifndef org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class PathQueryNode$QueryText;
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

              class PathQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_1a2e28000748bc88,
                  mid_cloneTree_d7e8adcabfecf417,
                  mid_getFirstPathElement_1487175e1bd58fa5,
                  mid_getPathElement_608bc69c6afbb8e3,
                  mid_getPathElements_0bc66e960964b70a,
                  mid_getPathElements_eec93c559a36079a,
                  mid_setPathElements_1a2e28000748bc88,
                  mid_toQueryString_0fc4c0ffb620828a,
                  mid_toString_dc633f13a47328a8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PathQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PathQueryNode(const PathQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                PathQueryNode(const ::java::util::List &);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::java::lang::CharSequence getFirstPathElement() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::PathQueryNode$QueryText getPathElement(jint) const;
                ::java::util::List getPathElements() const;
                ::java::util::List getPathElements(jint) const;
                void setPathElements(const ::java::util::List &) const;
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
              extern PyType_Def PY_TYPE_DEF(PathQueryNode);
              extern PyTypeObject *PY_TYPE(PathQueryNode);

              class t_PathQueryNode {
              public:
                PyObject_HEAD
                PathQueryNode object;
                static PyObject *wrap_Object(const PathQueryNode&);
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
