#ifndef org_apache_lucene_document_Document_H
#define org_apache_lucene_document_Document_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class IndexableField;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class Document : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_f86f3b7061fea99d,
            mid_clear_3353d9f14bbfd91a,
            mid_get_04612c8360f09496,
            mid_getBinaryValue_a2a454ef4354715a,
            mid_getBinaryValues_618b17607de40945,
            mid_getField_725c7df6d87f4d9a,
            mid_getFields_0bc66e960964b70a,
            mid_getFields_460bb9e7d17606b0,
            mid_getValues_5dfe22b47e50fb54,
            mid_iterator_7c74834ad8788f5d,
            mid_removeField_4a883f7810d2effa,
            mid_removeFields_4a883f7810d2effa,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Document(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Document(const Document& obj) : ::java::lang::Object(obj) {}

          Document();

          void add(const ::org::apache::lucene::index::IndexableField &) const;
          void clear() const;
          ::java::lang::String get(const ::java::lang::String &) const;
          ::org::apache::lucene::util::BytesRef getBinaryValue(const ::java::lang::String &) const;
          JArray< ::org::apache::lucene::util::BytesRef > getBinaryValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexableField getField(const ::java::lang::String &) const;
          ::java::util::List getFields() const;
          JArray< ::org::apache::lucene::index::IndexableField > getFields(const ::java::lang::String &) const;
          JArray< ::java::lang::String > getValues(const ::java::lang::String &) const;
          ::java::util::Iterator iterator() const;
          void removeField(const ::java::lang::String &) const;
          void removeFields(const ::java::lang::String &) const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(Document);
        extern PyTypeObject *PY_TYPE(Document);

        class t_Document {
        public:
          PyObject_HEAD
          Document object;
          static PyObject *wrap_Object(const Document&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
