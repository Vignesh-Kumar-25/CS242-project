#ifndef org_apache_lucene_expressions_js_JavascriptCompiler_H
#define org_apache_lucene_expressions_js_JavascriptCompiler_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        class Expression;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {

          class JavascriptCompiler : public ::java::lang::Object {
           public:
            enum {
              mid_compile_ea807ee5783a8e88,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JavascriptCompiler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JavascriptCompiler(const JavascriptCompiler& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::expressions::Expression compile(const ::java::lang::String &);
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
      namespace expressions {
        namespace js {
          extern PyType_Def PY_TYPE_DEF(JavascriptCompiler);
          extern PyTypeObject *PY_TYPE(JavascriptCompiler);

          class t_JavascriptCompiler {
          public:
            PyObject_HEAD
            JavascriptCompiler object;
            static PyObject *wrap_Object(const JavascriptCompiler&);
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
