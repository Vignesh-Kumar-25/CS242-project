#ifndef org_apache_lucene_search_vectorhighlight_BaseFragListBuilder_H
#define org_apache_lucene_search_vectorhighlight_BaseFragListBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FragListBuilder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class BaseFragListBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_da425451c8de636b,
              mid_createFieldFragList_7fb757701af1d239,
              mid_acceptPhrase_2cd56cd6412f4b4f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseFragListBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseFragListBuilder(const BaseFragListBuilder& obj) : ::java::lang::Object(obj) {}

            static jint MARGIN_DEFAULT;
            static jint MIN_FRAG_CHAR_SIZE_FACTOR;

            BaseFragListBuilder();
            BaseFragListBuilder(jint);
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(BaseFragListBuilder);
          extern PyTypeObject *PY_TYPE(BaseFragListBuilder);

          class t_BaseFragListBuilder {
          public:
            PyObject_HEAD
            BaseFragListBuilder object;
            static PyObject *wrap_Object(const BaseFragListBuilder&);
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
