#ifndef org_apache_lucene_codecs_uniformsplit_DeltaBaseTermStateSerializer_H
#define org_apache_lucene_codecs_uniformsplit_DeltaBaseTermStateSerializer_H

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
      namespace index {
        class FieldInfo;
        class TermState;
      }
      namespace codecs {
        class BlockTermState;
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

          class DeltaBaseTermStateSerializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_getBaseDocStartFP_058f5911dcf5d8a4,
              mid_getBasePayStartFP_058f5911dcf5d8a4,
              mid_getBasePosStartFP_058f5911dcf5d8a4,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_ramBytesUsed_3b8ee05b943c0f36,
              mid_readTermState_c2428f86a49c75b8,
              mid_resetBaseStartFP_3353d9f14bbfd91a,
              mid_writeTermState_497441f8da2fdca1,
              mid_reset_727b8a1fe9797ae7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DeltaBaseTermStateSerializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DeltaBaseTermStateSerializer(const DeltaBaseTermStateSerializer& obj) : ::java::lang::Object(obj) {}

            DeltaBaseTermStateSerializer();

            jlong getBaseDocStartFP() const;
            jlong getBasePayStartFP() const;
            jlong getBasePosStartFP() const;
            jlong ramBytesUsed() const;
            static jlong ramBytesUsed(const ::org::apache::lucene::index::TermState &);
            ::org::apache::lucene::codecs::BlockTermState readTermState(jlong, jlong, jlong, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &) const;
            void resetBaseStartFP() const;
            void writeTermState(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &) const;
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
          extern PyType_Def PY_TYPE_DEF(DeltaBaseTermStateSerializer);
          extern PyTypeObject *PY_TYPE(DeltaBaseTermStateSerializer);

          class t_DeltaBaseTermStateSerializer {
          public:
            PyObject_HEAD
            DeltaBaseTermStateSerializer object;
            static PyObject *wrap_Object(const DeltaBaseTermStateSerializer&);
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
