#ifndef org_apache_lucene_analysis_miscellaneous_ProtectedTermFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ProtectedTermFilterFactory_H

#include "org/apache/lucene/analysis/miscellaneous/ConditionalTokenFilterFactory.h"

namespace java {
  namespace util {
    class Map;
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
      namespace util {
        class ResourceLoader;
      }
      namespace analysis {
        class CharArraySet;
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

          class ProtectedTermFilterFactory : public ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_doInform_b60891107d793f0c,
              mid_getProtectedTerms_cbabc13c6309e190,
              mid_isIgnoreCase_ee8b0a5fa521ddac,
              mid_create_4a155bd4efed2577,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProtectedTermFilterFactory(jobject obj) : ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProtectedTermFilterFactory(const ProtectedTermFilterFactory& obj) : ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory(obj) {}

            static jchar FILTER_ARG_SEPARATOR;
            static jchar FILTER_NAME_ID_SEPARATOR;
            static ::java::lang::String *NAME;
            static ::java::lang::String *PROTECTED_TERMS;

            ProtectedTermFilterFactory();
            ProtectedTermFilterFactory(const ::java::util::Map &);

            void doInform(const ::org::apache::lucene::util::ResourceLoader &) const;
            ::org::apache::lucene::analysis::CharArraySet getProtectedTerms() const;
            jboolean isIgnoreCase() const;
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
          extern PyType_Def PY_TYPE_DEF(ProtectedTermFilterFactory);
          extern PyTypeObject *PY_TYPE(ProtectedTermFilterFactory);

          class t_ProtectedTermFilterFactory {
          public:
            PyObject_HEAD
            ProtectedTermFilterFactory object;
            static PyObject *wrap_Object(const ProtectedTermFilterFactory&);
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
