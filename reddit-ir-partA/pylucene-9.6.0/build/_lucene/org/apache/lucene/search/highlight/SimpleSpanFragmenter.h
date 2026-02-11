#ifndef org_apache_lucene_search_highlight_SimpleSpanFragmenter_H
#define org_apache_lucene_search_highlight_SimpleSpanFragmenter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class QueryScorer;
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
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class SimpleSpanFragmenter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_adbe8146bbde5465,
              mid_init$_a05d7a0a8417e7c2,
              mid_isNewFragment_ee8b0a5fa521ddac,
              mid_start_478dfff368e4b1d8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleSpanFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleSpanFragmenter(const SimpleSpanFragmenter& obj) : ::java::lang::Object(obj) {}

            SimpleSpanFragmenter(const ::org::apache::lucene::search::highlight::QueryScorer &);
            SimpleSpanFragmenter(const ::org::apache::lucene::search::highlight::QueryScorer &, jint);

            jboolean isNewFragment() const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleSpanFragmenter);
          extern PyTypeObject *PY_TYPE(SimpleSpanFragmenter);

          class t_SimpleSpanFragmenter {
          public:
            PyObject_HEAD
            SimpleSpanFragmenter object;
            static PyObject *wrap_Object(const SimpleSpanFragmenter&);
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
