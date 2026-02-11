#ifndef org_apache_lucene_search_AutomatonQuery_H
#define org_apache_lucene_search_AutomatonQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
        class QueryVisitor;
      }
      namespace index {
        class Term;
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

        class AutomatonQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_28662d7d72b0d97a,
            mid_init$_c33ad6b260ebb44e,
            mid_init$_54595fb111ad1687,
            mid_init$_dd7f59bc44688dea,
            mid_equals_6084f78e09b6c0c3,
            mid_getAutomaton_944878750d69867f,
            mid_hashCode_15aa3d485e96b665,
            mid_isAutomatonBinary_ee8b0a5fa521ddac,
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

          explicit AutomatonQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AutomatonQuery(const AutomatonQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &);
          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &, jint);
          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &, jint, jboolean);
          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &, jint, jboolean, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
          jint hashCode() const;
          jboolean isAutomatonBinary() const;
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
        extern PyType_Def PY_TYPE_DEF(AutomatonQuery);
        extern PyTypeObject *PY_TYPE(AutomatonQuery);

        class t_AutomatonQuery {
        public:
          PyObject_HEAD
          AutomatonQuery object;
          static PyObject *wrap_Object(const AutomatonQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
