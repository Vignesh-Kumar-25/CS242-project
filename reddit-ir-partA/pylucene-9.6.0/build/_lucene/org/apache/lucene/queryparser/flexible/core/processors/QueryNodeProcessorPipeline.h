#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
    class Collection;
    class ListIterator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            class QueryNodeException;
            namespace config {
              class QueryConfigHandler;
            }
            namespace processors {
              class QueryNodeProcessor;
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
            namespace processors {

              class QueryNodeProcessorPipeline : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3353d9f14bbfd91a,
                  mid_init$_35db791de6b12627,
                  mid_add_69d64eac7a401af2,
                  mid_add_3388303c96ccc4ff,
                  mid_addAll_919ee2b3f5bcb8c4,
                  mid_addAll_548295e08d540f27,
                  mid_clear_3353d9f14bbfd91a,
                  mid_contains_6084f78e09b6c0c3,
                  mid_containsAll_919ee2b3f5bcb8c4,
                  mid_get_c5db4e594edae624,
                  mid_getQueryConfigHandler_512928cbb623ab42,
                  mid_indexOf_cc82b01b9199bc71,
                  mid_isEmpty_ee8b0a5fa521ddac,
                  mid_iterator_7c74834ad8788f5d,
                  mid_lastIndexOf_cc82b01b9199bc71,
                  mid_listIterator_093c1a9d11b7fcb9,
                  mid_listIterator_75e76a2296f6fa62,
                  mid_process_5b40657c8df69ae6,
                  mid_remove_c5db4e594edae624,
                  mid_remove_6084f78e09b6c0c3,
                  mid_removeAll_919ee2b3f5bcb8c4,
                  mid_retainAll_919ee2b3f5bcb8c4,
                  mid_set_22d7d0ce90920a68,
                  mid_setQueryConfigHandler_35db791de6b12627,
                  mid_size_15aa3d485e96b665,
                  mid_subList_4e354260301a5b61,
                  mid_toArray_c2c4aa8d9e7500a9,
                  mid_toArray_a53302d2d48784e1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeProcessorPipeline(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeProcessorPipeline(const QueryNodeProcessorPipeline& obj) : ::java::lang::Object(obj) {}

                QueryNodeProcessorPipeline();
                QueryNodeProcessorPipeline(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);

                jboolean add(const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                void add(jint, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                jboolean addAll(const ::java::util::Collection &) const;
                jboolean addAll(jint, const ::java::util::Collection &) const;
                void clear() const;
                jboolean contains(const ::java::lang::Object &) const;
                jboolean containsAll(const ::java::util::Collection &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor get(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                jint indexOf(const ::java::lang::Object &) const;
                jboolean isEmpty() const;
                ::java::util::Iterator iterator() const;
                jint lastIndexOf(const ::java::lang::Object &) const;
                ::java::util::ListIterator listIterator() const;
                ::java::util::ListIterator listIterator(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor remove(jint) const;
                jboolean remove(const ::java::lang::Object &) const;
                jboolean removeAll(const ::java::util::Collection &) const;
                jboolean retainAll(const ::java::util::Collection &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor set(jint, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
                jint size() const;
                ::java::util::List subList(jint, jint) const;
                JArray< ::java::lang::Object > toArray() const;
                JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
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
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(QueryNodeProcessorPipeline);
              extern PyTypeObject *PY_TYPE(QueryNodeProcessorPipeline);

              class t_QueryNodeProcessorPipeline {
              public:
                PyObject_HEAD
                QueryNodeProcessorPipeline object;
                static PyObject *wrap_Object(const QueryNodeProcessorPipeline&);
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
