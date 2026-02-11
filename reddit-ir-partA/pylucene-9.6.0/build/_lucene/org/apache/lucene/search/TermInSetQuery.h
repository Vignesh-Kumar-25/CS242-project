#ifndef org_apache_lucene_search_TermInSetQuery_H
#define org_apache_lucene_search_TermInSetQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
        class QueryVisitor;
      }
      namespace index {
        class PrefixCodedTerms;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermInSetQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_7dd1337ac26867a9,
            mid_init$_60021e4638516d3e,
            mid_init$_ae4fcee1ce28c9af,
            mid_init$_20ee987be9f16696,
            mid_equals_6084f78e09b6c0c3,
            mid_getChildResources_b47b7eaa8124fb60,
            mid_getTermData_4566c15c936cfa62,
            mid_getTermsCount_058f5911dcf5d8a4,
            mid_hashCode_15aa3d485e96b665,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            mid_getTermsEnum_7a78de2b3c524392,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermInSetQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermInSetQuery(const TermInSetQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          TermInSetQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          TermInSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          TermInSetQuery(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &, const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          TermInSetQuery(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &, const ::java::lang::String &, const ::java::util::Collection &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Collection getChildResources() const;
          ::org::apache::lucene::index::PrefixCodedTerms getTermData() const;
          jlong getTermsCount() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TermInSetQuery);
        extern PyTypeObject *PY_TYPE(TermInSetQuery);

        class t_TermInSetQuery {
        public:
          PyObject_HEAD
          TermInSetQuery object;
          static PyObject *wrap_Object(const TermInSetQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
