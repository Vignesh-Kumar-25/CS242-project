#ifndef org_apache_lucene_index_EmptyDocValuesProducer_H
#define org_apache_lucene_index_EmptyDocValuesProducer_H

#include "org/apache/lucene/codecs/DocValuesProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class NumericDocValues;
        class SortedDocValues;
        class BinaryDocValues;
        class FieldInfo;
        class SortedSetDocValues;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class EmptyDocValuesProducer : public ::org::apache::lucene::codecs::DocValuesProducer {
         public:
          enum {
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_close_3353d9f14bbfd91a,
            mid_getBinary_99d58159f460208a,
            mid_getNumeric_f10c0879c4ec5015,
            mid_getSorted_87aecdfa2f92ac07,
            mid_getSortedNumeric_ccb6fb175385e5e8,
            mid_getSortedSet_a7e2b1717097add1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EmptyDocValuesProducer(jobject obj) : ::org::apache::lucene::codecs::DocValuesProducer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EmptyDocValuesProducer(const EmptyDocValuesProducer& obj) : ::org::apache::lucene::codecs::DocValuesProducer(obj) {}

          void checkIntegrity() const;
          void close() const;
          ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::FieldInfo &) const;
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
        extern PyType_Def PY_TYPE_DEF(EmptyDocValuesProducer);
        extern PyTypeObject *PY_TYPE(EmptyDocValuesProducer);

        class t_EmptyDocValuesProducer {
        public:
          PyObject_HEAD
          EmptyDocValuesProducer object;
          static PyObject *wrap_Object(const EmptyDocValuesProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
