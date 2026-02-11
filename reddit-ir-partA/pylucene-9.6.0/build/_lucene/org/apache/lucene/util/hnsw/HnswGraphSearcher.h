#ifndef org_apache_lucene_util_hnsw_HnswGraphSearcher_H
#define org_apache_lucene_util_hnsw_HnswGraphSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class NeighborQueue;
          class RandomAccessVectorValues;
          class HnswGraph;
        }
        class BitSet;
        class Bits;
      }
      namespace index {
        class VectorEncoding;
        class VectorSimilarityFunction;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

          class HnswGraphSearcher : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1d6280d860a8d646,
              mid_search_f0c88452894d9e13,
              mid_search_5214faa5b0b60a4f,
              mid_searchLevel_cd79c8fd3e2de340,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraphSearcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraphSearcher(const HnswGraphSearcher& obj) : ::java::lang::Object(obj) {}

            HnswGraphSearcher(const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::util::hnsw::NeighborQueue &, const ::org::apache::lucene::util::BitSet &);

            static ::org::apache::lucene::util::hnsw::NeighborQueue search(const JArray< jbyte > &, jint, const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::util::hnsw::HnswGraph &, const ::org::apache::lucene::util::Bits &, jint);
            static ::org::apache::lucene::util::hnsw::NeighborQueue search(const JArray< jfloat > &, jint, const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::util::hnsw::HnswGraph &, const ::org::apache::lucene::util::Bits &, jint);
            ::org::apache::lucene::util::hnsw::NeighborQueue searchLevel(const ::java::lang::Object &, jint, jint, const JArray< jint > &, const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &, const ::org::apache::lucene::util::hnsw::HnswGraph &) const;
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
          extern PyType_Def PY_TYPE_DEF(HnswGraphSearcher);
          extern PyTypeObject *PY_TYPE(HnswGraphSearcher);

          class t_HnswGraphSearcher {
          public:
            PyObject_HEAD
            HnswGraphSearcher object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_HnswGraphSearcher *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const HnswGraphSearcher&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const HnswGraphSearcher&, PyTypeObject *);
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
