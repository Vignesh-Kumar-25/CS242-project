#ifndef org_apache_lucene_facet_MultiLongValuesSource_H
#define org_apache_lucene_facet_MultiLongValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiLongValues;
        class MultiDoubleValuesSource;
        class MultiLongValuesSource;
      }
      namespace search {
        class LongValuesSource;
        class SegmentCacheable;
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
      namespace facet {

        class MultiLongValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_equals_6084f78e09b6c0c3,
            mid_fromIntField_dd916b36f713e7f7,
            mid_fromLongField_dd916b36f713e7f7,
            mid_fromSingleValued_e801c2cc63f902e4,
            mid_getValues_53f86cf7ecc0d3d2,
            mid_hashCode_15aa3d485e96b665,
            mid_toMultiDoubleValuesSource_54b66a8e29aebc42,
            mid_toString_dc633f13a47328a8,
            mid_unwrapSingleton_6f24baa75950f467,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLongValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLongValuesSource(const MultiLongValuesSource& obj) : ::java::lang::Object(obj) {}

          MultiLongValuesSource();

          jboolean equals(const ::java::lang::Object &) const;
          static MultiLongValuesSource fromIntField(const ::java::lang::String &);
          static MultiLongValuesSource fromLongField(const ::java::lang::String &);
          static MultiLongValuesSource fromSingleValued(const ::org::apache::lucene::search::LongValuesSource &);
          ::org::apache::lucene::facet::MultiLongValues getValues(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jint hashCode() const;
          ::org::apache::lucene::facet::MultiDoubleValuesSource toMultiDoubleValuesSource() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::search::LongValuesSource unwrapSingleton(const MultiLongValuesSource &);
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
        extern PyType_Def PY_TYPE_DEF(MultiLongValuesSource);
        extern PyTypeObject *PY_TYPE(MultiLongValuesSource);

        class t_MultiLongValuesSource {
        public:
          PyObject_HEAD
          MultiLongValuesSource object;
          static PyObject *wrap_Object(const MultiLongValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
