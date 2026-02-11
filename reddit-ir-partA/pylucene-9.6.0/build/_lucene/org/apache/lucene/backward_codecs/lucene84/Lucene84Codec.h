#ifndef org_apache_lucene_backward_codecs_lucene84_Lucene84Codec_H
#define org_apache_lucene_backward_codecs_lucene84_Lucene84Codec_H

#include "org/apache/lucene/codecs/Codec.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class LiveDocsFormat;
        class CompoundFormat;
        class PointsFormat;
        class TermVectorsFormat;
        class SegmentInfoFormat;
        class PostingsFormat;
        class NormsFormat;
        class KnnVectorsFormat;
        class DocValuesFormat;
        class FieldInfosFormat;
        class StoredFieldsFormat;
      }
      namespace backward_codecs {
        namespace lucene50 {
          class Lucene50StoredFieldsFormat$Mode;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene84 {

          class Lucene84Codec : public ::org::apache::lucene::codecs::Codec {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_51e7280dd342543c,
              mid_compoundFormat_23fc2101a88b373f,
              mid_docValuesFormat_82a283267c8dfa8c,
              mid_fieldInfosFormat_4c2def4b7ab7e240,
              mid_getDocValuesFormatForField_1cf473b5c7a1e815,
              mid_getPostingsFormatForField_dd4605bd447066ad,
              mid_knnVectorsFormat_83040c4e4131cc1e,
              mid_liveDocsFormat_be2d83a267b3ed40,
              mid_normsFormat_61f126bcee8ae0f8,
              mid_pointsFormat_289299aa8adabab8,
              mid_postingsFormat_e0e08870a438ec3c,
              mid_segmentInfoFormat_3ca0b04ebea5143b,
              mid_storedFieldsFormat_ca8ede997b87b229,
              mid_termVectorsFormat_1a04de81e720668b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene84Codec(jobject obj) : ::org::apache::lucene::codecs::Codec(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene84Codec(const Lucene84Codec& obj) : ::org::apache::lucene::codecs::Codec(obj) {}

            Lucene84Codec();
            Lucene84Codec(const ::org::apache::lucene::backward_codecs::lucene50::Lucene50StoredFieldsFormat$Mode &);

            ::org::apache::lucene::codecs::CompoundFormat compoundFormat() const;
            ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
            ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
            ::org::apache::lucene::codecs::DocValuesFormat getDocValuesFormatForField(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::PostingsFormat getPostingsFormatForField(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::KnnVectorsFormat knnVectorsFormat() const;
            ::org::apache::lucene::codecs::LiveDocsFormat liveDocsFormat() const;
            ::org::apache::lucene::codecs::NormsFormat normsFormat() const;
            ::org::apache::lucene::codecs::PointsFormat pointsFormat() const;
            ::org::apache::lucene::codecs::PostingsFormat postingsFormat() const;
            ::org::apache::lucene::codecs::SegmentInfoFormat segmentInfoFormat() const;
            ::org::apache::lucene::codecs::StoredFieldsFormat storedFieldsFormat() const;
            ::org::apache::lucene::codecs::TermVectorsFormat termVectorsFormat() const;
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
      namespace backward_codecs {
        namespace lucene84 {
          extern PyType_Def PY_TYPE_DEF(Lucene84Codec);
          extern PyTypeObject *PY_TYPE(Lucene84Codec);

          class t_Lucene84Codec {
          public:
            PyObject_HEAD
            Lucene84Codec object;
            static PyObject *wrap_Object(const Lucene84Codec&);
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
