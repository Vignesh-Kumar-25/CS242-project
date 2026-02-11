#ifndef org_apache_lucene_document_BinaryRangeDocValues_H
#define org_apache_lucene_document_BinaryRangeDocValues_H

#include "org/apache/lucene/index/BinaryDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace document {

        class BinaryRangeDocValues : public ::org::apache::lucene::index::BinaryDocValues {
         public:
          enum {
            mid_init$_3e3926d9ad562dda,
            mid_advance_58b165b57740feff,
            mid_advanceExact_92eccba87b045bbc,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_getPackedValue_f4d7c022fb7af16d,
            mid_nextDoc_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinaryRangeDocValues(jobject obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinaryRangeDocValues(const BinaryRangeDocValues& obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {}

          BinaryRangeDocValues(const ::org::apache::lucene::index::BinaryDocValues &, jint, jint);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          ::org::apache::lucene::util::BytesRef binaryValue() const;
          jlong cost() const;
          jint docID() const;
          JArray< jbyte > getPackedValue() const;
          jint nextDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(BinaryRangeDocValues);
        extern PyTypeObject *PY_TYPE(BinaryRangeDocValues);

        class t_BinaryRangeDocValues {
        public:
          PyObject_HEAD
          BinaryRangeDocValues object;
          static PyObject *wrap_Object(const BinaryRangeDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
