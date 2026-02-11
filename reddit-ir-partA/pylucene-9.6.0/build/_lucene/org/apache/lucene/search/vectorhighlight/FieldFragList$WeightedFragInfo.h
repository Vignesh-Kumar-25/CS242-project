#ifndef org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldFragList$WeightedFragInfo$SubInfo;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldFragList$WeightedFragInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4ed6471338d463c0,
              mid_getEndOffset_15aa3d485e96b665,
              mid_getStartOffset_15aa3d485e96b665,
              mid_getSubInfos_0bc66e960964b70a,
              mid_getTotalBoost_15cd8574741b1394,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldFragList$WeightedFragInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldFragList$WeightedFragInfo(const FieldFragList$WeightedFragInfo& obj) : ::java::lang::Object(obj) {}

            FieldFragList$WeightedFragInfo(jint, jint, const ::java::util::List &, jfloat);

            jint getEndOffset() const;
            jint getStartOffset() const;
            ::java::util::List getSubInfos() const;
            jfloat getTotalBoost() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldFragList$WeightedFragInfo);
          extern PyTypeObject *PY_TYPE(FieldFragList$WeightedFragInfo);

          class t_FieldFragList$WeightedFragInfo {
          public:
            PyObject_HEAD
            FieldFragList$WeightedFragInfo object;
            static PyObject *wrap_Object(const FieldFragList$WeightedFragInfo&);
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
