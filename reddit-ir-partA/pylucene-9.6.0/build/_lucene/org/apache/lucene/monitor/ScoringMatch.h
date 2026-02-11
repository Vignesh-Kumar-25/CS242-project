#ifndef org_apache_lucene_monitor_ScoringMatch_H
#define org_apache_lucene_monitor_ScoringMatch_H

#include "org/apache/lucene/monitor/QueryMatch.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity;
        }
      }
      namespace monitor {
        class MatcherFactory;
        class ScoringMatch;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class ScoringMatch : public ::org::apache::lucene::monitor::QueryMatch {
         public:
          enum {
            mid_equals_6084f78e09b6c0c3,
            mid_getScore_15cd8574741b1394,
            mid_hashCode_15aa3d485e96b665,
            mid_matchWithSimilarity_8e313d20786cb2dd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoringMatch(jobject obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScoringMatch(const ScoringMatch& obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {}

          static ::org::apache::lucene::monitor::MatcherFactory *DEFAULT_MATCHER;

          jboolean equals(const ::java::lang::Object &) const;
          jfloat getScore() const;
          jint hashCode() const;
          static ::org::apache::lucene::monitor::MatcherFactory matchWithSimilarity(const ::org::apache::lucene::search::similarities::Similarity &);
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
        extern PyType_Def PY_TYPE_DEF(ScoringMatch);
        extern PyTypeObject *PY_TYPE(ScoringMatch);

        class t_ScoringMatch {
        public:
          PyObject_HEAD
          ScoringMatch object;
          static PyObject *wrap_Object(const ScoringMatch&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
