#ifndef org_apache_lucene_sandbox_document_HalfFloatPoint_H
#define org_apache_lucene_sandbox_document_HalfFloatPoint_H

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
      namespace sandbox {
        namespace document {

          class HalfFloatPoint : public ::org::apache::lucene::document::Field {
           public:
            enum {
              mid_init$_553eaf24cedf394c,
              mid_decodeDimension_f8397f181c372ae3,
              mid_encodeDimension_56eabb7534c23fc4,
              mid_halfFloatToSortableShort_12c80473347f7f31,
              mid_newExactQuery_6cd86f896f53df26,
              mid_newRangeQuery_a710a89334b25899,
              mid_newRangeQuery_ed1a38e9a35ea9dc,
              mid_newSetQuery_99bc7b264db6a12f,
              mid_newSetQuery_4601927fe15c5fcd,
              mid_nextDown_0d6098a24f544e47,
              mid_nextUp_0d6098a24f544e47,
              mid_numericValue_72def02dd614d827,
              mid_setBytesValue_46caeaebccf31ffe,
              mid_setFloatValue_354c036766ff84b4,
              mid_setFloatValues_67ba706c3e390a2e,
              mid_sortableShortToHalfFloat_3e721db3ed6dbf90,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HalfFloatPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HalfFloatPoint(const HalfFloatPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

            static jint BYTES;

            HalfFloatPoint(const ::java::lang::String &, const JArray< jfloat > &);

            static jfloat decodeDimension(const JArray< jbyte > &, jint);
            static void encodeDimension(jfloat, const JArray< jbyte > &, jint);
            static jshort halfFloatToSortableShort(jfloat);
            static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jfloat);
            static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
            static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jfloat, jfloat);
            static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jfloat > &);
            static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
            static jfloat nextDown(jfloat);
            static jfloat nextUp(jfloat);
            ::java::lang::Number numericValue() const;
            void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
            void setFloatValue(jfloat) const;
            void setFloatValues(const JArray< jfloat > &) const;
            static jfloat sortableShortToHalfFloat(jshort);
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace document {
          extern PyType_Def PY_TYPE_DEF(HalfFloatPoint);
          extern PyTypeObject *PY_TYPE(HalfFloatPoint);

          class t_HalfFloatPoint {
          public:
            PyObject_HEAD
            HalfFloatPoint object;
            static PyObject *wrap_Object(const HalfFloatPoint&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
