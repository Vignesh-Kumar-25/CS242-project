#ifndef org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H
#define org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class Character;
    class Class;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class BoundaryScanner;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class SimpleBoundaryScanner : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_f4b3752b526430ca,
              mid_init$_da425451c8de636b,
              mid_init$_876e5ab090f5b5cc,
              mid_init$_f1e77603bf1dce64,
              mid_findEndOffset_bdec9027751d6b0c,
              mid_findStartOffset_bdec9027751d6b0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleBoundaryScanner(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleBoundaryScanner(const SimpleBoundaryScanner& obj) : ::java::lang::Object(obj) {}

            static JArray< ::java::lang::Character > *DEFAULT_BOUNDARY_CHARS;
            static jint DEFAULT_MAX_SCAN;

            SimpleBoundaryScanner();
            SimpleBoundaryScanner(const JArray< ::java::lang::Character > &);
            SimpleBoundaryScanner(jint);
            SimpleBoundaryScanner(jint, const JArray< ::java::lang::Character > &);
            SimpleBoundaryScanner(jint, const ::java::util::Set &);

            jint findEndOffset(const ::java::lang::StringBuilder &, jint) const;
            jint findStartOffset(const ::java::lang::StringBuilder &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleBoundaryScanner);
          extern PyTypeObject *PY_TYPE(SimpleBoundaryScanner);

          class t_SimpleBoundaryScanner {
          public:
            PyObject_HEAD
            SimpleBoundaryScanner object;
            static PyObject *wrap_Object(const SimpleBoundaryScanner&);
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
