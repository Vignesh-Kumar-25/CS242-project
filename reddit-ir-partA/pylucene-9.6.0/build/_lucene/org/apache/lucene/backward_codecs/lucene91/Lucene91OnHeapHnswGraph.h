#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91OnHeapHnswGraph_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91OnHeapHnswGraph_H

#include "org/apache/lucene/util/hnsw/HnswGraph.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene91 {
          class Lucene91NeighborArray;
        }
      }
      namespace util {
        namespace hnsw {
          class HnswGraph$NodesIterator;
        }
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
      namespace backward_codecs {
        namespace lucene91 {

          class Lucene91OnHeapHnswGraph : public ::org::apache::lucene::util::hnsw::HnswGraph {
           public:
            enum {
              mid_addNode_078cef180abf5351,
              mid_entryNode_15aa3d485e96b665,
              mid_getNeighbors_35a2b124ad6c6d6d,
              mid_getNodesOnLevel_a7eae3be56984fd2,
              mid_nextNeighbor_15aa3d485e96b665,
              mid_numLevels_15aa3d485e96b665,
              mid_seek_078cef180abf5351,
              mid_size_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene91OnHeapHnswGraph(jobject obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene91OnHeapHnswGraph(const Lucene91OnHeapHnswGraph& obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {}

            void addNode(jint, jint) const;
            jint entryNode() const;
            ::org::apache::lucene::backward_codecs::lucene91::Lucene91NeighborArray getNeighbors(jint, jint) const;
            ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator getNodesOnLevel(jint) const;
            jint nextNeighbor() const;
            jint numLevels() const;
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
      namespace backward_codecs {
        namespace lucene91 {
          extern PyType_Def PY_TYPE_DEF(Lucene91OnHeapHnswGraph);
          extern PyTypeObject *PY_TYPE(Lucene91OnHeapHnswGraph);

          class t_Lucene91OnHeapHnswGraph {
          public:
            PyObject_HEAD
            Lucene91OnHeapHnswGraph object;
            static PyObject *wrap_Object(const Lucene91OnHeapHnswGraph&);
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
