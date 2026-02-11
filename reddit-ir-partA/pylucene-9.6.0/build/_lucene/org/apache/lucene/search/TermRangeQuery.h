#ifndef org_apache_lucene_search_TermRangeQuery_H
#define org_apache_lucene_search_TermRangeQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
        class TermRangeQuery;
        class MultiTermQuery$RewriteMethod;
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

        class TermRangeQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_6e81468b0c6031d9,
            mid_init$_810895eda5cf752d,
            mid_equals_6084f78e09b6c0c3,
            mid_getLowerTerm_e6961a1ebae5a29a,
            mid_getUpperTerm_e6961a1ebae5a29a,
            mid_hashCode_15aa3d485e96b665,
            mid_includesLower_ee8b0a5fa521ddac,
            mid_includesUpper_ee8b0a5fa521ddac,
            mid_newStringRange_5020afe847a3173e,
            mid_newStringRange_f483fda4ad00aab3,
            mid_toAutomaton_865b3a7beb3e38b2,
            mid_toString_04612c8360f09496,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermRangeQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermRangeQuery(const TermRangeQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          TermRangeQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
          TermRangeQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRef getLowerTerm() const;
          ::org::apache::lucene::util::BytesRef getUpperTerm() const;
          jint hashCode() const;
          jboolean includesLower() const;
          jboolean includesUpper() const;
          static TermRangeQuery newStringRange(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);
          static TermRangeQuery newStringRange(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
          ::java::lang::String toString(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermRangeQuery);
        extern PyTypeObject *PY_TYPE(TermRangeQuery);

        class t_TermRangeQuery {
        public:
          PyObject_HEAD
          TermRangeQuery object;
          static PyObject *wrap_Object(const TermRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
