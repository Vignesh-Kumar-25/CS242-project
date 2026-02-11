#ifndef org_apache_lucene_index_FilterDirectoryReader_H
#define org_apache_lucene_index_FilterDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FilterDirectoryReader$SubReaderWrapper;
        class LeafReader;
        class IndexCommit;
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

        class FilterDirectoryReader : public ::org::apache::lucene::index::DirectoryReader {
         public:
          enum {
            mid_init$_eac05591e9319843,
            mid_getDelegate_2265149264cdc3d1,
            mid_getIndexCommit_854542e383137675,
            mid_getVersion_058f5911dcf5d8a4,
            mid_isCurrent_ee8b0a5fa521ddac,
            mid_unwrap_68aa6ba68b946697,
            mid_doClose_3353d9f14bbfd91a,
            mid_doWrapDirectoryReader_68aa6ba68b946697,
            mid_doOpenIfChanged_9cb3baffe160f766,
            mid_doOpenIfChanged_201f50598b6be5dc,
            mid_doOpenIfChanged_2265149264cdc3d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterDirectoryReader(jobject obj) : ::org::apache::lucene::index::DirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterDirectoryReader(const FilterDirectoryReader& obj) : ::org::apache::lucene::index::DirectoryReader(obj) {}

          FilterDirectoryReader(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper &);

          ::org::apache::lucene::index::DirectoryReader getDelegate() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jlong getVersion() const;
          jboolean isCurrent() const;
          static ::org::apache::lucene::index::DirectoryReader unwrap(const ::org::apache::lucene::index::DirectoryReader &);
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
        extern PyType_Def PY_TYPE_DEF(FilterDirectoryReader);
        extern PyTypeObject *PY_TYPE(FilterDirectoryReader);

        class t_FilterDirectoryReader {
        public:
          PyObject_HEAD
          FilterDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FilterDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
