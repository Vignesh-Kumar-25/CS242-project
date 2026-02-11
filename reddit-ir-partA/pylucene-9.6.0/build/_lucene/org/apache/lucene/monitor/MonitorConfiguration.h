#ifndef org_apache_lucene_monitor_MonitorConfiguration_H
#define org_apache_lucene_monitor_MonitorConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
      }
      namespace util {
        class IOSupplier;
      }
      namespace monitor {
        class MonitorConfiguration;
        class QueryDecomposer;
        class MonitorQuerySerializer;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace concurrent {
      class TimeUnit;
    }
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Boolean;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class MonitorConfiguration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_buildIndexWriter_bb195f528cb09028,
            mid_getDirectoryProvider_e21e25214fffd0c4,
            mid_getPurgeFrequency_058f5911dcf5d8a4,
            mid_getPurgeFrequencyUnits_9e87adc32584109d,
            mid_getQueryDecomposer_7e3f7c599b77218d,
            mid_getQuerySerializer_a28574f81428ee24,
            mid_getQueryUpdateBufferSize_15aa3d485e96b665,
            mid_isReadOnly_ee8b0a5fa521ddac,
            mid_setDirectoryProvider_3ccceb360bb3e77d,
            mid_setDirectoryProvider_01b6c7669be75f5b,
            mid_setIndexPath_6b1d0448220e1073,
            mid_setPurgeFrequency_33d5cb8ab1bcf957,
            mid_setQueryDecomposer_1df572c35d9fe3bd,
            mid_setQueryUpdateBufferSize_a68ff982c82efbc5,
            mid_getIndexWriterConfig_2f61aef459892c29,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MonitorConfiguration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MonitorConfiguration(const MonitorConfiguration& obj) : ::java::lang::Object(obj) {}

          MonitorConfiguration();

          ::org::apache::lucene::index::IndexWriter buildIndexWriter() const;
          ::org::apache::lucene::util::IOSupplier getDirectoryProvider() const;
          jlong getPurgeFrequency() const;
          ::java::util::concurrent::TimeUnit getPurgeFrequencyUnits() const;
          ::org::apache::lucene::monitor::QueryDecomposer getQueryDecomposer() const;
          ::org::apache::lucene::monitor::MonitorQuerySerializer getQuerySerializer() const;
          jint getQueryUpdateBufferSize() const;
          jboolean isReadOnly() const;
          MonitorConfiguration setDirectoryProvider(const ::org::apache::lucene::util::IOSupplier &, const ::org::apache::lucene::monitor::MonitorQuerySerializer &) const;
          MonitorConfiguration setDirectoryProvider(const ::org::apache::lucene::util::IOSupplier &, const ::org::apache::lucene::monitor::MonitorQuerySerializer &, const ::java::lang::Boolean &) const;
          MonitorConfiguration setIndexPath(const ::java::nio::file::Path &, const ::org::apache::lucene::monitor::MonitorQuerySerializer &) const;
          MonitorConfiguration setPurgeFrequency(jlong, const ::java::util::concurrent::TimeUnit &) const;
          MonitorConfiguration setQueryDecomposer(const ::org::apache::lucene::monitor::QueryDecomposer &) const;
          MonitorConfiguration setQueryUpdateBufferSize(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(MonitorConfiguration);
        extern PyTypeObject *PY_TYPE(MonitorConfiguration);

        class t_MonitorConfiguration {
        public:
          PyObject_HEAD
          MonitorConfiguration object;
          static PyObject *wrap_Object(const MonitorConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
