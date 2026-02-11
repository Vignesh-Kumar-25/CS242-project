#ifndef org_apache_lucene_analysis_miscellaneous_TypeAsSynonymFilter_H
#define org_apache_lucene_analysis_miscellaneous_TypeAsSynonymFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
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
      namespace analysis {
        namespace miscellaneous {

          class TypeAsSynonymFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_init$_9baabffbf360828c,
              mid_init$_26583572cc695d3a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeAsSynonymFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeAsSynonymFilter(const TypeAsSynonymFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            TypeAsSynonymFilter(const ::org::apache::lucene::analysis::TokenStream &);
            TypeAsSynonymFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &);
            TypeAsSynonymFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, const ::java::util::Set &, jint);

            jboolean incrementToken() const;
            void reset() const;
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
          extern PyType_Def PY_TYPE_DEF(TypeAsSynonymFilter);
          extern PyTypeObject *PY_TYPE(TypeAsSynonymFilter);

          class t_TypeAsSynonymFilter {
          public:
            PyObject_HEAD
            TypeAsSynonymFilter object;
            static PyObject *wrap_Object(const TypeAsSynonymFilter&);
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
