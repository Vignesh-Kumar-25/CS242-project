#ifndef org_apache_lucene_analysis_AnalysisSPILoader_H
#define org_apache_lucene_analysis_AnalysisSPILoader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class IllegalAccessException;
    class IllegalStateException;
    class NoSuchFieldException;
    class Class;
    class String;
    class ClassLoader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class AbstractAnalysisFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class AnalysisSPILoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9759e0f29e70b30d,
            mid_init$_f6d5d0a55037f994,
            mid_availableServices_9a625d56b67c7390,
            mid_lookupClass_ec52581e08fd2fb7,
            mid_lookupSPIName_e54b52f11e35579c,
            mid_newFactoryClassInstance_f79e8d55186258e1,
            mid_newInstance_873626ed64bb1a5d,
            mid_reload_265d190b7c213a14,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AnalysisSPILoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AnalysisSPILoader(const AnalysisSPILoader& obj) : ::java::lang::Object(obj) {}

          AnalysisSPILoader(const ::java::lang::Class &);
          AnalysisSPILoader(const ::java::lang::Class &, const ::java::lang::ClassLoader &);

          ::java::util::Set availableServices() const;
          ::java::lang::Class lookupClass(const ::java::lang::String &) const;
          static ::java::lang::String lookupSPIName(const ::java::lang::Class &);
          static ::org::apache::lucene::analysis::AbstractAnalysisFactory newFactoryClassInstance(const ::java::lang::Class &, const ::java::util::Map &);
          ::org::apache::lucene::analysis::AbstractAnalysisFactory newInstance(const ::java::lang::String &, const ::java::util::Map &) const;
          void reload(const ::java::lang::ClassLoader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(AnalysisSPILoader);
        extern PyTypeObject *PY_TYPE(AnalysisSPILoader);

        class t_AnalysisSPILoader {
        public:
          PyObject_HEAD
          AnalysisSPILoader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AnalysisSPILoader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AnalysisSPILoader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AnalysisSPILoader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
