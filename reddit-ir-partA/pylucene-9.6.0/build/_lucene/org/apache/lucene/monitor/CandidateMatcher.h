#ifndef org_apache_lucene_monitor_CandidateMatcher_H
#define org_apache_lucene_monitor_CandidateMatcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class QueryMatch;
      }
      namespace search {
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class CandidateMatcher : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b9ae496b26a6e444,
            mid_resolve_6269257ab04b42a8,
            mid_matchQuery_3c3359796e813e7f,
            mid_addMatch_62467ded32e56001,
            mid_doFinish_3353d9f14bbfd91a,
            mid_copyMatches_25247cc526af8a5c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CandidateMatcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CandidateMatcher(const CandidateMatcher& obj) : ::java::lang::Object(obj) {}

          CandidateMatcher(const ::org::apache::lucene::search::IndexSearcher &);

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
        extern PyType_Def PY_TYPE_DEF(CandidateMatcher);
        extern PyTypeObject *PY_TYPE(CandidateMatcher);

        class t_CandidateMatcher {
        public:
          PyObject_HEAD
          CandidateMatcher object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CandidateMatcher *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CandidateMatcher&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CandidateMatcher&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
