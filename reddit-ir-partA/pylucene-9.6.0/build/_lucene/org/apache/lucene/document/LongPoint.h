#ifndef org_apache_lucene_document_LongPoint_H
#define org_apache_lucene_document_LongPoint_H

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
    class Class;
    class Long;
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

        class LongPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_5c69d20e262b43be,
            mid_decodeDimension_a54a8b108ad61fb6,
            mid_encodeDimension_33208fab899bf262,
            mid_newDistanceFeatureQuery_717e0c4047886402,
            mid_newExactQuery_14356f32286ce928,
            mid_newRangeQuery_d1fb9861ba8804b5,
            mid_newRangeQuery_d6e8c62031c54888,
            mid_newSetQuery_62960f7aca98eb23,
            mid_newSetQuery_4601927fe15c5fcd,
            mid_numericValue_72def02dd614d827,
            mid_pack_9a29e2f895638737,
            mid_setBytesValue_46caeaebccf31ffe,
            mid_setLongValue_db2028ac45cd5b77,
            mid_setLongValues_dcb1a1b31819b4fc,
            mid_toString_dc633f13a47328a8,
            mid_unpack_34f4edd8ec0e03b1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongPoint(const LongPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          LongPoint(const ::java::lang::String &, const JArray< jlong > &);

          static jlong decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jlong, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newDistanceFeatureQuery(const ::java::lang::String &, jfloat, jlong, jlong);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jlong, jlong);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jlong > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setLongValue(jlong) const;
          void setLongValues(const JArray< jlong > &) const;
          ::java::lang::String toString() const;
          static void unpack(const ::org::apache::lucene::util::BytesRef &, jint, const JArray< jlong > &);
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
        extern PyType_Def PY_TYPE_DEF(LongPoint);
        extern PyTypeObject *PY_TYPE(LongPoint);

        class t_LongPoint {
        public:
          PyObject_HEAD
          LongPoint object;
          static PyObject *wrap_Object(const LongPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
