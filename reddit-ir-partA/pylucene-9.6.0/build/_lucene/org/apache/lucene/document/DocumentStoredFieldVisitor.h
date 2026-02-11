#ifndef org_apache_lucene_document_DocumentStoredFieldVisitor_H
#define org_apache_lucene_document_DocumentStoredFieldVisitor_H

#include "org/apache/lucene/index/StoredFieldVisitor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class Document;
      }
      namespace index {
        class StoredFieldVisitor$Status;
        class FieldInfo;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
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
      namespace document {

        class DocumentStoredFieldVisitor : public ::org::apache::lucene::index::StoredFieldVisitor {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_a43828b01cd19e9d,
            mid_init$_d0cb68c4009fd1b5,
            mid_binaryField_5d3002e71ee9daf0,
            mid_doubleField_301fef80cc8ba173,
            mid_floatField_88eacd1e10e53a68,
            mid_getDocument_875ccbe264eb8b7f,
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

          explicit DocumentStoredFieldVisitor(jobject obj) : ::org::apache::lucene::index::StoredFieldVisitor(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocumentStoredFieldVisitor(const DocumentStoredFieldVisitor& obj) : ::org::apache::lucene::index::StoredFieldVisitor(obj) {}

          DocumentStoredFieldVisitor();
          DocumentStoredFieldVisitor(const JArray< ::java::lang::String > &);
          DocumentStoredFieldVisitor(const ::java::util::Set &);

          void binaryField(const ::org::apache::lucene::index::FieldInfo &, const JArray< jbyte > &) const;
          void doubleField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
          void floatField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
          ::org::apache::lucene::document::Document getDocument() const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(DocumentStoredFieldVisitor);
        extern PyTypeObject *PY_TYPE(DocumentStoredFieldVisitor);

        class t_DocumentStoredFieldVisitor {
        public:
          PyObject_HEAD
          DocumentStoredFieldVisitor object;
          static PyObject *wrap_Object(const DocumentStoredFieldVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
