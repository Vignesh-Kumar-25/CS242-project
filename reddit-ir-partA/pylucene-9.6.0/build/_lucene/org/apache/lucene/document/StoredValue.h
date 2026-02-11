#ifndef org_apache_lucene_document_StoredValue_H
#define org_apache_lucene_document_StoredValue_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace document {
        class StoredValue$Type;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class StoredValue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            mid_init$_46caeaebccf31ffe,
            mid_init$_c1f7206c104d501e,
            mid_init$_354c036766ff84b4,
            mid_init$_da425451c8de636b,
            mid_init$_db2028ac45cd5b77,
            mid_getBinaryValue_e6961a1ebae5a29a,
            mid_getDoubleValue_409d010a7a53d0d1,
            mid_getFloatValue_15cd8574741b1394,
            mid_getIntValue_15aa3d485e96b665,
            mid_getLongValue_058f5911dcf5d8a4,
            mid_getStringValue_dc633f13a47328a8,
            mid_getType_257e8981f2510b91,
            mid_setBinaryValue_46caeaebccf31ffe,
            mid_setDoubleValue_c1f7206c104d501e,
            mid_setFloatValue_354c036766ff84b4,
            mid_setIntValue_da425451c8de636b,
            mid_setLongValue_db2028ac45cd5b77,
            mid_setStringValue_4a883f7810d2effa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredValue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredValue(const StoredValue& obj) : ::java::lang::Object(obj) {}

          StoredValue(const ::java::lang::String &);
          StoredValue(const ::org::apache::lucene::util::BytesRef &);
          StoredValue(jdouble);
          StoredValue(jfloat);
          StoredValue(jint);
          StoredValue(jlong);

          ::org::apache::lucene::util::BytesRef getBinaryValue() const;
          jdouble getDoubleValue() const;
          jfloat getFloatValue() const;
          jint getIntValue() const;
          jlong getLongValue() const;
          ::java::lang::String getStringValue() const;
          ::org::apache::lucene::document::StoredValue$Type getType() const;
          void setBinaryValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setFloatValue(jfloat) const;
          void setIntValue(jint) const;
          void setLongValue(jlong) const;
          void setStringValue(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(StoredValue);
        extern PyTypeObject *PY_TYPE(StoredValue);

        class t_StoredValue {
        public:
          PyObject_HEAD
          StoredValue object;
          static PyObject *wrap_Object(const StoredValue&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
