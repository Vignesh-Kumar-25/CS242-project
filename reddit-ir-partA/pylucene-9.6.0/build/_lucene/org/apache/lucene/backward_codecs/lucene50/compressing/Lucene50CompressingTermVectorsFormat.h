#ifndef org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingTermVectorsFormat_H
#define org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingTermVectorsFormat_H

#include "org/apache/lucene/codecs/TermVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class TermVectorsWriter;
        class TermVectorsReader;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
      }
      namespace backward_codecs {
        namespace compressing {
          class CompressionMode;
        }
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
        namespace lucene50 {
          namespace compressing {

            class Lucene50CompressingTermVectorsFormat : public ::org::apache::lucene::codecs::TermVectorsFormat {
             public:
              enum {
                mid_init$_3b757cc5c62ab18e,
                mid_toString_dc633f13a47328a8,
                mid_vectorsReader_7e25c59e173f1eb7,
                mid_vectorsWriter_52fa37b7ffd6d912,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene50CompressingTermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene50CompressingTermVectorsFormat(const Lucene50CompressingTermVectorsFormat& obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {}

              Lucene50CompressingTermVectorsFormat(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::backward_codecs::compressing::CompressionMode &, jint, jint, jint);

              ::java::lang::String toString() const;
              ::org::apache::lucene::codecs::TermVectorsReader vectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
              ::org::apache::lucene::codecs::TermVectorsWriter vectorsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
            };
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
      namespace backward_codecs {
        namespace lucene50 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene50CompressingTermVectorsFormat);
            extern PyTypeObject *PY_TYPE(Lucene50CompressingTermVectorsFormat);

            class t_Lucene50CompressingTermVectorsFormat {
            public:
              PyObject_HEAD
              Lucene50CompressingTermVectorsFormat object;
              static PyObject *wrap_Object(const Lucene50CompressingTermVectorsFormat&);
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

#endif
