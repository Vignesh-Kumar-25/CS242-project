#ifndef org_apache_lucene_document_FloatRange_H
#define org_apache_lucene_document_FloatRange_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
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

        class FloatRange : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_f59662f130d864b5,
            mid_getMax_cc3c9b7e666e88d5,
            mid_getMin_cc3c9b7e666e88d5,
            mid_newContainsQuery_a710a89334b25899,
            mid_newCrossesQuery_a710a89334b25899,
            mid_newIntersectsQuery_a710a89334b25899,
            mid_newWithinQuery_a710a89334b25899,
            mid_setRangeValues_94184bf4326c2ecb,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatRange(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatRange(const FloatRange& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          FloatRange(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);

          jfloat getMax(jint) const;
          jfloat getMin(jint) const;
          static ::org::apache::lucene::search::Query newContainsQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newCrossesQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newIntersectsQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newWithinQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
          void setRangeValues(const JArray< jfloat > &, const JArray< jfloat > &) const;
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
        extern PyType_Def PY_TYPE_DEF(FloatRange);
        extern PyTypeObject *PY_TYPE(FloatRange);

        class t_FloatRange {
        public:
          PyObject_HEAD
          FloatRange object;
          static PyObject *wrap_Object(const FloatRange&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
