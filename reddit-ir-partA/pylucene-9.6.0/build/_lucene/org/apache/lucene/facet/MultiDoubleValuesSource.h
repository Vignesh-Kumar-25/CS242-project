#ifndef org_apache_lucene_facet_MultiDoubleValuesSource_H
#define org_apache_lucene_facet_MultiDoubleValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiDoubleValuesSource;
        class MultiDoubleValues;
        class MultiLongValuesSource;
      }
      namespace search {
        class DoubleValuesSource;
        class SegmentCacheable;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class LongToDoubleFunction;
    }
  }
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
      namespace facet {

        class MultiDoubleValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_equals_6084f78e09b6c0c3,
            mid_fromDoubleField_f6454c0a13a6aa37,
            mid_fromField_f372d232bff64433,
            mid_fromFloatField_f6454c0a13a6aa37,
            mid_fromIntField_f6454c0a13a6aa37,
            mid_fromLongField_f6454c0a13a6aa37,
            mid_fromSingleValued_205c71ba0c78f64b,
            mid_getValues_1ba1c0b68437768b,
            mid_hashCode_15aa3d485e96b665,
            mid_toMultiLongValuesSource_bf31a52aa760472d,
            mid_toString_dc633f13a47328a8,
            mid_unwrapSingleton_01a1666cfe121324,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDoubleValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDoubleValuesSource(const MultiDoubleValuesSource& obj) : ::java::lang::Object(obj) {}

          MultiDoubleValuesSource();

          jboolean equals(const ::java::lang::Object &) const;
          static MultiDoubleValuesSource fromDoubleField(const ::java::lang::String &);
          static MultiDoubleValuesSource fromField(const ::java::lang::String &, const ::java::util::function::LongToDoubleFunction &);
          static MultiDoubleValuesSource fromFloatField(const ::java::lang::String &);
          static MultiDoubleValuesSource fromIntField(const ::java::lang::String &);
          static MultiDoubleValuesSource fromLongField(const ::java::lang::String &);
          static MultiDoubleValuesSource fromSingleValued(const ::org::apache::lucene::search::DoubleValuesSource &);
          ::org::apache::lucene::facet::MultiDoubleValues getValues(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jint hashCode() const;
          ::org::apache::lucene::facet::MultiLongValuesSource toMultiLongValuesSource() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::search::DoubleValuesSource unwrapSingleton(const MultiDoubleValuesSource &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(MultiDoubleValuesSource);
        extern PyTypeObject *PY_TYPE(MultiDoubleValuesSource);

        class t_MultiDoubleValuesSource {
        public:
          PyObject_HEAD
          MultiDoubleValuesSource object;
          static PyObject *wrap_Object(const MultiDoubleValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
