#ifndef org_apache_lucene_internal_tests_IndexWriterAccess_H
#define org_apache_lucene_internal_tests_IndexWriterAccess_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class SegmentCommitInfo;
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
      namespace internal {
        namespace tests {

          class IndexWriterAccess : public ::java::lang::Object {
           public:
            enum {
              mid_getDocWriterThreadPoolSize_df481e4d10dabe4d,
              mid_getReader_07fec3b8f18f9e3a,
              mid_getSegmentCount_df481e4d10dabe4d,
              mid_isClosed_19412a46fb6509c7,
              mid_isDeleterClosed_19412a46fb6509c7,
              mid_newestSegment_62dad9e5ae19a5d1,
              mid_segString_c08124838615df07,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexWriterAccess(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexWriterAccess(const IndexWriterAccess& obj) : ::java::lang::Object(obj) {}

            jint getDocWriterThreadPoolSize(const ::org::apache::lucene::index::IndexWriter &) const;
            ::org::apache::lucene::index::DirectoryReader getReader(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean) const;
            jint getSegmentCount(const ::org::apache::lucene::index::IndexWriter &) const;
            jboolean isClosed(const ::org::apache::lucene::index::IndexWriter &) const;
            jboolean isDeleterClosed(const ::org::apache::lucene::index::IndexWriter &) const;
            ::org::apache::lucene::index::SegmentCommitInfo newestSegment(const ::org::apache::lucene::index::IndexWriter &) const;
            ::java::lang::String segString(const ::org::apache::lucene::index::IndexWriter &) const;
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
      namespace internal {
        namespace tests {
          extern PyType_Def PY_TYPE_DEF(IndexWriterAccess);
          extern PyTypeObject *PY_TYPE(IndexWriterAccess);

          class t_IndexWriterAccess {
          public:
            PyObject_HEAD
            IndexWriterAccess object;
            static PyObject *wrap_Object(const IndexWriterAccess&);
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
