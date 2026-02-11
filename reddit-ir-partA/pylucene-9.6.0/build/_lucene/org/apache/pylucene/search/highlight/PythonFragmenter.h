#ifndef org_apache_pylucene_search_highlight_PythonFragmenter_H
#define org_apache_pylucene_search_highlight_PythonFragmenter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
      namespace search {
        namespace highlight {
          class Fragmenter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {

          class PythonFragmenter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_finalize_3353d9f14bbfd91a,
              mid_isNewFragment_ee8b0a5fa521ddac,
              mid_pythonDecRef_3353d9f14bbfd91a,
              mid_pythonExtension_058f5911dcf5d8a4,
              mid_pythonExtension_db2028ac45cd5b77,
              mid_start_478dfff368e4b1d8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonFragmenter(const PythonFragmenter& obj) : ::java::lang::Object(obj) {}

            PythonFragmenter();

            void finalize() const;
            jboolean isNewFragment() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            void start(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(PythonFragmenter);
          extern PyTypeObject *PY_TYPE(PythonFragmenter);

          class t_PythonFragmenter {
          public:
            PyObject_HEAD
            PythonFragmenter object;
            static PyObject *wrap_Object(const PythonFragmenter&);
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
