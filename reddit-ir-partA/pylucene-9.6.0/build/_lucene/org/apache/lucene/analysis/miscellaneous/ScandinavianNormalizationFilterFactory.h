#ifndef org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizationFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizationFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class ScandinavianNormalizationFilter;
        }
        class TokenStream;
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
        namespace miscellaneous {

          class ScandinavianNormalizationFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_create_30b404a58d5a34b6,
              mid_normalize_879ac71ff4d4fee2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScandinavianNormalizationFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScandinavianNormalizationFilterFactory(const ScandinavianNormalizationFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ScandinavianNormalizationFilterFactory();
            ScandinavianNormalizationFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::ScandinavianNormalizationFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::org::apache::lucene::analysis::TokenStream normalize(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(ScandinavianNormalizationFilterFactory);
          extern PyTypeObject *PY_TYPE(ScandinavianNormalizationFilterFactory);

          class t_ScandinavianNormalizationFilterFactory {
          public:
            PyObject_HEAD
            ScandinavianNormalizationFilterFactory object;
            static PyObject *wrap_Object(const ScandinavianNormalizationFilterFactory&);
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
