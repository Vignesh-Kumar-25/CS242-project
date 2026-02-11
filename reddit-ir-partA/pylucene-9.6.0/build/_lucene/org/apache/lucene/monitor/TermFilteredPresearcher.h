#ifndef org_apache_lucene_monitor_TermFilteredPresearcher_H
#define org_apache_lucene_monitor_TermFilteredPresearcher_H

#include "org/apache/lucene/monitor/Presearcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
      namespace monitor {
        class TermWeightor;
        class CustomQueryHandler;
      }
      namespace document {
        class Document;
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Map;
    namespace function {
      class BiPredicate;
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
      namespace monitor {

        class TermFilteredPresearcher : public ::org::apache::lucene::monitor::Presearcher {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_96555eb1f019bf10,
            mid_buildQuery_5ef659b4fdad797b,
            mid_indexQuery_32fb6907bac60dbb,
            mid_collectTerms_158c6a0e6f9c2177,
            mid_getQueryBuilder_f1b0460863d219b3,
            mid_buildQueryDocument_807297571e7e8aa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermFilteredPresearcher(jobject obj) : ::org::apache::lucene::monitor::Presearcher(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermFilteredPresearcher(const TermFilteredPresearcher& obj) : ::org::apache::lucene::monitor::Presearcher(obj) {}

          static ::org::apache::lucene::monitor::TermWeightor *DEFAULT_WEIGHTOR;

          TermFilteredPresearcher();
          TermFilteredPresearcher(const ::org::apache::lucene::monitor::TermWeightor &, const ::java::util::List &, const ::java::util::Set &);

          ::org::apache::lucene::search::Query buildQuery(const ::org::apache::lucene::index::LeafReader &, const ::java::util::function::BiPredicate &) const;
          ::org::apache::lucene::document::Document indexQuery(const ::org::apache::lucene::search::Query &, const ::java::util::Map &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermFilteredPresearcher);
        extern PyTypeObject *PY_TYPE(TermFilteredPresearcher);

        class t_TermFilteredPresearcher {
        public:
          PyObject_HEAD
          TermFilteredPresearcher object;
          static PyObject *wrap_Object(const TermFilteredPresearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
