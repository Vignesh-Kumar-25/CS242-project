#ifndef org_apache_lucene_sandbox_search_ProfilerCollector_H
#define org_apache_lucene_sandbox_search_ProfilerCollector_H

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
      namespace sandbox {
        namespace search {
          class ProfilerCollectorResult;
          class ProfilerCollector;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
      namespace sandbox {
        namespace search {

          class ProfilerCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5beb93939a45c355,
              mid_getLeafCollector_dcdb54a62a154134,
              mid_getName_dc633f13a47328a8,
              mid_getProfileResult_b2e4490575c57845,
              mid_getReason_dc633f13a47328a8,
              mid_getTime_058f5911dcf5d8a4,
              mid_scoreMode_2c1f1f28428089a8,
              mid_setWeight_edbfbb6c118bad9f,
              mid_deriveCollectorName_b5bc8d9284c64bc6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProfilerCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProfilerCollector(const ProfilerCollector& obj) : ::java::lang::Object(obj) {}

            ProfilerCollector(const ::org::apache::lucene::search::Collector &, const ::java::lang::String &, const ::java::util::List &);

            ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::java::lang::String getName() const;
            ::org::apache::lucene::sandbox::search::ProfilerCollectorResult getProfileResult() const;
            ::java::lang::String getReason() const;
            jlong getTime() const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            void setWeight(const ::org::apache::lucene::search::Weight &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(ProfilerCollector);
          extern PyTypeObject *PY_TYPE(ProfilerCollector);

          class t_ProfilerCollector {
          public:
            PyObject_HEAD
            ProfilerCollector object;
            static PyObject *wrap_Object(const ProfilerCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
