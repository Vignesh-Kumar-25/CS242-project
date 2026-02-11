#ifndef org_apache_lucene_analysis_CharFilterFactory_H
#define org_apache_lucene_analysis_CharFilterFactory_H

#include "org/apache/lucene/analysis/AbstractAnalysisFactory.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace io {
    class Reader;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharFilterFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharFilterFactory : public ::org::apache::lucene::analysis::AbstractAnalysisFactory {
         public:
          enum {
            mid_availableCharFilters_9a625d56b67c7390,
            mid_create_b23e5bf4f305678f,
            mid_findSPIName_e54b52f11e35579c,
            mid_forName_8a6ea9d87908dd6a,
            mid_lookupClass_ec52581e08fd2fb7,
            mid_normalize_b23e5bf4f305678f,
            mid_reloadCharFilters_265d190b7c213a14,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::AbstractAnalysisFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharFilterFactory(const CharFilterFactory& obj) : ::org::apache::lucene::analysis::AbstractAnalysisFactory(obj) {}

          static ::java::util::Set availableCharFilters();
          ::java::io::Reader create(const ::java::io::Reader &) const;
          static ::java::lang::String findSPIName(const ::java::lang::Class &);
          static CharFilterFactory forName(const ::java::lang::String &, const ::java::util::Map &);
          static ::java::lang::Class lookupClass(const ::java::lang::String &);
          ::java::io::Reader normalize(const ::java::io::Reader &) const;
          static void reloadCharFilters(const ::java::lang::ClassLoader &);
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
        extern PyType_Def PY_TYPE_DEF(CharFilterFactory);
        extern PyTypeObject *PY_TYPE(CharFilterFactory);

        class t_CharFilterFactory {
        public:
          PyObject_HEAD
          CharFilterFactory object;
          static PyObject *wrap_Object(const CharFilterFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
