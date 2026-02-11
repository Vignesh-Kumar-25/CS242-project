#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90HnswGraphBuilder_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90HnswGraphBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class RandomAccessVectorValues;
        }
        class InfoStream;
      }
      namespace backward_codecs {
        namespace lucene90 {
          class Lucene90OnHeapHnswGraph;
        }
      }
      namespace index {
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90HnswGraphBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ad090dbc7cfd621d,
              mid_build_c8e2cb1f59ac3ba3,
              mid_setInfoStream_0409686c87608f91,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90HnswGraphBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90HnswGraphBuilder(const Lucene90HnswGraphBuilder& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *HNSW_COMPONENT;
            static jlong randSeed;

            Lucene90HnswGraphBuilder(const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &, const ::org::apache::lucene::index::VectorSimilarityFunction &, jint, jint, jlong);

            ::org::apache::lucene::backward_codecs::lucene90::Lucene90OnHeapHnswGraph build(const ::org::apache::lucene::util::hnsw::RandomAccessVectorValues &) const;
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
      namespace backward_codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90HnswGraphBuilder);
          extern PyTypeObject *PY_TYPE(Lucene90HnswGraphBuilder);

          class t_Lucene90HnswGraphBuilder {
          public:
            PyObject_HEAD
            Lucene90HnswGraphBuilder object;
            static PyObject *wrap_Object(const Lucene90HnswGraphBuilder&);
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
