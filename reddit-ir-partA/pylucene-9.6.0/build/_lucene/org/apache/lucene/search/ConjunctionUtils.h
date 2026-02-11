#ifndef org_apache_lucene_search_ConjunctionUtils_H
#define org_apache_lucene_search_ConjunctionUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
        class TwoPhaseIterator;
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ConjunctionUtils : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_addIterator_f5fc67cf96e50d66,
            mid_addTwoPhaseIterator_d2ada405c3068c25,
            mid_createConjunction_38ba426fd2848bb6,
            mid_intersectIterators_293962b8b1379654,
            mid_intersectScorers_52d85154c8cf2676,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConjunctionUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConjunctionUtils(const ConjunctionUtils& obj) : ::java::lang::Object(obj) {}

          ConjunctionUtils();

          static void addIterator(const ::org::apache::lucene::search::DocIdSetIterator &, const ::java::util::List &, const ::java::util::List &);
          static void addTwoPhaseIterator(const ::org::apache::lucene::search::TwoPhaseIterator &, const ::java::util::List &, const ::java::util::List &);
          static ::org::apache::lucene::search::DocIdSetIterator createConjunction(const ::java::util::List &, const ::java::util::List &);
          static ::org::apache::lucene::search::DocIdSetIterator intersectIterators(const ::java::util::List &);
          static ::org::apache::lucene::search::DocIdSetIterator intersectScorers(const ::java::util::Collection &);
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
        extern PyType_Def PY_TYPE_DEF(ConjunctionUtils);
        extern PyTypeObject *PY_TYPE(ConjunctionUtils);

        class t_ConjunctionUtils {
        public:
          PyObject_HEAD
          ConjunctionUtils object;
          static PyObject *wrap_Object(const ConjunctionUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
