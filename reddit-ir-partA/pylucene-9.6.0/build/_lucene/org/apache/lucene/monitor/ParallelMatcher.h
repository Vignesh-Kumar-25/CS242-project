#ifndef org_apache_lucene_monitor_ParallelMatcher_H
#define org_apache_lucene_monitor_ParallelMatcher_H

#include "org/apache/lucene/monitor/CandidateMatcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class QueryMatch;
        class MatcherFactory;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class ParallelMatcher : public ::org::apache::lucene::monitor::CandidateMatcher {
         public:
          enum {
            mid_factory_e6147519e5c66bd9,
            mid_factory_cf99f239d53d1b84,
            mid_resolve_6269257ab04b42a8,
            mid_matchQuery_3c3359796e813e7f,
            mid_doFinish_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParallelMatcher(jobject obj) : ::org::apache::lucene::monitor::CandidateMatcher(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParallelMatcher(const ParallelMatcher& obj) : ::org::apache::lucene::monitor::CandidateMatcher(obj) {}

          static ::org::apache::lucene::monitor::MatcherFactory factory(const ::java::util::concurrent::ExecutorService &, const ::org::apache::lucene::monitor::MatcherFactory &);
          static ::org::apache::lucene::monitor::MatcherFactory factory(const ::java::util::concurrent::ExecutorService &, const ::org::apache::lucene::monitor::MatcherFactory &, jint);
          ::org::apache::lucene::monitor::QueryMatch resolve(const ::org::apache::lucene::monitor::QueryMatch &, const ::org::apache::lucene::monitor::QueryMatch &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(ParallelMatcher);
        extern PyTypeObject *PY_TYPE(ParallelMatcher);

        class t_ParallelMatcher {
        public:
          PyObject_HEAD
          ParallelMatcher object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ParallelMatcher *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ParallelMatcher&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ParallelMatcher&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
