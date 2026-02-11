#ifndef org_apache_lucene_search_TotalHitCountCollector_H
#define org_apache_lucene_search_TotalHitCountCollector_H

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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TotalHitCountCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_getLeafCollector_dcdb54a62a154134,
            mid_getTotalHits_15aa3d485e96b665,
            mid_scoreMode_2c1f1f28428089a8,
            mid_setWeight_edbfbb6c118bad9f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHitCountCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHitCountCollector(const TotalHitCountCollector& obj) : ::java::lang::Object(obj) {}

          TotalHitCountCollector();

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jint getTotalHits() const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setWeight(const ::org::apache::lucene::search::Weight &) const;
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
        extern PyType_Def PY_TYPE_DEF(TotalHitCountCollector);
        extern PyTypeObject *PY_TYPE(TotalHitCountCollector);

        class t_TotalHitCountCollector {
        public:
          PyObject_HEAD
          TotalHitCountCollector object;
          static PyObject *wrap_Object(const TotalHitCountCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
