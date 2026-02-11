#ifndef org_apache_lucene_search_QueryVisitor_H
#define org_apache_lucene_search_QueryVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause$Occur;
        class QueryVisitor;
      }
      namespace util {
        namespace automaton {
          class ByteRunAutomaton;
        }
      }
      namespace index {
        class Term;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class QueryVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_acceptField_77e0b5c3eb1962ba,
            mid_consumeTerms_2204446efb8cb006,
            mid_consumeTermsMatching_214cf0c94d3df3d2,
            mid_getSubVisitor_4f8a3d2c7f6039b0,
            mid_termCollector_90b72e7a6f6624e7,
            mid_visitLeaf_60638ee06ec0416b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryVisitor(const QueryVisitor& obj) : ::java::lang::Object(obj) {}

          static QueryVisitor *EMPTY_VISITOR;

          QueryVisitor();

          jboolean acceptField(const ::java::lang::String &) const;
          void consumeTerms(const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::index::Term > &) const;
          void consumeTermsMatching(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::function::Supplier &) const;
          QueryVisitor getSubVisitor(const ::org::apache::lucene::search::BooleanClause$Occur &, const ::org::apache::lucene::search::Query &) const;
          static QueryVisitor termCollector(const ::java::util::Set &);
          void visitLeaf(const ::org::apache::lucene::search::Query &) const;
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
        extern PyType_Def PY_TYPE_DEF(QueryVisitor);
        extern PyTypeObject *PY_TYPE(QueryVisitor);

        class t_QueryVisitor {
        public:
          PyObject_HEAD
          QueryVisitor object;
          static PyObject *wrap_Object(const QueryVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
