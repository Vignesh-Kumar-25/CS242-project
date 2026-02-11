#ifndef org_apache_lucene_search_MultiCollector_H
#define org_apache_lucene_search_MultiCollector_H

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
  namespace lang {
    class Iterable;
    class Class;
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

        class MultiCollector : public ::java::lang::Object {
         public:
          enum {
            mid_getCollectors_029d6bccb259414b,
            mid_getLeafCollector_dcdb54a62a154134,
            mid_scoreMode_2c1f1f28428089a8,
            mid_setWeight_edbfbb6c118bad9f,
            mid_wrap_15a7c1bfd844367e,
            mid_wrap_b97e28257e7b5415,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiCollector(const MultiCollector& obj) : ::java::lang::Object(obj) {}

          JArray< ::org::apache::lucene::search::Collector > getCollectors() const;
          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setWeight(const ::org::apache::lucene::search::Weight &) const;
          static ::org::apache::lucene::search::Collector wrap(const JArray< ::org::apache::lucene::search::Collector > &);
          static ::org::apache::lucene::search::Collector wrap(const ::java::lang::Iterable &);
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
        extern PyType_Def PY_TYPE_DEF(MultiCollector);
        extern PyTypeObject *PY_TYPE(MultiCollector);

        class t_MultiCollector {
        public:
          PyObject_HEAD
          MultiCollector object;
          static PyObject *wrap_Object(const MultiCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
