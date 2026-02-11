#ifndef org_apache_lucene_search_RegexpQuery_H
#define org_apache_lucene_search_RegexpQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
      namespace util {
        namespace automaton {
          class AutomatonProvider;
        }
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class RegexpQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_62e0fe03f75a3264,
            mid_init$_e830ff4e97b1b350,
            mid_init$_ed002e790c493953,
            mid_init$_1868aa2929a4116c,
            mid_init$_33b2ad941f285eb1,
            mid_init$_03648823a7b378fd,
            mid_getRegexp_5b4d4f9d26b4f48d,
            mid_toString_04612c8360f09496,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RegexpQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RegexpQuery(const RegexpQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          static ::org::apache::lucene::util::automaton::AutomatonProvider *DEFAULT_PROVIDER;

          RegexpQuery(const ::org::apache::lucene::index::Term &);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint, const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          ::org::apache::lucene::index::Term getRegexp() const;
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
        extern PyType_Def PY_TYPE_DEF(RegexpQuery);
        extern PyTypeObject *PY_TYPE(RegexpQuery);

        class t_RegexpQuery {
        public:
          PyObject_HEAD
          RegexpQuery object;
          static PyObject *wrap_Object(const RegexpQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
