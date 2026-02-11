#ifndef org_apache_lucene_codecs_uniformsplit_BlockLine$Serializer_H
#define org_apache_lucene_codecs_uniformsplit_BlockLine$Serializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class DataOutput;
        class DataInput;
      }
      namespace codecs {
        namespace uniformsplit {
          class BlockLine;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class BlockLine$Serializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_readLine_2e99b980d9580260,
              mid_writeLine_fe37a0d9cfe24da8,
              mid_writeLineTermState_47251444578c4760,
              mid_writeIncrementallyEncodedTerm_b64d91c744b362b5,
              mid_readIncrementallyEncodedTerm_75fb279f670a51c4,
              mid_numBitsToEncode_58b165b57740feff,
              mid_readBytes_6550289213dc075a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockLine$Serializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockLine$Serializer(const BlockLine$Serializer& obj) : ::java::lang::Object(obj) {}

            BlockLine$Serializer();

            jlong ramBytesUsed() const;
            ::org::apache::lucene::codecs::uniformsplit::BlockLine readLine(const ::org::apache::lucene::store::DataInput &, jboolean, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &) const;
            void writeLine(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &, jint, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockLine$Serializer);
          extern PyTypeObject *PY_TYPE(BlockLine$Serializer);

          class t_BlockLine$Serializer {
          public:
            PyObject_HEAD
            BlockLine$Serializer object;
            static PyObject *wrap_Object(const BlockLine$Serializer&);
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
