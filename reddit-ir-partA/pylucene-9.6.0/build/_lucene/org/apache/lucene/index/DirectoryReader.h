#ifndef org_apache_lucene_index_DirectoryReader_H
#define org_apache_lucene_index_DirectoryReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class LeafReader;
        class IndexCommit;
        class DirectoryReader;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DirectoryReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_directory_dab1bc6be9334718,
            mid_getIndexCommit_854542e383137675,
            mid_getVersion_058f5911dcf5d8a4,
            mid_indexExists_97f82c5bd391abd8,
            mid_isCurrent_ee8b0a5fa521ddac,
            mid_listCommits_9eb47793ad4cb256,
            mid_open_201f50598b6be5dc,
            mid_open_bf08f340e1cb228a,
            mid_open_a4eecb6a6866d4f8,
            mid_open_c561f4df25b0fa34,
            mid_open_193329ba8e158410,
            mid_open_07fec3b8f18f9e3a,
            mid_openIfChanged_68aa6ba68b946697,
            mid_openIfChanged_029b78095548a04e,
            mid_openIfChanged_bcfd7d9cde258b41,
            mid_openIfChanged_a6fae2c1b01f53ce,
            mid_doOpenIfChanged_2265149264cdc3d1,
            mid_doOpenIfChanged_201f50598b6be5dc,
            mid_doOpenIfChanged_9cb3baffe160f766,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DirectoryReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DirectoryReader(const DirectoryReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          ::org::apache::lucene::store::Directory directory() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jlong getVersion() const;
          static jboolean indexExists(const ::org::apache::lucene::store::Directory &);
          jboolean isCurrent() const;
          static ::java::util::List listCommits(const ::org::apache::lucene::store::Directory &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexWriter &);
          static DirectoryReader open(const ::org::apache::lucene::store::Directory &);
          static DirectoryReader open(const ::org::apache::lucene::store::Directory &, const ::java::util::Comparator &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &, jint, const ::java::util::Comparator &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean);
          static DirectoryReader openIfChanged(const DirectoryReader &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexCommit &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexWriter &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexWriter &, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(DirectoryReader);
        extern PyTypeObject *PY_TYPE(DirectoryReader);

        class t_DirectoryReader {
        public:
          PyObject_HEAD
          DirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
