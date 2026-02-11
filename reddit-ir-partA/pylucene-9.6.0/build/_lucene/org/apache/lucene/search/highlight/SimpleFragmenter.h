#ifndef org_apache_lucene_search_highlight_SimpleFragmenter_H
#define org_apache_lucene_search_highlight_SimpleFragmenter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Fragmenter;
        }
      }
      namespace analysis {
        class TokenStream;
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

          class SimpleFragmenter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_da425451c8de636b,
              mid_getFragmentSize_15aa3d485e96b665,
              mid_isNewFragment_ee8b0a5fa521ddac,
              mid_setFragmentSize_da425451c8de636b,
              mid_start_478dfff368e4b1d8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleFragmenter(const SimpleFragmenter& obj) : ::java::lang::Object(obj) {}

            SimpleFragmenter();
            SimpleFragmenter(jint);

            jint getFragmentSize() const;
            jboolean isNewFragment() const;
            void setFragmentSize(jint) const;
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
    namespace lucene {
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(SimpleFragmenter);
          extern PyTypeObject *PY_TYPE(SimpleFragmenter);

          class t_SimpleFragmenter {
          public:
            PyObject_HEAD
            SimpleFragmenter object;
            static PyObject *wrap_Object(const SimpleFragmenter&);
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
