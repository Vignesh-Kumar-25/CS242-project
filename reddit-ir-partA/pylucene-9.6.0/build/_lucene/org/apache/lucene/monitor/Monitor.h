#ifndef org_apache_lucene_monitor_Monitor_H
#define org_apache_lucene_monitor_Monitor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
  namespace util {
    class List;
    class Set;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MatcherFactory;
        class MatchingQueries;
        class MultiMatchingQueries;
        class Presearcher;
        class MonitorQuery;
        class PresearcherMatches;
        class MonitorUpdateListener;
        class Monitor$QueryCacheStats;
        class MonitorConfiguration;
      }
      namespace document {
        class Document;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class Monitor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_cea12a5ff05f6816,
            mid_init$_5bab4e7f23c6a966,
            mid_init$_a50ccb4fa4f2e6ef,
            mid_init$_f0626d0171c41053,
            mid_addQueryIndexUpdateListener_a3b39383d0273a7f,
            mid_clear_3353d9f14bbfd91a,
            mid_close_3353d9f14bbfd91a,
            mid_debug_0683498e597a3993,
            mid_debug_9e90f670857e29b1,
            mid_deleteById_a43828b01cd19e9d,
            mid_deleteById_1a2e28000748bc88,
            mid_getDisjunctCount_15aa3d485e96b665,
            mid_getQuery_13a3b68fa0cf75de,
            mid_getQueryCacheStats_60ea5a4a0b95cbd9,
            mid_getQueryCount_15aa3d485e96b665,
            mid_getQueryIds_9a625d56b67c7390,
            mid_match_bab3b00c171887e0,
            mid_match_72cfb3149492cd38,
            mid_purgeCache_3353d9f14bbfd91a,
            mid_register_ffb87ad40e745a6a,
            mid_register_e24ade5f219c5841,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Monitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Monitor(const Monitor& obj) : ::java::lang::Object(obj) {}

          Monitor(const ::org::apache::lucene::analysis::Analyzer &);
          Monitor(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::monitor::MonitorConfiguration &);
          Monitor(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::monitor::Presearcher &);
          Monitor(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::monitor::Presearcher &, const ::org::apache::lucene::monitor::MonitorConfiguration &);

          void addQueryIndexUpdateListener(const ::org::apache::lucene::monitor::MonitorUpdateListener &) const;
          void clear() const;
          void close() const;
          ::org::apache::lucene::monitor::PresearcherMatches debug(const JArray< ::org::apache::lucene::document::Document > &, const ::org::apache::lucene::monitor::MatcherFactory &) const;
          ::org::apache::lucene::monitor::PresearcherMatches debug(const ::org::apache::lucene::document::Document &, const ::org::apache::lucene::monitor::MatcherFactory &) const;
          void deleteById(const JArray< ::java::lang::String > &) const;
          void deleteById(const ::java::util::List &) const;
          jint getDisjunctCount() const;
          ::org::apache::lucene::monitor::MonitorQuery getQuery(const ::java::lang::String &) const;
          ::org::apache::lucene::monitor::Monitor$QueryCacheStats getQueryCacheStats() const;
          jint getQueryCount() const;
          ::java::util::Set getQueryIds() const;
          ::org::apache::lucene::monitor::MultiMatchingQueries match(const JArray< ::org::apache::lucene::document::Document > &, const ::org::apache::lucene::monitor::MatcherFactory &) const;
          ::org::apache::lucene::monitor::MatchingQueries match(const ::org::apache::lucene::document::Document &, const ::org::apache::lucene::monitor::MatcherFactory &) const;
          void purgeCache() const;
          void register$(const JArray< ::org::apache::lucene::monitor::MonitorQuery > &) const;
          void register$(const ::java::lang::Iterable &) const;
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
        extern PyType_Def PY_TYPE_DEF(Monitor);
        extern PyTypeObject *PY_TYPE(Monitor);

        class t_Monitor {
        public:
          PyObject_HEAD
          Monitor object;
          static PyObject *wrap_Object(const Monitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
