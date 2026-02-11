#ifndef org_apache_lucene_codecs_LiveDocsFormat_H
#define org_apache_lucene_codecs_LiveDocsFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace util {
        class Bits;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace codecs {

        class LiveDocsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_files_cc03567a782df81e,
            mid_readLiveDocs_f0fb91415efdc7ea,
            mid_writeLiveDocs_3c9170fd6332aaf4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveDocsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LiveDocsFormat(const LiveDocsFormat& obj) : ::java::lang::Object(obj) {}

          void files(const ::org::apache::lucene::index::SegmentCommitInfo &, const ::java::util::Collection &) const;
          ::org::apache::lucene::util::Bits readLiveDocs(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::store::IOContext &) const;
          void writeLiveDocs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::store::IOContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(LiveDocsFormat);
        extern PyTypeObject *PY_TYPE(LiveDocsFormat);

        class t_LiveDocsFormat {
        public:
          PyObject_HEAD
          LiveDocsFormat object;
          static PyObject *wrap_Object(const LiveDocsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
