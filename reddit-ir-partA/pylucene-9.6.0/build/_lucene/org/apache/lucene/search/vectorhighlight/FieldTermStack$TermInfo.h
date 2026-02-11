#ifndef org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldTermStack$TermInfo;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldTermStack$TermInfo : public ::java::lang::Object {
           public:
            enum {
              mid_compareTo_00eed13a45f8007c,
              mid_equals_6084f78e09b6c0c3,
              mid_getEndOffset_15aa3d485e96b665,
              mid_getNext_612f91c9b71caca8,
              mid_getPosition_15aa3d485e96b665,
              mid_getStartOffset_15aa3d485e96b665,
              mid_getText_dc633f13a47328a8,
              mid_getWeight_15cd8574741b1394,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTermStack$TermInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldTermStack$TermInfo(const FieldTermStack$TermInfo& obj) : ::java::lang::Object(obj) {}

            jint compareTo(const FieldTermStack$TermInfo &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getEndOffset() const;
            FieldTermStack$TermInfo getNext() const;
            jint getPosition() const;
            jint getStartOffset() const;
            ::java::lang::String getText() const;
            jfloat getWeight() const;
            jint hashCode() const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldTermStack$TermInfo);
          extern PyTypeObject *PY_TYPE(FieldTermStack$TermInfo);

          class t_FieldTermStack$TermInfo {
          public:
            PyObject_HEAD
            FieldTermStack$TermInfo object;
            static PyObject *wrap_Object(const FieldTermStack$TermInfo&);
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
