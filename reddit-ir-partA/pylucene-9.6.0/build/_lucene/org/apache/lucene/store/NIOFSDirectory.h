#ifndef org_apache_lucene_store_NIOFSDirectory_H
#define org_apache_lucene_store_NIOFSDirectory_H

#include "org/apache/lucene/store/FSDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class LockFactory;
        class IndexInput;
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
      namespace store {

        class NIOFSDirectory : public ::org::apache::lucene::store::FSDirectory {
         public:
          enum {
            mid_init$_9a1eff7d5b4532fc,
            mid_init$_48aa297142d994ca,
            mid_openInput_6054820b0be0358d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NIOFSDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NIOFSDirectory(const NIOFSDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          NIOFSDirectory(const ::java::nio::file::Path &);
          NIOFSDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);

          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(NIOFSDirectory);
        extern PyTypeObject *PY_TYPE(NIOFSDirectory);

        class t_NIOFSDirectory {
        public:
          PyObject_HEAD
          NIOFSDirectory object;
          static PyObject *wrap_Object(const NIOFSDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
