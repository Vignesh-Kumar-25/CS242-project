#ifndef org_apache_lucene_codecs_lucene95_Lucene95HnswVectorsWriter_H
#define org_apache_lucene_codecs_lucene95_Lucene95HnswVectorsWriter_H

#include "org/apache/lucene/codecs/KnnVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class Sorter$DocMap;
        class FieldInfo;
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
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene95 {

          class Lucene95HnswVectorsWriter : public ::org::apache::lucene::codecs::KnnVectorsWriter {
           public:
            enum {
              mid_addField_44c0ea4a884c98f7,
              mid_close_3353d9f14bbfd91a,
              mid_finish_3353d9f14bbfd91a,
              mid_flush_9dc9f38e6a58d395,
              mid_mergeOneField_f2de1d0e0d2557e0,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene95HnswVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene95HnswVectorsWriter(const Lucene95HnswVectorsWriter& obj) : ::org::apache::lucene::codecs::KnnVectorsWriter(obj) {}

            ::org::apache::lucene::codecs::KnnFieldVectorsWriter addField(const ::org::apache::lucene::index::FieldInfo &) const;
            void close() const;
            void finish() const;
            void flush(jint, const ::org::apache::lucene::index::Sorter$DocMap &) const;
            void mergeOneField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene95HnswVectorsWriter);
          extern PyTypeObject *PY_TYPE(Lucene95HnswVectorsWriter);

          class t_Lucene95HnswVectorsWriter {
          public:
            PyObject_HEAD
            Lucene95HnswVectorsWriter object;
            static PyObject *wrap_Object(const Lucene95HnswVectorsWriter&);
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
