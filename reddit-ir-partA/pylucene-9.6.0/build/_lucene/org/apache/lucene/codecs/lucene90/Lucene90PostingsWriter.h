#ifndef org_apache_lucene_codecs_lucene90_Lucene90PostingsWriter_H
#define org_apache_lucene_codecs_lucene90_Lucene90PostingsWriter_H

#include "org/apache/lucene/codecs/PushPostingsWriterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace store {
        class DataOutput;
        class IndexOutput;
      }
      namespace index {
        class SegmentWriteState;
        class NumericDocValues;
        class FieldInfo;
      }
      namespace codecs {
        namespace lucene90 {
          class Lucene90PostingsFormat$IntBlockTermState;
        }
        class BlockTermState;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {

          class Lucene90PostingsWriter : public ::org::apache::lucene::codecs::PushPostingsWriterBase {
           public:
            enum {
              mid_init$_cde348df1e26e832,
              mid_addPosition_80b06e553c1c66e6,
              mid_close_3353d9f14bbfd91a,
              mid_encodeTerm_9fc3768a0f4cb73c,
              mid_finishDoc_3353d9f14bbfd91a,
              mid_finishTerm_df59836e1dc8869a,
              mid_init_06f8654564965fe1,
              mid_newTermState_ac5418909057c23c,
              mid_setField_e1dddc214e4da527,
              mid_startDoc_078cef180abf5351,
              mid_startTerm_02668bd1833e9c5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90PostingsWriter(jobject obj) : ::org::apache::lucene::codecs::PushPostingsWriterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90PostingsWriter(const Lucene90PostingsWriter& obj) : ::org::apache::lucene::codecs::PushPostingsWriterBase(obj) {}

            Lucene90PostingsWriter(const ::org::apache::lucene::index::SegmentWriteState &);

            void addPosition(jint, const ::org::apache::lucene::util::BytesRef &, jint, jint) const;
            void close() const;
            void encodeTerm(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
            void finishDoc() const;
            void finishTerm(const ::org::apache::lucene::codecs::BlockTermState &) const;
            void init(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::lucene90::Lucene90PostingsFormat$IntBlockTermState newTermState() const;
            void setField(const ::org::apache::lucene::index::FieldInfo &) const;
            void startDoc(jint, jint) const;
            void startTerm(const ::org::apache::lucene::index::NumericDocValues &) const;
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
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90PostingsWriter);
          extern PyTypeObject *PY_TYPE(Lucene90PostingsWriter);

          class t_Lucene90PostingsWriter {
          public:
            PyObject_HEAD
            Lucene90PostingsWriter object;
            static PyObject *wrap_Object(const Lucene90PostingsWriter&);
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
