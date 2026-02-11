#ifndef org_apache_lucene_util_RamUsageEstimator_H
#define org_apache_lucene_util_RamUsageEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
  namespace lang {
    class Integer;
    class Class;
    class Long;
    class String;
  }
  namespace text {
    class DecimalFormat;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class RamUsageEstimator : public ::java::lang::Object {
         public:
          enum {
            mid_alignObjectSize_df4b83f9c1b9d174,
            mid_humanReadableUnits_23522a84630bd8fe,
            mid_humanReadableUnits_7731ad8ddd851fe3,
            mid_shallowSizeOf_03957ea020a25c9d,
            mid_shallowSizeOf_848b7b9cb1cad404,
            mid_shallowSizeOf_59d289222a39e962,
            mid_shallowSizeOf_33371fb78f340e07,
            mid_shallowSizeOf_932d31c876071c92,
            mid_shallowSizeOf_8aed7d9745269ca1,
            mid_shallowSizeOf_52903a481cdb398a,
            mid_shallowSizeOf_db9a194535cd1579,
            mid_shallowSizeOf_36142f127b62fc2b,
            mid_shallowSizeOf_5fb882193d258cf2,
            mid_shallowSizeOfInstance_0131af8997d0a8c0,
            mid_sizeOf_5665cb31f1270da5,
            mid_sizeOf_c3618cf3ea2cbe9e,
            mid_sizeOf_03957ea020a25c9d,
            mid_sizeOf_848b7b9cb1cad404,
            mid_sizeOf_59d289222a39e962,
            mid_sizeOf_33371fb78f340e07,
            mid_sizeOf_932d31c876071c92,
            mid_sizeOf_8aed7d9745269ca1,
            mid_sizeOf_b03a057f0f430cd3,
            mid_sizeOf_3c72232f84c32f99,
            mid_sizeOf_db9a194535cd1579,
            mid_sizeOf_36142f127b62fc2b,
            mid_sizeOf_f9e0f284a35cbac5,
            mid_sizeOf_39c51e772eeec7e8,
            mid_sizeOf_8f46192f3af08006,
            mid_sizeOf_0289b1cbf887b510,
            mid_sizeOfCollection_eb99a9b15d93a496,
            mid_sizeOfCollection_5c5c0d09ed449fa8,
            mid_sizeOfMap_01eb61af747b3111,
            mid_sizeOfMap_30fd1f5d9849f2a1,
            mid_sizeOfObject_5fb882193d258cf2,
            mid_sizeOfObject_ba477707d93075da,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RamUsageEstimator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RamUsageEstimator(const RamUsageEstimator& obj) : ::java::lang::Object(obj) {}

          static jboolean COMPRESSED_REFS_ENABLED;
          static jlong HASHTABLE_RAM_BYTES_PER_ENTRY;
          static jlong LINKED_HASHTABLE_RAM_BYTES_PER_ENTRY;
          static jint MAX_DEPTH;
          static jint NUM_BYTES_ARRAY_HEADER;
          static jint NUM_BYTES_OBJECT_ALIGNMENT;
          static jint NUM_BYTES_OBJECT_HEADER;
          static jint NUM_BYTES_OBJECT_REF;
          static jlong ONE_GB;
          static jlong ONE_KB;
          static jlong ONE_MB;
          static jint QUERY_DEFAULT_RAM_BYTES_USED;
          static jint UNKNOWN_DEFAULT_RAM_BYTES_USED;
          static ::java::util::Map *primitiveSizes;

          static jlong alignObjectSize(jlong);
          static ::java::lang::String humanReadableUnits(jlong);
          static ::java::lang::String humanReadableUnits(jlong, const ::java::text::DecimalFormat &);
          static jlong shallowSizeOf(const JArray< jbyte > &);
          static jlong shallowSizeOf(const JArray< jchar > &);
          static jlong shallowSizeOf(const JArray< jdouble > &);
          static jlong shallowSizeOf(const JArray< jfloat > &);
          static jlong shallowSizeOf(const JArray< jint > &);
          static jlong shallowSizeOf(const JArray< jlong > &);
          static jlong shallowSizeOf(const JArray< ::java::lang::Object > &);
          static jlong shallowSizeOf(const JArray< jshort > &);
          static jlong shallowSizeOf(const JArray< jboolean > &);
          static jlong shallowSizeOf(const ::java::lang::Object &);
          static jlong shallowSizeOfInstance(const ::java::lang::Class &);
          static jlong sizeOf(const ::java::lang::Integer &);
          static jlong sizeOf(const ::java::lang::Long &);
          static jlong sizeOf(const JArray< jbyte > &);
          static jlong sizeOf(const JArray< jchar > &);
          static jlong sizeOf(const JArray< jdouble > &);
          static jlong sizeOf(const JArray< jfloat > &);
          static jlong sizeOf(const JArray< jint > &);
          static jlong sizeOf(const JArray< jlong > &);
          static jlong sizeOf(const JArray< ::java::lang::String > &);
          static jlong sizeOf(const JArray< ::org::apache::lucene::util::Accountable > &);
          static jlong sizeOf(const JArray< jshort > &);
          static jlong sizeOf(const JArray< jboolean > &);
          static jlong sizeOf(const ::java::lang::String &);
          static jlong sizeOf(const ::org::apache::lucene::search::Query &);
          static jlong sizeOf(const ::org::apache::lucene::util::Accountable &);
          static jlong sizeOf(const ::org::apache::lucene::search::Query &, jlong);
          static jlong sizeOfCollection(const ::java::util::Collection &);
          static jlong sizeOfCollection(const ::java::util::Collection &, jlong);
          static jlong sizeOfMap(const ::java::util::Map &);
          static jlong sizeOfMap(const ::java::util::Map &, jlong);
          static jlong sizeOfObject(const ::java::lang::Object &);
          static jlong sizeOfObject(const ::java::lang::Object &, jlong);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(RamUsageEstimator);
        extern PyTypeObject *PY_TYPE(RamUsageEstimator);

        class t_RamUsageEstimator {
        public:
          PyObject_HEAD
          RamUsageEstimator object;
          static PyObject *wrap_Object(const RamUsageEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
