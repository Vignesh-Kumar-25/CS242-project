#ifndef org_apache_lucene_codecs_uniformsplit_BlockWriter_H
#define org_apache_lucene_codecs_uniformsplit_BlockWriter_H

#include "java/lang/Object.h"

namespace java {
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

          class BlockWriter : public ::java::lang::Object {
           public:
            enum {
              mid_addLine_2c50d184b2d2bdcb,
              mid_finishLastBlock_485dbc9d5f0c563b,
              mid_createBlockHeaderSerializer_ae5be108bde90bad,
              mid_createDeltaBaseTermStateSerializer_ee5d30c7a3dcdb35,
              mid_createBlockLineSerializer_61008d2de0c834c2,
              mid_writeBlock_93c75c8381f9b8f7,
              mid_writeBlockLine_c4ed35c2753ebd9e,
              mid_updateFieldMetadata_db2028ac45cd5b77,
              mid_splitAndWriteBlock_485dbc9d5f0c563b,
              mid_addBlockKey_93c75c8381f9b8f7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockWriter(const BlockWriter& obj) : ::java::lang::Object(obj) {}
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(BlockWriter);
          extern PyTypeObject *PY_TYPE(BlockWriter);

          class t_BlockWriter {
          public:
            PyObject_HEAD
            BlockWriter object;
            static PyObject *wrap_Object(const BlockWriter&);
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
