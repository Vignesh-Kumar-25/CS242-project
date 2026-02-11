#ifndef org_apache_lucene_index_StoredFields_H
#define org_apache_lucene_index_StoredFields_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor;
      }
      namespace document {
        class Document;
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
      namespace index {

        class StoredFields : public ::java::lang::Object {
         public:
          enum {
            mid_document_0c636ffa23b67e6b,
            mid_document_554c42b3867e24d2,
            mid_document_39a3372a89edb50b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFields(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFields(const StoredFields& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::document::Document document(jint) const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::document::Document document(jint, const ::java::util::Set &) const;
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
        extern PyType_Def PY_TYPE_DEF(StoredFields);
        extern PyTypeObject *PY_TYPE(StoredFields);

        class t_StoredFields {
        public:
          PyObject_HEAD
          StoredFields object;
          static PyObject *wrap_Object(const StoredFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
