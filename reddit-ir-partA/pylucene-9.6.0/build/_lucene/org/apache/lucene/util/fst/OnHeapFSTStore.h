#ifndef org_apache_lucene_util_fst_OnHeapFSTStore_H
#define org_apache_lucene_util_fst_OnHeapFSTStore_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FSTStore;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
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
        namespace fst {

          class OnHeapFSTStore : public ::java::lang::Object {
           public:
            enum {
              mid_init$_da425451c8de636b,
              mid_getReverseBytesReader_82f2a67854cb5354,
              mid_init_c25416f993f8b675,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_size_058f5911dcf5d8a4,
              mid_writeTo_ce69639f5ca08f3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnHeapFSTStore(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnHeapFSTStore(const OnHeapFSTStore& obj) : ::java::lang::Object(obj) {}

            OnHeapFSTStore(jint);

            ::org::apache::lucene::util::fst::FST$BytesReader getReverseBytesReader() const;
            void init(const ::org::apache::lucene::store::DataInput &, jlong) const;
            jlong ramBytesUsed() const;
            jlong size() const;
            void writeTo(const ::org::apache::lucene::store::DataOutput &) const;
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
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(OnHeapFSTStore);
          extern PyTypeObject *PY_TYPE(OnHeapFSTStore);

          class t_OnHeapFSTStore {
          public:
            PyObject_HEAD
            OnHeapFSTStore object;
            static PyObject *wrap_Object(const OnHeapFSTStore&);
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
