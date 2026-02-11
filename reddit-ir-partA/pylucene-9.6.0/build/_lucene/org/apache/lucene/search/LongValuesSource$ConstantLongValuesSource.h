#ifndef org_apache_lucene_search_LongValuesSource$ConstantLongValuesSource_H
#define org_apache_lucene_search_LongValuesSource$ConstantLongValuesSource_H

#include "org/apache/lucene/search/LongValuesSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class LongValues;
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
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LongValuesSource$ConstantLongValuesSource : public ::org::apache::lucene::search::LongValuesSource {
         public:
          enum {
            mid_equals_6084f78e09b6c0c3,
            mid_getValue_058f5911dcf5d8a4,
            mid_getValues_89b5a6be7cd3a715,
            mid_hashCode_15aa3d485e96b665,
            mid_isCacheable_7f6d289efb1f533f,
            mid_needsScores_ee8b0a5fa521ddac,
            mid_rewrite_f025addc261954d1,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValuesSource$ConstantLongValuesSource(jobject obj) : ::org::apache::lucene::search::LongValuesSource(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValuesSource$ConstantLongValuesSource(const LongValuesSource$ConstantLongValuesSource& obj) : ::org::apache::lucene::search::LongValuesSource(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          jlong getValue() const;
          ::org::apache::lucene::search::LongValues getValues(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DoubleValues &) const;
          jint hashCode() const;
          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jboolean needsScores() const;
          ::org::apache::lucene::search::LongValuesSource rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongValuesSource$ConstantLongValuesSource);
        extern PyTypeObject *PY_TYPE(LongValuesSource$ConstantLongValuesSource);

        class t_LongValuesSource$ConstantLongValuesSource {
        public:
          PyObject_HEAD
          LongValuesSource$ConstantLongValuesSource object;
          static PyObject *wrap_Object(const LongValuesSource$ConstantLongValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
