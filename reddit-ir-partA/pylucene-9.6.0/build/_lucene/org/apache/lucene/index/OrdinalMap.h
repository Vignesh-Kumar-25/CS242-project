#ifndef org_apache_lucene_index_OrdinalMap_H
#define org_apache_lucene_index_OrdinalMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class LongValues;
      }
      namespace index {
        class IndexReader$CacheKey;
        class OrdinalMap;
        class SortedDocValues;
        class TermsEnum;
        class SortedSetDocValues;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace index {

        class OrdinalMap : public ::java::lang::Object {
         public:
          enum {
            mid_build_a7b3db82c752578a,
            mid_build_f253083b71de3f0c,
            mid_build_33c31676c8dbd214,
            mid_getChildResources_b47b7eaa8124fb60,
            mid_getFirstSegmentNumber_0b5d0387e68ead8f,
            mid_getFirstSegmentOrd_df4b83f9c1b9d174,
            mid_getGlobalOrds_7992f1cac7f55e1a,
            mid_getValueCount_058f5911dcf5d8a4,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            max_mid
          };

          enum {
            fid_owner,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrdinalMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrdinalMap(const OrdinalMap& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::IndexReader$CacheKey _get_owner() const;

          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::SortedDocValues > &, jfloat);
          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::SortedSetDocValues > &, jfloat);
          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::TermsEnum > &, const JArray< jlong > &, jfloat);
          ::java::util::Collection getChildResources() const;
          jint getFirstSegmentNumber(jlong) const;
          jlong getFirstSegmentOrd(jlong) const;
          ::org::apache::lucene::util::LongValues getGlobalOrds(jint) const;
          jlong getValueCount() const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(OrdinalMap);
        extern PyTypeObject *PY_TYPE(OrdinalMap);

        class t_OrdinalMap {
        public:
          PyObject_HEAD
          OrdinalMap object;
          static PyObject *wrap_Object(const OrdinalMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
