#ifndef org_apache_lucene_index_ReaderManager_H
#define org_apache_lucene_index_ReaderManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class DirectoryReader;
      }
      namespace store {
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ReaderManager : public ::org::apache::lucene::search::ReferenceManager {
         public:
          enum {
            mid_init$_9c04afa81c116207,
            mid_init$_43d9dde7f0c22ec2,
            mid_init$_31453c15367f1d64,
            mid_init$_12328793f015297d,
            mid_getRefCount_632a788e91188217,
            mid_tryIncRef_91b6d979a0a30926,
            mid_decRef_9c04afa81c116207,
            mid_refreshIfNeeded_68aa6ba68b946697,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReaderManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReaderManager(const ReaderManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

          ReaderManager(const ::org::apache::lucene::index::DirectoryReader &);
          ReaderManager(const ::org::apache::lucene::index::IndexWriter &);
          ReaderManager(const ::org::apache::lucene::store::Directory &);
          ReaderManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(ReaderManager);
        extern PyTypeObject *PY_TYPE(ReaderManager);

        class t_ReaderManager {
        public:
          PyObject_HEAD
          ReaderManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReaderManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReaderManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReaderManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
