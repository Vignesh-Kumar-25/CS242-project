#ifndef org_apache_lucene_index_StoredFieldVisitor_H
#define org_apache_lucene_index_StoredFieldVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor$Status;
        class FieldInfo;
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
      namespace index {

        class StoredFieldVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_binaryField_5d3002e71ee9daf0,
            mid_doubleField_301fef80cc8ba173,
            mid_floatField_88eacd1e10e53a68,
            mid_intField_557a1c42e699541c,
            mid_longField_282137181cb68431,
            mid_needsField_f8a0e9b98b264af0,
            mid_stringField_e28727547c823993,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFieldVisitor(const StoredFieldVisitor& obj) : ::java::lang::Object(obj) {}

          void binaryField(const ::org::apache::lucene::index::FieldInfo &, const JArray< jbyte > &) const;
          void doubleField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
          void floatField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
          void intField(const ::org::apache::lucene::index::FieldInfo &, jint) const;
          void longField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
          ::org::apache::lucene::index::StoredFieldVisitor$Status needsField(const ::org::apache::lucene::index::FieldInfo &) const;
          void stringField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(StoredFieldVisitor);
        extern PyTypeObject *PY_TYPE(StoredFieldVisitor);

        class t_StoredFieldVisitor {
        public:
          PyObject_HEAD
          StoredFieldVisitor object;
          static PyObject *wrap_Object(const StoredFieldVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
