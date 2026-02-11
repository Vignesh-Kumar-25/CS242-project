#ifndef org_apache_lucene_monitor_HighlightsMatch_H
#define org_apache_lucene_monitor_HighlightsMatch_H

#include "org/apache/lucene/monitor/QueryMatch.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class HighlightsMatch$Hit;
        class MatcherFactory;
        class HighlightsMatch;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class HighlightsMatch : public ::org::apache::lucene::monitor::QueryMatch {
         public:
          enum {
            mid_equals_6084f78e09b6c0c3,
            mid_getFields_9a625d56b67c7390,
            mid_getHitCount_15aa3d485e96b665,
            mid_getHits_19f838df22aacf85,
            mid_getHits_b984b54b45e5f66d,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighlightsMatch(jobject obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighlightsMatch(const HighlightsMatch& obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {}

          static ::org::apache::lucene::monitor::MatcherFactory *MATCHER;

          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Set getFields() const;
          jint getHitCount() const;
          ::java::util::Map getHits() const;
          ::java::util::Collection getHits(const ::java::lang::String &) const;
          jint hashCode() const;
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
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(HighlightsMatch);
        extern PyTypeObject *PY_TYPE(HighlightsMatch);

        class t_HighlightsMatch {
        public:
          PyObject_HEAD
          HighlightsMatch object;
          static PyObject *wrap_Object(const HighlightsMatch&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
