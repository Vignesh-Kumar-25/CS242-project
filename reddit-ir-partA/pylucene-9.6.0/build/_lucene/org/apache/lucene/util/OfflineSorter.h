#ifndef org_apache_lucene_util_OfflineSorter_H
#define org_apache_lucene_util_OfflineSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class OfflineSorter$BufferSize;
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
    namespace concurrent {
      class ExecutorService;
    }
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
      namespace util {

        class OfflineSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3497d6244d08d921,
            mid_init$_a5aa5835f9b62c5d,
            mid_init$_c4fe0a85954ab175,
            mid_getComparator_bfaba219acee2aff,
            mid_getDirectory_dab1bc6be9334718,
            mid_getTempFileNamePrefix_dc633f13a47328a8,
            mid_sort_04612c8360f09496,
            mid_getReader_fc85215be64acff6,
            mid_getWriter_548075a7e256a4af,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter(const OfflineSorter& obj) : ::java::lang::Object(obj) {}

          static jlong ABSOLUTE_MIN_SORT_BUFFER_SIZE;
          static ::java::util::Comparator *DEFAULT_COMPARATOR;
          static jlong GB;
          static jint MAX_TEMPFILES;
          static jlong MB;
          static jlong MIN_BUFFER_SIZE_MB;

          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::util::Comparator &);
          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::util::Comparator &, const ::org::apache::lucene::util::OfflineSorter$BufferSize &, jint, jint, const ::java::util::concurrent::ExecutorService &, jint);

          ::java::util::Comparator getComparator() const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::lang::String getTempFileNamePrefix() const;
          ::java::lang::String sort(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(OfflineSorter);
        extern PyTypeObject *PY_TYPE(OfflineSorter);

        class t_OfflineSorter {
        public:
          PyObject_HEAD
          OfflineSorter object;
          static PyObject *wrap_Object(const OfflineSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
