#ifndef org_apache_lucene_codecs_KnnVectorsFormat_H
#define org_apache_lucene_codecs_KnnVectorsFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class KnnVectorsReader;
        class KnnVectorsFormat;
        class KnnVectorsWriter;
      }
      namespace index {
        class SegmentWriteState;
        class SegmentReadState;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class KnnVectorsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_fieldsReader_9d256b1fbc22a1c7,
            mid_fieldsWriter_9848c8b62f9a05b5,
            mid_forName_9c31860801ef18ea,
            mid_getName_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorsFormat(const KnnVectorsFormat& obj) : ::java::lang::Object(obj) {}

          static KnnVectorsFormat *EMPTY;

          ::org::apache::lucene::codecs::KnnVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
          ::org::apache::lucene::codecs::KnnVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
          static KnnVectorsFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
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
        extern PyType_Def PY_TYPE_DEF(KnnVectorsFormat);
        extern PyTypeObject *PY_TYPE(KnnVectorsFormat);

        class t_KnnVectorsFormat {
        public:
          PyObject_HEAD
          KnnVectorsFormat object;
          static PyObject *wrap_Object(const KnnVectorsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
