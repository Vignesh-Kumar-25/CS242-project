#ifndef org_apache_lucene_document_DoublePoint_H
#define org_apache_lucene_document_DoublePoint_H

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
    class Double;
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

        class DoublePoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_b57e95ec4b563c23,
            mid_decodeDimension_35bdd754c40e27f2,
            mid_encodeDimension_e12ac9ccc4fe63d1,
            mid_newExactQuery_5c2cae85a49caada,
            mid_newRangeQuery_c9d8c62746785ff5,
            mid_newRangeQuery_b4f5479f03c55290,
            mid_newSetQuery_89da092abcf41451,
            mid_newSetQuery_4601927fe15c5fcd,
            mid_nextDown_7c88f981e0181669,
            mid_nextUp_7c88f981e0181669,
            mid_numericValue_72def02dd614d827,
            mid_pack_06d0d38415616f25,
            mid_setBytesValue_46caeaebccf31ffe,
            mid_setDoubleValue_c1f7206c104d501e,
            mid_setDoubleValues_35819246f67b1e9e,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoublePoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoublePoint(const DoublePoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          DoublePoint(const ::java::lang::String &, const JArray< jdouble > &);

          static jdouble decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jdouble, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jdouble);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          static jdouble nextDown(jdouble);
          static jdouble nextUp(jdouble);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jdouble > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setDoubleValues(const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(DoublePoint);
        extern PyTypeObject *PY_TYPE(DoublePoint);

        class t_DoublePoint {
        public:
          PyObject_HEAD
          DoublePoint object;
          static PyObject *wrap_Object(const DoublePoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
