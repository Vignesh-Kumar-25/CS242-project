#ifndef org_apache_lucene_search_PrefixQuery_H
#define org_apache_lucene_search_PrefixQuery_H

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
        class MultiTermQuery$RewriteMethod;
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

        class PrefixQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_62e0fe03f75a3264,
            mid_init$_a9a9331bd55e9d09,
            mid_equals_6084f78e09b6c0c3,
            mid_getPrefix_5b4d4f9d26b4f48d,
            mid_hashCode_15aa3d485e96b665,
            mid_toAutomaton_f2dc0f3512d7ddee,
            mid_toString_04612c8360f09496,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixQuery(const PrefixQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          PrefixQuery(const ::org::apache::lucene::index::Term &);
          PrefixQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::Term getPrefix() const;
          jint hashCode() const;
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::BytesRef &);
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
        extern PyType_Def PY_TYPE_DEF(PrefixQuery);
        extern PyTypeObject *PY_TYPE(PrefixQuery);

        class t_PrefixQuery {
        public:
          PyObject_HEAD
          PrefixQuery object;
          static PyObject *wrap_Object(const PrefixQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
