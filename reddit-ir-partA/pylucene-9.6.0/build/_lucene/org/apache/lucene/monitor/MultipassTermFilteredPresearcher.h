#ifndef org_apache_lucene_monitor_MultipassTermFilteredPresearcher_H
#define org_apache_lucene_monitor_MultipassTermFilteredPresearcher_H

#include "org/apache/lucene/monitor/TermFilteredPresearcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class QueryTree;
        class TermWeightor;
        class CustomQueryHandler;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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
      namespace monitor {

        class MultipassTermFilteredPresearcher : public ::org::apache::lucene::monitor::TermFilteredPresearcher {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_init$_b7ad2713cf385539,
            mid_buildQueryDocument_807297571e7e8aa3,
            mid_getQueryBuilder_f1b0460863d219b3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultipassTermFilteredPresearcher(jobject obj) : ::org::apache::lucene::monitor::TermFilteredPresearcher(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultipassTermFilteredPresearcher(const MultipassTermFilteredPresearcher& obj) : ::org::apache::lucene::monitor::TermFilteredPresearcher(obj) {}

          MultipassTermFilteredPresearcher(jint);
          MultipassTermFilteredPresearcher(jint, jfloat, const ::org::apache::lucene::monitor::TermWeightor &, const ::java::util::List &, const ::java::util::Set &);

          ::org::apache::lucene::document::Document buildQueryDocument(const ::org::apache::lucene::monitor::QueryTree &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultipassTermFilteredPresearcher);
        extern PyTypeObject *PY_TYPE(MultipassTermFilteredPresearcher);

        class t_MultipassTermFilteredPresearcher {
        public:
          PyObject_HEAD
          MultipassTermFilteredPresearcher object;
          static PyObject *wrap_Object(const MultipassTermFilteredPresearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
