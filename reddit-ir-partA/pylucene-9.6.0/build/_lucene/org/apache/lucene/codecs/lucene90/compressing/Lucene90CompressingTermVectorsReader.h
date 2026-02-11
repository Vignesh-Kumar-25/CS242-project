#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsReader_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsReader_H

#include "org/apache/lucene/codecs/TermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {
          class CompressionMode;
        }
      }
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class Fields;
        class SegmentInfo;
        class FieldInfos;
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
      namespace codecs {
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingTermVectorsReader : public ::org::apache::lucene::codecs::TermVectorsReader {
             public:
              enum {
                mid_init$_11f5cd917b7586d8,
                mid_checkIntegrity_3353d9f14bbfd91a,
                mid_clone_c9589914c2c194d7,
                mid_close_3353d9f14bbfd91a,
                mid_get_3b4838b454503ecf,
                mid_getMergeInstance_c9589914c2c194d7,
                mid_toString_dc633f13a47328a8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingTermVectorsReader(jobject obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingTermVectorsReader(const Lucene90CompressingTermVectorsReader& obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {}

              Lucene90CompressingTermVectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &);

              void checkIntegrity() const;
              ::org::apache::lucene::codecs::TermVectorsReader clone() const;
              void close() const;
              ::org::apache::lucene::index::Fields get(jint) const;
              ::org::apache::lucene::codecs::TermVectorsReader getMergeInstance() const;
              ::java::lang::String toString() const;
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
      namespace codecs {
        namespace lucene90 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingTermVectorsReader);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingTermVectorsReader);

            class t_Lucene90CompressingTermVectorsReader {
            public:
              PyObject_HEAD
              Lucene90CompressingTermVectorsReader object;
              static PyObject *wrap_Object(const Lucene90CompressingTermVectorsReader&);
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
