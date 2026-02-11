#ifndef org_apache_lucene_index_MergePolicy$MergeContext_H
#define org_apache_lucene_index_MergePolicy$MergeContext_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
      }
      namespace util {
        class InfoStream;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$MergeContext : public ::java::lang::Object {
         public:
          enum {
            mid_getInfoStream_425a85236b069a69,
            mid_getMergingSegments_9a625d56b67c7390,
            mid_numDeletedDocs_a5a6d44c1d744342,
            mid_numDeletesToMerge_a5a6d44c1d744342,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$MergeContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$MergeContext(const MergePolicy$MergeContext& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          ::java::util::Set getMergingSegments() const;
          jint numDeletedDocs(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
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
        extern PyType_Def PY_TYPE_DEF(MergePolicy$MergeContext);
        extern PyTypeObject *PY_TYPE(MergePolicy$MergeContext);

        class t_MergePolicy$MergeContext {
        public:
          PyObject_HEAD
          MergePolicy$MergeContext object;
          static PyObject *wrap_Object(const MergePolicy$MergeContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
