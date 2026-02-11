#ifndef org_apache_lucene_monitor_Presearcher_H
#define org_apache_lucene_monitor_Presearcher_H

#include "java/lang/Object.h"

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
        class Presearcher;
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
    class Map;
    namespace function {
      class BiPredicate;
    }
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

        class Presearcher : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_buildQuery_5ef659b4fdad797b,
            mid_indexQuery_32fb6907bac60dbb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Presearcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Presearcher(const Presearcher& obj) : ::java::lang::Object(obj) {}

          static Presearcher *NO_FILTERING;

          Presearcher();

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
        extern PyType_Def PY_TYPE_DEF(Presearcher);
        extern PyTypeObject *PY_TYPE(Presearcher);

        class t_Presearcher {
        public:
          PyObject_HEAD
          Presearcher object;
          static PyObject *wrap_Object(const Presearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
