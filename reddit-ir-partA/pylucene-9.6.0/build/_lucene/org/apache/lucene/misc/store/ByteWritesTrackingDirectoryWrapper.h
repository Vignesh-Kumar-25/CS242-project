#ifndef org_apache_lucene_misc_store_ByteWritesTrackingDirectoryWrapper_H
#define org_apache_lucene_misc_store_ByteWritesTrackingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class IndexOutput;
        class Directory;
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
      namespace misc {
        namespace store {

          class ByteWritesTrackingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
           public:
            enum {
              mid_init$_31453c15367f1d64,
              mid_init$_1a1e96571cdbb166,
              mid_createOutput_cb8add97217e4b75,
              mid_createTempOutput_1aab0a5f74a297d8,
              mid_getFlushedBytes_058f5911dcf5d8a4,
              mid_getMergedBytes_058f5911dcf5d8a4,
              max_mid
            };

            enum {
              fid_trackTempOutput,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteWritesTrackingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteWritesTrackingDirectoryWrapper(const ByteWritesTrackingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

            jboolean _get_trackTempOutput() const;

            ByteWritesTrackingDirectoryWrapper(const ::org::apache::lucene::store::Directory &);
            ByteWritesTrackingDirectoryWrapper(const ::org::apache::lucene::store::Directory &, jboolean);

            ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            jlong getFlushedBytes() const;
            jlong getMergedBytes() const;
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
      namespace misc {
        namespace store {
          extern PyType_Def PY_TYPE_DEF(ByteWritesTrackingDirectoryWrapper);
          extern PyTypeObject *PY_TYPE(ByteWritesTrackingDirectoryWrapper);

          class t_ByteWritesTrackingDirectoryWrapper {
          public:
            PyObject_HEAD
            ByteWritesTrackingDirectoryWrapper object;
            static PyObject *wrap_Object(const ByteWritesTrackingDirectoryWrapper&);
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
