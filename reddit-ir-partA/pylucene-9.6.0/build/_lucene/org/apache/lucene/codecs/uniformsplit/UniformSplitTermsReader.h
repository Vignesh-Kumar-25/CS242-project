#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTermsReader_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class BlockDecoder;
        }
        class PostingsReaderBase;
      }
      namespace index {
        class SegmentReadState;
        class Terms;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class UniformSplitTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
           public:
            enum {
              mid_init$_ddb55aee19e661e5,
              mid_checkIntegrity_3353d9f14bbfd91a,
              mid_close_3353d9f14bbfd91a,
              mid_iterator_7c74834ad8788f5d,
              mid_size_15aa3d485e96b665,
              mid_terms_94c9097da6540ed1,
              mid_fillFieldMap_a884d7f0db6aef83,
              mid_createDictionaryBrowserSupplier_2d0b9c8659b01143,
              mid_readFieldsMetadata_3074c9967b3600ca,
              mid_readEncodedFieldsMetadata_683f012529cfd3a9,
              mid_readUnencodedFieldsMetadata_aa7adbb23277a802,
              mid_seekFieldsMetadata_634ba7e2f6f5896b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTermsReader(const UniformSplitTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            UniformSplitTermsReader(const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, jboolean);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Iterator iterator() const;
            jint size() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(UniformSplitTermsReader);
          extern PyTypeObject *PY_TYPE(UniformSplitTermsReader);

          class t_UniformSplitTermsReader {
          public:
            PyObject_HEAD
            UniformSplitTermsReader object;
            static PyObject *wrap_Object(const UniformSplitTermsReader&);
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
