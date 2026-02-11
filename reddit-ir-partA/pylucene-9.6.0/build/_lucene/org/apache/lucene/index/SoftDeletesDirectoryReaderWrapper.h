#ifndef org_apache_lucene_index_SoftDeletesDirectoryReaderWrapper_H
#define org_apache_lucene_index_SoftDeletesDirectoryReaderWrapper_H

#include "org/apache/lucene/index/FilterDirectoryReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader$CacheHelper;
        class LeafReader;
        class DirectoryReader;
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
      namespace index {

        class SoftDeletesDirectoryReaderWrapper : public ::org::apache::lucene::index::FilterDirectoryReader {
         public:
          enum {
            mid_init$_f77bd264cb02416e,
            mid_getReaderCacheHelper_b29ffc613bdce50b,
            mid_doWrapDirectoryReader_68aa6ba68b946697,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SoftDeletesDirectoryReaderWrapper(jobject obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SoftDeletesDirectoryReaderWrapper(const SoftDeletesDirectoryReaderWrapper& obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {}

          SoftDeletesDirectoryReaderWrapper(const ::org::apache::lucene::index::DirectoryReader &, const ::java::lang::String &);

          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
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
        extern PyType_Def PY_TYPE_DEF(SoftDeletesDirectoryReaderWrapper);
        extern PyTypeObject *PY_TYPE(SoftDeletesDirectoryReaderWrapper);

        class t_SoftDeletesDirectoryReaderWrapper {
        public:
          PyObject_HEAD
          SoftDeletesDirectoryReaderWrapper object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SoftDeletesDirectoryReaderWrapper *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SoftDeletesDirectoryReaderWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SoftDeletesDirectoryReaderWrapper&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
