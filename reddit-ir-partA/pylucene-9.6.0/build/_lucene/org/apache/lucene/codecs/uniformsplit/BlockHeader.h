#ifndef org_apache_lucene_codecs_uniformsplit_BlockHeader_H
#define org_apache_lucene_codecs_uniformsplit_BlockHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
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
      namespace codecs {
        namespace uniformsplit {

          class BlockHeader : public ::java::lang::Object {
           public:
            enum {
              mid_getBaseDocsFP_058f5911dcf5d8a4,
              mid_getBasePayloadsFP_058f5911dcf5d8a4,
              mid_getBasePositionsFP_058f5911dcf5d8a4,
              mid_getLinesCount_15aa3d485e96b665,
              mid_getMiddleLineIndex_15aa3d485e96b665,
              mid_getMiddleLineOffset_15aa3d485e96b665,
              mid_getTermStatesBaseOffset_15aa3d485e96b665,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_reset_cf9b6b8ddbe88286,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockHeader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockHeader(const BlockHeader& obj) : ::java::lang::Object(obj) {}

            jlong getBaseDocsFP() const;
            jlong getBasePayloadsFP() const;
            jlong getBasePositionsFP() const;
            jint getLinesCount() const;
            jint getMiddleLineIndex() const;
            jint getMiddleLineOffset() const;
            jint getTermStatesBaseOffset() const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(BlockHeader);
          extern PyTypeObject *PY_TYPE(BlockHeader);

          class t_BlockHeader {
          public:
            PyObject_HEAD
            BlockHeader object;
            static PyObject *wrap_Object(const BlockHeader&);
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
