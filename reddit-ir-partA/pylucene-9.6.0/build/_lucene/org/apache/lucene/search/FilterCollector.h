#ifndef org_apache_lucene_search_FilterCollector_H
#define org_apache_lucene_search_FilterCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class Collector;
        class ScoreMode;
        class Weight;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
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
      namespace search {

        class FilterCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_95d7d798698de361,
            mid_getLeafCollector_dcdb54a62a154134,
            mid_scoreMode_2c1f1f28428089a8,
            mid_setWeight_edbfbb6c118bad9f,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterCollector(const FilterCollector& obj) : ::java::lang::Object(obj) {}

          FilterCollector(const ::org::apache::lucene::search::Collector &);

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setWeight(const ::org::apache::lucene::search::Weight &) const;
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
        extern PyType_Def PY_TYPE_DEF(FilterCollector);
        extern PyTypeObject *PY_TYPE(FilterCollector);

        class t_FilterCollector {
        public:
          PyObject_HEAD
          FilterCollector object;
          static PyObject *wrap_Object(const FilterCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
