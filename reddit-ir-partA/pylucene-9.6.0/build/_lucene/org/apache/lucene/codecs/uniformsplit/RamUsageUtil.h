#ifndef org_apache_lucene_codecs_uniformsplit_RamUsageUtil_H
#define org_apache_lucene_codecs_uniformsplit_RamUsageUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
        class BytesRef;
      }
      namespace index {
        class TermState;
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

          class RamUsageUtil : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_ramBytesUsed_3b8ee05b943c0f36,
              mid_ramBytesUsed_cac4add48ae85e95,
              mid_ramBytesUsed_b40c6d96f371332c,
              mid_ramBytesUsedByByteArrayOfLength_70b2a956d0e32bc7,
              mid_ramBytesUsedByHashMapOfSize_70b2a956d0e32bc7,
              mid_ramBytesUsedByObjectArrayOfLength_70b2a956d0e32bc7,
              mid_ramBytesUsedByUnmodifiableArrayListOfSize_70b2a956d0e32bc7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RamUsageUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RamUsageUtil(const RamUsageUtil& obj) : ::java::lang::Object(obj) {}

            RamUsageUtil();

            static jlong ramBytesUsed(const ::org::apache::lucene::index::TermState &);
            static jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRef &);
            static jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRefBuilder &);
            static jlong ramBytesUsedByByteArrayOfLength(jint);
            static jlong ramBytesUsedByHashMapOfSize(jint);
            static jlong ramBytesUsedByObjectArrayOfLength(jint);
            static jlong ramBytesUsedByUnmodifiableArrayListOfSize(jint);
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
          extern PyType_Def PY_TYPE_DEF(RamUsageUtil);
          extern PyTypeObject *PY_TYPE(RamUsageUtil);

          class t_RamUsageUtil {
          public:
            PyObject_HEAD
            RamUsageUtil object;
            static PyObject *wrap_Object(const RamUsageUtil&);
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
