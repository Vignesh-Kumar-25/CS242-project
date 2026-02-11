#ifndef org_apache_lucene_codecs_Codec_H
#define org_apache_lucene_codecs_Codec_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class LiveDocsFormat;
        class Codec;
        class CompoundFormat;
        class PointsFormat;
        class TermVectorsFormat;
        class SegmentInfoFormat;
        class PostingsFormat;
        class NormsFormat;
        class KnnVectorsFormat;
        class FieldInfosFormat;
        class DocValuesFormat;
        class StoredFieldsFormat;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class Codec : public ::java::lang::Object {
         public:
          enum {
            mid_availableCodecs_9a625d56b67c7390,
            mid_compoundFormat_23fc2101a88b373f,
            mid_docValuesFormat_82a283267c8dfa8c,
            mid_fieldInfosFormat_4c2def4b7ab7e240,
            mid_forName_7822923ce35bc18d,
            mid_getDefault_acf8c1a01773b200,
            mid_getName_dc633f13a47328a8,
            mid_knnVectorsFormat_83040c4e4131cc1e,
            mid_liveDocsFormat_be2d83a267b3ed40,
            mid_normsFormat_61f126bcee8ae0f8,
            mid_pointsFormat_289299aa8adabab8,
            mid_postingsFormat_e0e08870a438ec3c,
            mid_reloadCodecs_265d190b7c213a14,
            mid_segmentInfoFormat_3ca0b04ebea5143b,
            mid_setDefault_2a9e8a498cd6ce0b,
            mid_storedFieldsFormat_ca8ede997b87b229,
            mid_termVectorsFormat_1a04de81e720668b,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Codec(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Codec(const Codec& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableCodecs();
          ::org::apache::lucene::codecs::CompoundFormat compoundFormat() const;
          ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
          ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
          static Codec forName(const ::java::lang::String &);
          static Codec getDefault();
          ::java::lang::String getName() const;
          ::org::apache::lucene::codecs::KnnVectorsFormat knnVectorsFormat() const;
          ::org::apache::lucene::codecs::LiveDocsFormat liveDocsFormat() const;
          ::org::apache::lucene::codecs::NormsFormat normsFormat() const;
          ::org::apache::lucene::codecs::PointsFormat pointsFormat() const;
          ::org::apache::lucene::codecs::PostingsFormat postingsFormat() const;
          static void reloadCodecs(const ::java::lang::ClassLoader &);
          ::org::apache::lucene::codecs::SegmentInfoFormat segmentInfoFormat() const;
          static void setDefault(const Codec &);
          ::org::apache::lucene::codecs::StoredFieldsFormat storedFieldsFormat() const;
          ::org::apache::lucene::codecs::TermVectorsFormat termVectorsFormat() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(Codec);
        extern PyTypeObject *PY_TYPE(Codec);

        class t_Codec {
        public:
          PyObject_HEAD
          Codec object;
          static PyObject *wrap_Object(const Codec&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
