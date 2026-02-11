#ifndef org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
      namespace util {
        class ResourceLoader;
        class ResourceLoaderAware;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ConditionalTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_create_879ac71ff4d4fee2,
              mid_inform_b60891107d793f0c,
              mid_setInnerFilters_1a2e28000748bc88,
              mid_doInform_b60891107d793f0c,
              mid_create_4a155bd4efed2577,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConditionalTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConditionalTokenFilterFactory(const ConditionalTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ConditionalTokenFilterFactory();

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
            void setInnerFilters(const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(ConditionalTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(ConditionalTokenFilterFactory);

          class t_ConditionalTokenFilterFactory {
          public:
            PyObject_HEAD
            ConditionalTokenFilterFactory object;
            static PyObject *wrap_Object(const ConditionalTokenFilterFactory&);
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
