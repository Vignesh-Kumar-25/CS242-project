#ifndef org_apache_lucene_codecs_lucene95_Lucene95HnswVectorsFormat_H
#define org_apache_lucene_codecs_lucene95_Lucene95HnswVectorsFormat_H

#include "org/apache/lucene/codecs/KnnVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class KnnVectorsReader;
        class KnnVectorsWriter;
      }
      namespace index {
        class SegmentWriteState;
        class SegmentReadState;
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
      namespace codecs {
        namespace lucene95 {

          class Lucene95HnswVectorsFormat : public ::org::apache::lucene::codecs::KnnVectorsFormat {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_078cef180abf5351,
              mid_fieldsReader_9d256b1fbc22a1c7,
              mid_fieldsWriter_9848c8b62f9a05b5,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene95HnswVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene95HnswVectorsFormat(const Lucene95HnswVectorsFormat& obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {}

            static jint DEFAULT_BEAM_WIDTH;
            static jint DEFAULT_MAX_CONN;
            static jint VERSION_CURRENT;
            static jint VERSION_START;

            Lucene95HnswVectorsFormat();
            Lucene95HnswVectorsFormat(jint, jint);

            ::org::apache::lucene::codecs::KnnVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::KnnVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::java::lang::String toString() const;
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
      namespace codecs {
        namespace lucene95 {
          extern PyType_Def PY_TYPE_DEF(Lucene95HnswVectorsFormat);
          extern PyTypeObject *PY_TYPE(Lucene95HnswVectorsFormat);

          class t_Lucene95HnswVectorsFormat {
          public:
            PyObject_HEAD
            Lucene95HnswVectorsFormat object;
            static PyObject *wrap_Object(const Lucene95HnswVectorsFormat&);
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
