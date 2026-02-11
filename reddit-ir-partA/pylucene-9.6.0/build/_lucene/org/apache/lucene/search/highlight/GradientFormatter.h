#ifndef org_apache_lucene_search_highlight_GradientFormatter_H
#define org_apache_lucene_search_highlight_GradientFormatter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TokenGroup;
          class Formatter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class GradientFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_537201d2edfd80a1,
              mid_hexToInt_08c5dabd7f8f1590,
              mid_highlightTerm_80968e6c836ad8ee,
              mid_getForegroundColorString_c8e40c7484e79ae2,
              mid_getBackgroundColorString_c8e40c7484e79ae2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GradientFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GradientFormatter(const GradientFormatter& obj) : ::java::lang::Object(obj) {}

            GradientFormatter(jfloat, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

            static jint hexToInt(const ::java::lang::String &);
            ::java::lang::String highlightTerm(const ::java::lang::String &, const ::org::apache::lucene::search::highlight::TokenGroup &) const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(GradientFormatter);
          extern PyTypeObject *PY_TYPE(GradientFormatter);

          class t_GradientFormatter {
          public:
            PyObject_HEAD
            GradientFormatter object;
            static PyObject *wrap_Object(const GradientFormatter&);
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
