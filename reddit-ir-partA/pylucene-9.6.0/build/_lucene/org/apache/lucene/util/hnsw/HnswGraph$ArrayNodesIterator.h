#ifndef org_apache_lucene_util_hnsw_HnswGraph$ArrayNodesIterator_H
#define org_apache_lucene_util_hnsw_HnswGraph$ArrayNodesIterator_H

#include "org/apache/lucene/util/hnsw/HnswGraph$NodesIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class HnswGraph$ArrayNodesIterator : public ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator {
           public:
            enum {
              mid_init$_da425451c8de636b,
              mid_init$_145db64209ff94bc,
              mid_consume_b7462ac2a96128e8,
              mid_hasNext_ee8b0a5fa521ddac,
              mid_nextInt_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraph$ArrayNodesIterator(jobject obj) : ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraph$ArrayNodesIterator(const HnswGraph$ArrayNodesIterator& obj) : ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator(obj) {}

            HnswGraph$ArrayNodesIterator(jint);
            HnswGraph$ArrayNodesIterator(const JArray< jint > &, jint);

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
          extern PyType_Def PY_TYPE_DEF(HnswGraph$ArrayNodesIterator);
          extern PyTypeObject *PY_TYPE(HnswGraph$ArrayNodesIterator);

          class t_HnswGraph$ArrayNodesIterator {
          public:
            PyObject_HEAD
            HnswGraph$ArrayNodesIterator object;
            static PyObject *wrap_Object(const HnswGraph$ArrayNodesIterator&);
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
