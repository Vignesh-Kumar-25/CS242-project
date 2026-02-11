#ifndef org_apache_lucene_analysis_boost_DelimitedBoostTokenFilterFactory_H
#define org_apache_lucene_analysis_boost_DelimitedBoostTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace boost {
          class DelimitedBoostTokenFilter;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
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
      namespace analysis {
        namespace boost {

          class DelimitedBoostTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_create_09b0725b004a43b3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedBoostTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DelimitedBoostTokenFilterFactory(const DelimitedBoostTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static jchar DEFAULT_DELIMITER;
            static ::java::lang::String *DELIMITER_ATTR;
            static ::java::lang::String *NAME;

            DelimitedBoostTokenFilterFactory();
            DelimitedBoostTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::boost::DelimitedBoostTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace boost {
          extern PyType_Def PY_TYPE_DEF(DelimitedBoostTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(DelimitedBoostTokenFilterFactory);

          class t_DelimitedBoostTokenFilterFactory {
          public:
            PyObject_HEAD
            DelimitedBoostTokenFilterFactory object;
            static PyObject *wrap_Object(const DelimitedBoostTokenFilterFactory&);
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
