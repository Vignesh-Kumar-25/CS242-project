#ifndef org_apache_lucene_index_StandardDirectoryReader_H
#define org_apache_lucene_index_StandardDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace java {
  namespace util {
    class Comparator;
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader$CacheHelper;
        class LeafReader;
        class SegmentInfos;
        class IndexCommit;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class StandardDirectoryReader : public ::org::apache::lucene::index::DirectoryReader {
         public:
          enum {
            mid_getIndexCommit_854542e383137675,
            mid_getReaderCacheHelper_b29ffc613bdce50b,
            mid_getSegmentInfos_20175444094af667,
            mid_getVersion_058f5911dcf5d8a4,
            mid_isCurrent_ee8b0a5fa521ddac,
            mid_open_7e6c83ce6fc2b598,
            mid_toString_dc633f13a47328a8,
            mid_notifyReaderClosedListeners_3353d9f14bbfd91a,
            mid_doClose_3353d9f14bbfd91a,
            mid_doOpenIfChanged_201f50598b6be5dc,
            mid_doOpenIfChanged_2265149264cdc3d1,
            mid_doOpenIfChanged_9cb3baffe160f766,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StandardDirectoryReader(jobject obj) : ::org::apache::lucene::index::DirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StandardDirectoryReader(const StandardDirectoryReader& obj) : ::org::apache::lucene::index::DirectoryReader(obj) {}

          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SegmentInfos getSegmentInfos() const;
          jlong getVersion() const;
          jboolean isCurrent() const;
          static ::org::apache::lucene::index::DirectoryReader open(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfos &, const ::java::util::List &, const ::java::util::Comparator &);
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(StandardDirectoryReader);
        extern PyTypeObject *PY_TYPE(StandardDirectoryReader);

        class t_StandardDirectoryReader {
        public:
          PyObject_HEAD
          StandardDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_StandardDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const StandardDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const StandardDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
