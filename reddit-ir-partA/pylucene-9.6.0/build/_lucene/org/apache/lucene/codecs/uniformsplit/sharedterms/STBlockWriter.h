#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockWriter_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockWriter_H

#include "org/apache/lucene/codecs/uniformsplit/BlockWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            class FieldMetadataTermState;
          }
          class BlockEncoder;
          class IndexDictionary$Builder;
        }
      }
      namespace store {
        class IndexOutput;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STBlockWriter : public ::org::apache::lucene::codecs::uniformsplit::BlockWriter {
             public:
              enum {
                mid_init$_4565d3e85d6a0c2b,
                mid_addLine_7d870abfffc1502c,
                mid_finishLastBlock_485dbc9d5f0c563b,
                mid_createBlockLineSerializer_61008d2de0c834c2,
                mid_writeBlockLine_c4ed35c2753ebd9e,
                mid_updateFieldMetadata_db2028ac45cd5b77,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STBlockWriter(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STBlockWriter(const STBlockWriter& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockWriter(obj) {}

              STBlockWriter(const ::org::apache::lucene::store::IndexOutput &, jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);

              void addLine(const ::org::apache::lucene::util::BytesRef &, const ::java::util::List &, const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$Builder &) const;
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
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STBlockWriter);
            extern PyTypeObject *PY_TYPE(STBlockWriter);

            class t_STBlockWriter {
            public:
              PyObject_HEAD
              STBlockWriter object;
              static PyObject *wrap_Object(const STBlockWriter&);
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
