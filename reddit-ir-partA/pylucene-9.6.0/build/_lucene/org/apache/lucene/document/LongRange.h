#ifndef org_apache_lucene_document_LongRange_H
#define org_apache_lucene_document_LongRange_H

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

        class LongRange : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_447873db17363061,
            mid_getMax_70b2a956d0e32bc7,
            mid_getMin_70b2a956d0e32bc7,
            mid_newContainsQuery_d1fb9861ba8804b5,
            mid_newCrossesQuery_d1fb9861ba8804b5,
            mid_newIntersectsQuery_d1fb9861ba8804b5,
            mid_newWithinQuery_d1fb9861ba8804b5,
            mid_setRangeValues_b1238b74bb06f71f,
            mid_toString_dc633f13a47328a8,
            mid_verifyAndEncode_d15305c526b19985,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongRange(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongRange(const LongRange& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          LongRange(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);

          jlong getMax(jint) const;
          jlong getMin(jint) const;
          static ::org::apache::lucene::search::Query newContainsQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newCrossesQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newIntersectsQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newWithinQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          void setRangeValues(const JArray< jlong > &, const JArray< jlong > &) const;
          ::java::lang::String toString() const;
          static void verifyAndEncode(const JArray< jlong > &, const JArray< jlong > &, const JArray< jbyte > &);
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
        extern PyType_Def PY_TYPE_DEF(LongRange);
        extern PyTypeObject *PY_TYPE(LongRange);

        class t_LongRange {
        public:
          PyObject_HEAD
          LongRange object;
          static PyObject *wrap_Object(const LongRange&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
