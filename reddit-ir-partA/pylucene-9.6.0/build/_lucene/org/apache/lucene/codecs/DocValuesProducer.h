#ifndef org_apache_lucene_codecs_DocValuesProducer_H
#define org_apache_lucene_codecs_DocValuesProducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class SortedSetDocValues;
        class NumericDocValues;
        class SortedDocValues;
        class BinaryDocValues;
        class FieldInfo;
      }
      namespace codecs {
        class DocValuesProducer;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class DocValuesProducer : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_getBinary_99d58159f460208a,
            mid_getMergeInstance_0feef273e2a30a39,
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

          explicit DocValuesProducer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesProducer(const DocValuesProducer& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::FieldInfo &) const;
          DocValuesProducer getMergeInstance() const;
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
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(DocValuesProducer);
        extern PyTypeObject *PY_TYPE(DocValuesProducer);

        class t_DocValuesProducer {
        public:
          PyObject_HEAD
          DocValuesProducer object;
          static PyObject *wrap_Object(const DocValuesProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
