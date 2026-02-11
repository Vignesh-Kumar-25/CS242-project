#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo$Toffs;
          class FieldPhraseList$WeightedPhraseInfo;
          class FieldTermStack$TermInfo;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
    class LinkedList;
  }
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldPhraseList$WeightedPhraseInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_568dc3e0933a89e8,
              mid_init$_4f1da116d602d493,
              mid_init$_c164d652aa3501b6,
              mid_compareTo_87fa471d6723f0de,
              mid_equals_6084f78e09b6c0c3,
              mid_getBoost_15cd8574741b1394,
              mid_getEndOffset_15aa3d485e96b665,
              mid_getSeqnum_15aa3d485e96b665,
              mid_getStartOffset_15aa3d485e96b665,
              mid_getTermsInfos_0bc66e960964b70a,
              mid_getTermsOffsets_0bc66e960964b70a,
              mid_getText_dc633f13a47328a8,
              mid_hashCode_15aa3d485e96b665,
              mid_isOffsetOverlap_76662d3c20936696,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList$WeightedPhraseInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList$WeightedPhraseInfo(const FieldPhraseList$WeightedPhraseInfo& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList$WeightedPhraseInfo(const ::java::util::Collection &);
            FieldPhraseList$WeightedPhraseInfo(const ::java::util::LinkedList &, jfloat);
            FieldPhraseList$WeightedPhraseInfo(const ::java::util::LinkedList &, jfloat, jint);

            jint compareTo(const FieldPhraseList$WeightedPhraseInfo &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jfloat getBoost() const;
            jint getEndOffset() const;
            jint getSeqnum() const;
            jint getStartOffset() const;
            ::java::util::List getTermsInfos() const;
            ::java::util::List getTermsOffsets() const;
            ::java::lang::String getText() const;
            jint hashCode() const;
            jboolean isOffsetOverlap(const FieldPhraseList$WeightedPhraseInfo &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldPhraseList$WeightedPhraseInfo);
          extern PyTypeObject *PY_TYPE(FieldPhraseList$WeightedPhraseInfo);

          class t_FieldPhraseList$WeightedPhraseInfo {
          public:
            PyObject_HEAD
            FieldPhraseList$WeightedPhraseInfo object;
            static PyObject *wrap_Object(const FieldPhraseList$WeightedPhraseInfo&);
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
