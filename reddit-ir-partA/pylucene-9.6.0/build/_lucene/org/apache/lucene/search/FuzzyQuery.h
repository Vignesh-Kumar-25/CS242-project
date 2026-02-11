#ifndef org_apache_lucene_search_FuzzyQuery_H
#define org_apache_lucene_search_FuzzyQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiTermQuery$RewriteMethod;
        class QueryVisitor;
      }
      namespace index {
        class Term;
      }
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
      }
    }
  }
}
namespace java {
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

        class FuzzyQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_62e0fe03f75a3264,
            mid_init$_e830ff4e97b1b350,
            mid_init$_ed002e790c493953,
            mid_init$_5c6908c8f61f739f,
            mid_init$_e89c7650d59ef3f1,
            mid_defaultRewriteMethod_97d943a388dffe01,
            mid_equals_6084f78e09b6c0c3,
            mid_floatToEdits_20286e1d539d9b11,
            mid_getAutomata_d9e247b8ae35889a,
            mid_getFuzzyAutomaton_79b87cdba5b71253,
            mid_getMaxEdits_15aa3d485e96b665,
            mid_getPrefixLength_15aa3d485e96b665,
            mid_getTerm_5b4d4f9d26b4f48d,
            mid_getTranspositions_ee8b0a5fa521ddac,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            mid_getTermsEnum_7a78de2b3c524392,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FuzzyQuery(const FuzzyQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          static jint defaultMaxEdits;
          static jint defaultMaxExpansions;
          static jint defaultPrefixLength;
          static jboolean defaultTranspositions;

          FuzzyQuery(const ::org::apache::lucene::index::Term &);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint, jboolean);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint, jboolean, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod defaultRewriteMethod(jint);
          jboolean equals(const ::java::lang::Object &) const;
          static jint floatToEdits(jfloat, jint);
          ::org::apache::lucene::util::automaton::CompiledAutomaton getAutomata() const;
          static ::org::apache::lucene::util::automaton::CompiledAutomaton getFuzzyAutomaton(const ::java::lang::String &, jint, jint, jboolean);
          jint getMaxEdits() const;
          jint getPrefixLength() const;
          ::org::apache::lucene::index::Term getTerm() const;
          jboolean getTranspositions() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(FuzzyQuery);
        extern PyTypeObject *PY_TYPE(FuzzyQuery);

        class t_FuzzyQuery {
        public:
          PyObject_HEAD
          FuzzyQuery object;
          static PyObject *wrap_Object(const FuzzyQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
