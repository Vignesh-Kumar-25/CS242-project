#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTermsWriter_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTermsWriter_H

#include "org/apache/lucene/codecs/FieldsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentWriteState;
        class Fields;
      }
      namespace codecs {
        class NormsProducer;
        namespace uniformsplit {
          class BlockEncoder;
        }
        class PostingsWriterBase;
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
        namespace uniformsplit {

          class UniformSplitTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
           public:
            enum {
              mid_init$_a8fa0ed828fb0168,
              mid_init$_fcee30310b79461e,
              mid_close_3353d9f14bbfd91a,
              mid_write_1c5943e17cbcb841,
              mid_validateSettings_078cef180abf5351,
              mid_writeFieldsMetadata_0e89994e3ee12bf5,
              mid_writeUnencodedFieldsMetadata_2874c59784021e96,
              mid_writeEncodedFieldsMetadata_2874c59784021e96,
              mid_writeFieldTerms_6d9543f4a98acbf5,
              mid_writePostingLine_a25e6d9cf6d704fc,
              mid_writeDictionary_485dbc9d5f0c563b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTermsWriter(const UniformSplitTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

            static jint DEFAULT_DELTA_NUM_LINES;
            static jint DEFAULT_TARGET_NUM_BLOCK_LINES;

            UniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);
            UniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);

            void close() const;
            void write(const ::org::apache::lucene::index::Fields &, const ::org::apache::lucene::codecs::NormsProducer &) const;
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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(UniformSplitTermsWriter);
          extern PyTypeObject *PY_TYPE(UniformSplitTermsWriter);

          class t_UniformSplitTermsWriter {
          public:
            PyObject_HEAD
            UniformSplitTermsWriter object;
            static PyObject *wrap_Object(const UniformSplitTermsWriter&);
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
