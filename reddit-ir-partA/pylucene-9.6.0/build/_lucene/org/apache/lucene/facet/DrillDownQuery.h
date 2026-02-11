#ifndef org_apache_lucene_facet_DrillDownQuery_H
#define org_apache_lucene_facet_DrillDownQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig;
        class DrillDownQuery;
      }
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        class QueryVisitor;
      }
    }
  }
}
namespace java {
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
      namespace facet {

        class DrillDownQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_dbf2095435dbe954,
            mid_init$_3c88d70ad74ab19e,
            mid_add_2d46bc6535191d4b,
            mid_add_1ce1ca365b187703,
            mid_clone_04d3eb36c7dec686,
            mid_equals_6084f78e09b6c0c3,
            mid_getBaseQuery_0b32ec998a0c18fa,
            mid_getDrillDownQueries_eae805bb8c2ee5b1,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_7da87bae82c9c483,
            mid_term_479a88fbf8c1a3fc,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillDownQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillDownQuery(const DrillDownQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DrillDownQuery(const ::org::apache::lucene::facet::FacetsConfig &);
          DrillDownQuery(const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::search::Query &);

          void add(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::search::Query &) const;
          DrillDownQuery clone() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Query getBaseQuery() const;
          JArray< ::org::apache::lucene::search::Query > getDrillDownQueries() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          static ::org::apache::lucene::index::Term term(const ::java::lang::String &, const ::java::lang::String &, const JArray< ::java::lang::String > &);
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
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(DrillDownQuery);
        extern PyTypeObject *PY_TYPE(DrillDownQuery);

        class t_DrillDownQuery {
        public:
          PyObject_HEAD
          DrillDownQuery object;
          static PyObject *wrap_Object(const DrillDownQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
