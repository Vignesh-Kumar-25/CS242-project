#ifndef org_apache_lucene_codecs_PointsWriter_H
#define org_apache_lucene_codecs_PointsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace codecs {
        class PointsReader;
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

        class PointsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_finish_3353d9f14bbfd91a,
            mid_merge_a231074b7d4f0884,
            mid_writeField_efe912793b372940,
            mid_mergeOneField_e67e0035a7d9889c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointsWriter(const PointsWriter& obj) : ::java::lang::Object(obj) {}

          void finish() const;
          void merge(const ::org::apache::lucene::index::MergeState &) const;
          void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::PointsReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(PointsWriter);
        extern PyTypeObject *PY_TYPE(PointsWriter);

        class t_PointsWriter {
        public:
          PyObject_HEAD
          PointsWriter object;
          static PyObject *wrap_Object(const PointsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
