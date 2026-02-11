#ifndef org_apache_lucene_codecs_KnnVectorsWriter_H
#define org_apache_lucene_codecs_KnnVectorsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class Sorter$DocMap;
        class FieldInfo;
      }
      namespace util {
        class Accountable;
      }
      namespace codecs {
        class KnnFieldVectorsWriter;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class KnnVectorsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_addField_44c0ea4a884c98f7,
            mid_finish_3353d9f14bbfd91a,
            mid_flush_9dc9f38e6a58d395,
            mid_merge_a231074b7d4f0884,
            mid_mergeOneField_f2de1d0e0d2557e0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorsWriter(const KnnVectorsWriter& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::KnnFieldVectorsWriter addField(const ::org::apache::lucene::index::FieldInfo &) const;
          void finish() const;
          void flush(jint, const ::org::apache::lucene::index::Sorter$DocMap &) const;
          void merge(const ::org::apache::lucene::index::MergeState &) const;
          void mergeOneField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
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
        extern PyType_Def PY_TYPE_DEF(KnnVectorsWriter);
        extern PyTypeObject *PY_TYPE(KnnVectorsWriter);

        class t_KnnVectorsWriter {
        public:
          PyObject_HEAD
          KnnVectorsWriter object;
          static PyObject *wrap_Object(const KnnVectorsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
