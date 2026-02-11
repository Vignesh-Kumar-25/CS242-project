#ifndef org_apache_lucene_codecs_bloom_FuzzySet_H
#define org_apache_lucene_codecs_bloom_FuzzySet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
      }
      namespace store {
        class DataOutput;
        class DataInput;
      }
      namespace codecs {
        namespace bloom {
          class FuzzySet$ContainsResult;
          class FuzzySet;
        }
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
        namespace bloom {

          class FuzzySet : public ::java::lang::Object {
           public:
            enum {
              mid_addValue_46caeaebccf31ffe,
              mid_contains_59871a77f6eeaf52,
              mid_createOptimalSet_e066483432a121be,
              mid_createSetBasedOnMaxMemory_361ec2d9a56e8fa3,
              mid_createSetBasedOnQuality_3b3cc561f8d77a03,
              mid_deserialize_80d3c86c93eb2a7e,
              mid_downsize_30fa949faa8ccedb,
              mid_getEstimatedNumberUniqueValuesAllowingForCollisions_cd4894667d94f4d3,
              mid_getEstimatedUniqueValues_15aa3d485e96b665,
              mid_getNearestSetSize_58b165b57740feff,
              mid_getNearestSetSize_d4a9d155ead91829,
              mid_getSaturation_15cd8574741b1394,
              mid_getTargetMaxSaturation_15cd8574741b1394,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_serialize_ce69639f5ca08f3c,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FuzzySet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FuzzySet(const FuzzySet& obj) : ::java::lang::Object(obj) {}

            void addValue(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::codecs::bloom::FuzzySet$ContainsResult contains(const ::org::apache::lucene::util::BytesRef &) const;
            static FuzzySet createOptimalSet(jint, jfloat);
            static FuzzySet createSetBasedOnMaxMemory(jint);
            static FuzzySet createSetBasedOnQuality(jint, jfloat, jint);
            static FuzzySet deserialize(const ::org::apache::lucene::store::DataInput &);
            FuzzySet downsize(jfloat) const;
            static jint getEstimatedNumberUniqueValuesAllowingForCollisions(jint, jint);
            jint getEstimatedUniqueValues() const;
            static jint getNearestSetSize(jint);
            static jint getNearestSetSize(jint, jfloat);
            jfloat getSaturation() const;
            jfloat getTargetMaxSaturation() const;
            jlong ramBytesUsed() const;
            void serialize(const ::org::apache::lucene::store::DataOutput &) const;
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
        namespace bloom {
          extern PyType_Def PY_TYPE_DEF(FuzzySet);
          extern PyTypeObject *PY_TYPE(FuzzySet);

          class t_FuzzySet {
          public:
            PyObject_HEAD
            FuzzySet object;
            static PyObject *wrap_Object(const FuzzySet&);
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
