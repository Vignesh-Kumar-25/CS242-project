#ifndef org_apache_lucene_util_hnsw_HnswGraphBuilder_H
#define org_apache_lucene_util_hnsw_HnswGraphBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class RandomAccessVectorValues;
          class HnswGraph;
          class HnswGraphBuilder;
          class OnHeapHnswGraph;
        }
        class InfoStream;
      }
      namespace index {
        class VectorEncoding;
        class VectorSimilarityFunction;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class HnswGraphBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_addGraphNode_10ea9c335f27233d,
              mid_addGraphNode_27e96d9ff87bca07,
              mid_build_87bcada1bb6fd2ab,
              mid_create_097f6bb4082c967a,
              mid_create_3ad7e6f3d02916c8,
              mid_getGraph_0c051e10fc122b7c,
              mid_setInfoStream_0409686c87608f91,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraphBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraphBuilder(const HnswGraphBuilder& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *HNSW_COMPONENT;
            static jlong randSeed;

            void addGraphNode(jint, const ::java::lang::Object &) const;
            void addGraphNode(jint, const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &) const;
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph build(const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &) const;
            static HnswGraphBuilder create(const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &, jint, jint, jlong);
            static HnswGraphBuilder create(const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &, jint, jint, jlong, const ::org::apache::lucene::util::hnsw::HnswGraph &, const ::java::util::Map &);
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph getGraph() const;
            void setInfoStream(const ::org::apache::lucene::util::InfoStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(HnswGraphBuilder);
          extern PyTypeObject *PY_TYPE(HnswGraphBuilder);

          class t_HnswGraphBuilder {
          public:
            PyObject_HEAD
            HnswGraphBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_HnswGraphBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const HnswGraphBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const HnswGraphBuilder&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
