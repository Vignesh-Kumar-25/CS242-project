#ifndef org_apache_lucene_util_hnsw_OnHeapHnswGraph_H
#define org_apache_lucene_util_hnsw_OnHeapHnswGraph_H

#include "org/apache/lucene/util/hnsw/HnswGraph.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class HnswGraph$NodesIterator;
          class NeighborArray;
        }
        class Accountable;
      }
    }
  }
}
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

          class OnHeapHnswGraph : public ::org::apache::lucene::util::hnsw::HnswGraph {
           public:
            enum {
              mid_addNode_078cef180abf5351,
              mid_entryNode_15aa3d485e96b665,
              mid_getNeighbors_017819d308a92fcc,
              mid_getNodesOnLevel_a7eae3be56984fd2,
              mid_nextNeighbor_15aa3d485e96b665,
              mid_numLevels_15aa3d485e96b665,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_seek_078cef180abf5351,
              mid_size_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnHeapHnswGraph(jobject obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnHeapHnswGraph(const OnHeapHnswGraph& obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {}

            void addNode(jint, jint) const;
            jint entryNode() const;
            ::org::apache::lucene::util::hnsw::NeighborArray getNeighbors(jint, jint) const;
            ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator getNodesOnLevel(jint) const;
            jint nextNeighbor() const;
            jint numLevels() const;
            jlong ramBytesUsed() const;
            void seek(jint, jint) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(OnHeapHnswGraph);
          extern PyTypeObject *PY_TYPE(OnHeapHnswGraph);

          class t_OnHeapHnswGraph {
          public:
            PyObject_HEAD
            OnHeapHnswGraph object;
            static PyObject *wrap_Object(const OnHeapHnswGraph&);
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
