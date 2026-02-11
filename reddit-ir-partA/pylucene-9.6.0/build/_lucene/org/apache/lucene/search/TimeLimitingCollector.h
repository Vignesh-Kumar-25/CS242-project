#ifndef org_apache_lucene_search_TimeLimitingCollector_H
#define org_apache_lucene_search_TimeLimitingCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
      }
      namespace search {
        class LeafCollector;
        class TimeLimitingCollector$TimerThread;
        class Collector;
        class ScoreMode;
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

        class TimeLimitingCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_084dd9e3ba876acc,
            mid_getGlobalCounter_21db1181a3b74a6d,
            mid_getGlobalTimerThread_c4a6f50eb1f15326,
            mid_getLeafCollector_dcdb54a62a154134,
            mid_isGreedy_ee8b0a5fa521ddac,
            mid_scoreMode_2c1f1f28428089a8,
            mid_setBaseline_3353d9f14bbfd91a,
            mid_setBaseline_db2028ac45cd5b77,
            mid_setCollector_95d7d798698de361,
            mid_setGreedy_4f96af910856b303,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeLimitingCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeLimitingCollector(const TimeLimitingCollector& obj) : ::java::lang::Object(obj) {}

          TimeLimitingCollector(const ::org::apache::lucene::search::Collector &, const ::org::apache::lucene::util::Counter &, jlong);

          static ::org::apache::lucene::util::Counter getGlobalCounter();
          static ::org::apache::lucene::search::TimeLimitingCollector$TimerThread getGlobalTimerThread();
          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jboolean isGreedy() const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setBaseline() const;
          void setBaseline(jlong) const;
          void setCollector(const ::org::apache::lucene::search::Collector &) const;
          void setGreedy(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(TimeLimitingCollector);
        extern PyTypeObject *PY_TYPE(TimeLimitingCollector);

        class t_TimeLimitingCollector {
        public:
          PyObject_HEAD
          TimeLimitingCollector object;
          static PyObject *wrap_Object(const TimeLimitingCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
