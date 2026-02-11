#ifndef org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo$SubInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo$SubInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo$Toffs;
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

          class FieldFragList$WeightedFragInfo$SubInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_80343a948118cb27,
              mid_getBoost_15cd8574741b1394,
              mid_getSeqnum_15aa3d485e96b665,
              mid_getTermsOffsets_0bc66e960964b70a,
              mid_getText_dc633f13a47328a8,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldFragList$WeightedFragInfo$SubInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldFragList$WeightedFragInfo$SubInfo(const FieldFragList$WeightedFragInfo$SubInfo& obj) : ::java::lang::Object(obj) {}

            FieldFragList$WeightedFragInfo$SubInfo(const ::java::lang::String &, const ::java::util::List &, jint, jfloat);

            jfloat getBoost() const;
            jint getSeqnum() const;
            ::java::util::List getTermsOffsets() const;
            ::java::lang::String getText() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldFragList$WeightedFragInfo$SubInfo);
          extern PyTypeObject *PY_TYPE(FieldFragList$WeightedFragInfo$SubInfo);

          class t_FieldFragList$WeightedFragInfo$SubInfo {
          public:
            PyObject_HEAD
            FieldFragList$WeightedFragInfo$SubInfo object;
            static PyObject *wrap_Object(const FieldFragList$WeightedFragInfo$SubInfo&);
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
