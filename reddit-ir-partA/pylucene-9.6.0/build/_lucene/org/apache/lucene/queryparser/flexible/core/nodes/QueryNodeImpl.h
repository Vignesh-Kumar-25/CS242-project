#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Class;
    class CloneNotSupportedException;
    class Cloneable;
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

              class QueryNodeImpl : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3353d9f14bbfd91a,
                  mid_add_1a2e28000748bc88,
                  mid_add_8fd536b733ad4249,
                  mid_clone_d7e8adcabfecf417,
                  mid_cloneTree_d7e8adcabfecf417,
                  mid_containsTag_77e0b5c3eb1962ba,
                  mid_getChildren_0bc66e960964b70a,
                  mid_getParent_d7e8adcabfecf417,
                  mid_getTag_b03820155b67db98,
                  mid_getTagMap_19f838df22aacf85,
                  mid_isLeaf_ee8b0a5fa521ddac,
                  mid_removeChildren_8fd536b733ad4249,
                  mid_removeFromParent_3353d9f14bbfd91a,
                  mid_set_1a2e28000748bc88,
                  mid_setTag_d3d9e43ce4a29095,
                  mid_toString_dc633f13a47328a8,
                  mid_unsetTag_4a883f7810d2effa,
                  mid_setLeaf_4f96af910856b303,
                  mid_isDefaultField_f6ed35df00b05129,
                  mid_isRoot_ee8b0a5fa521ddac,
                  mid_allocate_3353d9f14bbfd91a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeImpl(const QueryNodeImpl& obj) : ::java::lang::Object(obj) {}

                static ::java::lang::String *PLAINTEXT_FIELD_NAME;

                QueryNodeImpl();

                void add(const ::java::util::List &) const;
                void add(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode clone() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                jboolean containsTag(const ::java::lang::String &) const;
                ::java::util::List getChildren() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode getParent() const;
                ::java::lang::Object getTag(const ::java::lang::String &) const;
                ::java::util::Map getTagMap() const;
                jboolean isLeaf() const;
                void removeChildren(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void removeFromParent() const;
                void set(const ::java::util::List &) const;
                void setTag(const ::java::lang::String &, const ::java::lang::Object &) const;
                ::java::lang::String toString() const;
                void unsetTag(const ::java::lang::String &) const;
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
              extern PyType_Def PY_TYPE_DEF(QueryNodeImpl);
              extern PyTypeObject *PY_TYPE(QueryNodeImpl);

              class t_QueryNodeImpl {
              public:
                PyObject_HEAD
                QueryNodeImpl object;
                static PyObject *wrap_Object(const QueryNodeImpl&);
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
