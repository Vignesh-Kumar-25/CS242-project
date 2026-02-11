#ifndef org_apache_lucene_misc_store_DirectIODirectory_H
#define org_apache_lucene_misc_store_DirectIODirectory_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class IndexOutput;
        class IndexInput;
        class FSDirectory;
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
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace store {

          class DirectIODirectory : public ::org::apache::lucene::store::FilterDirectory {
           public:
            enum {
              mid_init$_86d1e5765669b356,
              mid_init$_0d828400ba3d3831,
              mid_close_3353d9f14bbfd91a,
              mid_createOutput_cb8add97217e4b75,
              mid_getDirectory_bf71bce8533788de,
              mid_openInput_6054820b0be0358d,
              mid_useDirectIO_a796972ee9e0c11b,
              mid_ensureOpen_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectIODirectory(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectIODirectory(const DirectIODirectory& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

            static jint DEFAULT_MERGE_BUFFER_SIZE;
            static jlong DEFAULT_MIN_BYTES_DIRECT;

            DirectIODirectory(const ::org::apache::lucene::store::FSDirectory &);
            DirectIODirectory(const ::org::apache::lucene::store::FSDirectory &, jint, jlong);

            void close() const;
            ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            ::java::nio::file::Path getDirectory() const;
            ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(DirectIODirectory);
          extern PyTypeObject *PY_TYPE(DirectIODirectory);

          class t_DirectIODirectory {
          public:
            PyObject_HEAD
            DirectIODirectory object;
            static PyObject *wrap_Object(const DirectIODirectory&);
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
