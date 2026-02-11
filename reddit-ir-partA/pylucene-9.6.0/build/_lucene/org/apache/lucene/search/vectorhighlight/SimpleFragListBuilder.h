#ifndef org_apache_lucene_search_vectorhighlight_SimpleFragListBuilder_H
#define org_apache_lucene_search_vectorhighlight_SimpleFragListBuilder_H

#include "org/apache/lucene/search/vectorhighlight/BaseFragListBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldFragList;
          class FieldPhraseList;
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

          class SimpleFragListBuilder : public ::org::apache::lucene::search::vectorhighlight::BaseFragListBuilder {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_da425451c8de636b,
              mid_createFieldFragList_eda3c77bfe1a6217,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleFragListBuilder(jobject obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragListBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleFragListBuilder(const SimpleFragListBuilder& obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragListBuilder(obj) {}

            SimpleFragListBuilder();
            SimpleFragListBuilder(jint);

            ::org::apache::lucene::search::vectorhighlight::FieldFragList createFieldFragList(const ::org::apache::lucene::search::vectorhighlight::FieldPhraseList &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleFragListBuilder);
          extern PyTypeObject *PY_TYPE(SimpleFragListBuilder);

          class t_SimpleFragListBuilder {
          public:
            PyObject_HEAD
            SimpleFragListBuilder object;
            static PyObject *wrap_Object(const SimpleFragListBuilder&);
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
