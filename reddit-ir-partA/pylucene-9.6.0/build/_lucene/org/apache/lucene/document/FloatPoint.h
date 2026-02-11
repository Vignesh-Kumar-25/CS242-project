#ifndef org_apache_lucene_document_FloatPoint_H
#define org_apache_lucene_document_FloatPoint_H

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
    class Float;
    class Number;
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

        class FloatPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_553eaf24cedf394c,
            mid_decodeDimension_f8397f181c372ae3,
            mid_encodeDimension_56eabb7534c23fc4,
            mid_newExactQuery_6cd86f896f53df26,
            mid_newRangeQuery_a710a89334b25899,
            mid_newRangeQuery_ed1a38e9a35ea9dc,
            mid_newSetQuery_99bc7b264db6a12f,
            mid_newSetQuery_4601927fe15c5fcd,
            mid_nextDown_0d6098a24f544e47,
            mid_nextUp_0d6098a24f544e47,
            mid_numericValue_72def02dd614d827,
            mid_pack_410889cf5c35ffc8,
            mid_setBytesValue_46caeaebccf31ffe,
            mid_setFloatValue_354c036766ff84b4,
            mid_setFloatValues_67ba706c3e390a2e,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatPoint(const FloatPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          FloatPoint(const ::java::lang::String &, const JArray< jfloat > &);

          static jfloat decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jfloat, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jfloat);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          static jfloat nextDown(jfloat);
          static jfloat nextUp(jfloat);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jfloat > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setFloatValue(jfloat) const;
          void setFloatValues(const JArray< jfloat > &) const;
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
        extern PyType_Def PY_TYPE_DEF(FloatPoint);
        extern PyTypeObject *PY_TYPE(FloatPoint);

        class t_FloatPoint {
        public:
          PyObject_HEAD
          FloatPoint object;
          static PyObject *wrap_Object(const FloatPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
