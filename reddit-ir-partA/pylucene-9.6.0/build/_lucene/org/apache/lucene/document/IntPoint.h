#ifndef org_apache_lucene_document_IntPoint_H
#define org_apache_lucene_document_IntPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Number;
    class Integer;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class IntPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_d0ea86a3ba47cefb,
            mid_decodeDimension_c7101d48a57e78a5,
            mid_encodeDimension_e0f588bd0ecedb93,
            mid_newExactQuery_5964353fb115a3ed,
            mid_newRangeQuery_ec922d3ee8d96819,
            mid_newRangeQuery_cf34815af7810b0d,
            mid_newSetQuery_fca7855ab89118b5,
            mid_newSetQuery_4601927fe15c5fcd,
            mid_numericValue_72def02dd614d827,
            mid_pack_9e58ba39a005c1fe,
            mid_setBytesValue_46caeaebccf31ffe,
            mid_setIntValue_da425451c8de636b,
            mid_setIntValues_6b9509e20a616019,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntPoint(const IntPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          IntPoint(const ::java::lang::String &, const JArray< jint > &);

          static jint decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jint, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jint);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jint, jint);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jint > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setIntValue(jint) const;
          void setIntValues(const JArray< jint > &) const;
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
        extern PyType_Def PY_TYPE_DEF(IntPoint);
        extern PyTypeObject *PY_TYPE(IntPoint);

        class t_IntPoint {
        public:
          PyObject_HEAD
          IntPoint object;
          static PyObject *wrap_Object(const IntPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
