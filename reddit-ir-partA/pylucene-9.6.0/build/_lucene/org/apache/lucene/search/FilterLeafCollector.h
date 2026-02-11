#ifndef org_apache_lucene_search_FilterLeafCollector_H
#define org_apache_lucene_search_FilterLeafCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class Scorable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FilterLeafCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_64c3e4a170de3fe1,
            mid_collect_da425451c8de636b,
            mid_setScorer_dd6a8586263881d1,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafCollector(const FilterLeafCollector& obj) : ::java::lang::Object(obj) {}

          FilterLeafCollector(const ::org::apache::lucene::search::LeafCollector &);

          void collect(jint) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterLeafCollector);
        extern PyTypeObject *PY_TYPE(FilterLeafCollector);

        class t_FilterLeafCollector {
        public:
          PyObject_HEAD
          FilterLeafCollector object;
          static PyObject *wrap_Object(const FilterLeafCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
