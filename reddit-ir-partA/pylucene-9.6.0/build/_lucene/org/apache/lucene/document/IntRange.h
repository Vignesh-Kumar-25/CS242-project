#ifndef org_apache_lucene_document_IntRange_H
#define org_apache_lucene_document_IntRange_H

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

        class IntRange : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_32f5e712e579ddaf,
            mid_getMax_58b165b57740feff,
            mid_getMin_58b165b57740feff,
            mid_newContainsQuery_ec922d3ee8d96819,
            mid_newCrossesQuery_ec922d3ee8d96819,
            mid_newIntersectsQuery_ec922d3ee8d96819,
            mid_newWithinQuery_ec922d3ee8d96819,
            mid_setRangeValues_4936f1be3a600dae,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntRange(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntRange(const IntRange& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          IntRange(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);

          jint getMax(jint) const;
          jint getMin(jint) const;
          static ::org::apache::lucene::search::Query newContainsQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newCrossesQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newIntersectsQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newWithinQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          void setRangeValues(const JArray< jint > &, const JArray< jint > &) const;
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
        extern PyType_Def PY_TYPE_DEF(IntRange);
        extern PyTypeObject *PY_TYPE(IntRange);

        class t_IntRange {
        public:
          PyObject_HEAD
          IntRange object;
          static PyObject *wrap_Object(const IntRange&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
