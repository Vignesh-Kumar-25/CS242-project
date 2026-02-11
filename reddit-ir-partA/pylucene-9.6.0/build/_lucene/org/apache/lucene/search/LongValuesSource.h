#ifndef org_apache_lucene_search_LongValuesSource_H
#define org_apache_lucene_search_LongValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class LongValuesSource;
        class LongValues;
        class DoubleValuesSource;
        class SegmentCacheable;
        class SortField;
        class DoubleValues;
      }
      namespace index {
        class LeafReaderContext;
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
      namespace search {

        class LongValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_constant_c87c2ab6d97b7bcf,
            mid_equals_6084f78e09b6c0c3,
            mid_fromIntField_e9f68ce3c17bad05,
            mid_fromLongField_e9f68ce3c17bad05,
            mid_getSortField_d261ca5cf3b961c7,
            mid_getValues_89b5a6be7cd3a715,
            mid_hashCode_15aa3d485e96b665,
            mid_needsScores_ee8b0a5fa521ddac,
            mid_rewrite_f025addc261954d1,
            mid_toDoubleValuesSource_a1ec38fd305e2f49,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValuesSource(const LongValuesSource& obj) : ::java::lang::Object(obj) {}

          LongValuesSource();

          static LongValuesSource constant(jlong);
          jboolean equals(const ::java::lang::Object &) const;
          static LongValuesSource fromIntField(const ::java::lang::String &);
          static LongValuesSource fromLongField(const ::java::lang::String &);
          ::org::apache::lucene::search::SortField getSortField(jboolean) const;
          ::org::apache::lucene::search::LongValues getValues(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DoubleValues &) const;
          jint hashCode() const;
          jboolean needsScores() const;
          LongValuesSource rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          ::org::apache::lucene::search::DoubleValuesSource toDoubleValuesSource() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(LongValuesSource);
        extern PyTypeObject *PY_TYPE(LongValuesSource);

        class t_LongValuesSource {
        public:
          PyObject_HEAD
          LongValuesSource object;
          static PyObject *wrap_Object(const LongValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
