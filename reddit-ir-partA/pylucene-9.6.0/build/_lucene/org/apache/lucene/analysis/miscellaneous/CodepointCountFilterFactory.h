#ifndef org_apache_lucene_analysis_miscellaneous_CodepointCountFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_CodepointCountFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class CodepointCountFilter;
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

          class CodepointCountFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_create_a8bb41756094f6b5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CodepointCountFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CodepointCountFilterFactory(const CodepointCountFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *MAX_KEY;
            static ::java::lang::String *MIN_KEY;
            static ::java::lang::String *NAME;

            CodepointCountFilterFactory();
            CodepointCountFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::CodepointCountFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(CodepointCountFilterFactory);
          extern PyTypeObject *PY_TYPE(CodepointCountFilterFactory);

          class t_CodepointCountFilterFactory {
          public:
            PyObject_HEAD
            CodepointCountFilterFactory object;
            static PyObject *wrap_Object(const CodepointCountFilterFactory&);
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
