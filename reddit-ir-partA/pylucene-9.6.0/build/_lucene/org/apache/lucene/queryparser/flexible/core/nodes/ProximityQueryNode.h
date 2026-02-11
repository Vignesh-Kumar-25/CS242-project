#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
              class ProximityQueryNode$Type;
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

              class ProximityQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode {
               public:
                enum {
                  mid_init$_c24eea2333250634,
                  mid_init$_14677996d6d029ed,
                  mid_cloneTree_d7e8adcabfecf417,
                  mid_getDistance_15aa3d485e96b665,
                  mid_getField_1487175e1bd58fa5,
                  mid_getFieldAsString_dc633f13a47328a8,
                  mid_getProximityType_b504f9b431a52fb2,
                  mid_isInOrder_ee8b0a5fa521ddac,
                  mid_setField_b00f79ee482db81d,
                  mid_toQueryString_0fc4c0ffb620828a,
                  mid_toString_dc633f13a47328a8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ProximityQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ProximityQueryNode(const ProximityQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {}

                ProximityQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jboolean);
                ProximityQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jint, jboolean);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                jint getDistance() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type getProximityType() const;
                jboolean isInOrder() const;
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
              extern PyType_Def PY_TYPE_DEF(ProximityQueryNode);
              extern PyTypeObject *PY_TYPE(ProximityQueryNode);

              class t_ProximityQueryNode {
              public:
                PyObject_HEAD
                ProximityQueryNode object;
                static PyObject *wrap_Object(const ProximityQueryNode&);
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
