#ifndef org_apache_lucene_analysis_charfilter_HTMLStripCharFilterFactory_H
#define org_apache_lucene_analysis_charfilter_HTMLStripCharFilterFactory_H

#include "org/apache/lucene/analysis/CharFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace io {
    class Reader;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {
          class HTMLStripCharFilter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {

          class HTMLStripCharFilterFactory : public ::org::apache::lucene::analysis::CharFilterFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_create_7a40551baef2a0f9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HTMLStripCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HTMLStripCharFilterFactory(const HTMLStripCharFilterFactory& obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            HTMLStripCharFilterFactory();
            HTMLStripCharFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::charfilter::HTMLStripCharFilter create(const ::java::io::Reader &) const;
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
      namespace analysis {
        namespace charfilter {
          extern PyType_Def PY_TYPE_DEF(HTMLStripCharFilterFactory);
          extern PyTypeObject *PY_TYPE(HTMLStripCharFilterFactory);

          class t_HTMLStripCharFilterFactory {
          public:
            PyObject_HEAD
            HTMLStripCharFilterFactory object;
            static PyObject *wrap_Object(const HTMLStripCharFilterFactory&);
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
