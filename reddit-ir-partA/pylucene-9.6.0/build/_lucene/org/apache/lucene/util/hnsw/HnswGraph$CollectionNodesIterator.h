#ifndef org_apache_lucene_util_hnsw_HnswGraph$CollectionNodesIterator_H
#define org_apache_lucene_util_hnsw_HnswGraph$CollectionNodesIterator_H

#include "org/apache/lucene/util/hnsw/HnswGraph$NodesIterator.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class Integer;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class HnswGraph$CollectionNodesIterator : public ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator {
           public:
            enum {
              mid_init$_568dc3e0933a89e8,
              mid_consume_b7462ac2a96128e8,
              mid_hasNext_ee8b0a5fa521ddac,
              mid_nextInt_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraph$CollectionNodesIterator(jobject obj) : ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraph$CollectionNodesIterator(const HnswGraph$CollectionNodesIterator& obj) : ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator(obj) {}

            HnswGraph$CollectionNodesIterator(const ::java::util::Collection &);

            jint consume(const JArray< jint > &) const;
            jboolean hasNext() const;
            jint nextInt() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(HnswGraph$CollectionNodesIterator);
          extern PyTypeObject *PY_TYPE(HnswGraph$CollectionNodesIterator);

          class t_HnswGraph$CollectionNodesIterator {
          public:
            PyObject_HEAD
            HnswGraph$CollectionNodesIterator object;
            static PyObject *wrap_Object(const HnswGraph$CollectionNodesIterator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
