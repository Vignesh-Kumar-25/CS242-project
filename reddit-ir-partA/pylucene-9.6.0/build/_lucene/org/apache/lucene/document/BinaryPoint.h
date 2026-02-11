#ifndef org_apache_lucene_document_BinaryPoint_H
#define org_apache_lucene_document_BinaryPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace index {
        class IndexableFieldType;
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

        class BinaryPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_8a093ded97fa7a08,
            mid_init$_39ca4da871baf020,
            mid_newExactQuery_77b49e4597dd1928,
            mid_newRangeQuery_1dfa5160f9fa582b,
            mid_newRangeQuery_663f2e84eaae90ff,
            mid_newSetQuery_695737bf4a8bae94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinaryPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinaryPoint(const BinaryPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          BinaryPoint(const ::java::lang::String &, const JArray< JArray< jbyte > > &);
          BinaryPoint(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::index::IndexableFieldType &);

          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, const JArray< jbyte > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jbyte > &, const JArray< jbyte > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< JArray< jbyte > > &, const JArray< JArray< jbyte > > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< JArray< jbyte > > &);
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
        extern PyType_Def PY_TYPE_DEF(BinaryPoint);
        extern PyTypeObject *PY_TYPE(BinaryPoint);

        class t_BinaryPoint {
        public:
          PyObject_HEAD
          BinaryPoint object;
          static PyObject *wrap_Object(const BinaryPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
