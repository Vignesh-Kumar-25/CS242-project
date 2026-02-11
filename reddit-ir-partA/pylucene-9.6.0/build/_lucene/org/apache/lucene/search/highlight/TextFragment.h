#ifndef org_apache_lucene_search_highlight_TextFragment_H
#define org_apache_lucene_search_highlight_TextFragment_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TextFragment;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TextFragment : public ::java::lang::Object {
           public:
            enum {
              mid_init$_87f8ac64cb960c8d,
              mid_follows_2112ef85b16c9ecc,
              mid_getFragNum_15aa3d485e96b665,
              mid_getScore_15cd8574741b1394,
              mid_merge_9d6a693cd43dcd24,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TextFragment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TextFragment(const TextFragment& obj) : ::java::lang::Object(obj) {}

            TextFragment(const ::java::lang::CharSequence &, jint, jint);

            jboolean follows(const TextFragment &) const;
            jint getFragNum() const;
            jfloat getScore() const;
            void merge(const TextFragment &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(TextFragment);
          extern PyTypeObject *PY_TYPE(TextFragment);

          class t_TextFragment {
          public:
            PyObject_HEAD
            TextFragment object;
            static PyObject *wrap_Object(const TextFragment&);
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
