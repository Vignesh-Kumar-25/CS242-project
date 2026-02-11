#ifndef org_apache_lucene_search_uhighlight_Passage_H
#define org_apache_lucene_search_uhighlight_Passage_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
        namespace uhighlight {

          class Passage : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_addMatch_00f40d0434b3342d,
              mid_getEndOffset_15aa3d485e96b665,
              mid_getLength_15aa3d485e96b665,
              mid_getMatchEnds_7880494ffe2d4089,
              mid_getMatchStarts_7880494ffe2d4089,
              mid_getMatchTermFreqsInDoc_7880494ffe2d4089,
              mid_getMatchTerms_e092e9d7d863fa74,
              mid_getNumMatches_15aa3d485e96b665,
              mid_getScore_15cd8574741b1394,
              mid_getStartOffset_15aa3d485e96b665,
              mid_reset_3353d9f14bbfd91a,
              mid_setEndOffset_da425451c8de636b,
              mid_setScore_354c036766ff84b4,
              mid_setStartOffset_da425451c8de636b,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Passage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Passage(const Passage& obj) : ::java::lang::Object(obj) {}

            Passage();

            void addMatch(jint, jint, const ::org::apache::lucene::util::BytesRef &, jint) const;
            jint getEndOffset() const;
            jint getLength() const;
            JArray< jint > getMatchEnds() const;
            JArray< jint > getMatchStarts() const;
            JArray< jint > getMatchTermFreqsInDoc() const;
            JArray< ::org::apache::lucene::util::BytesRef > getMatchTerms() const;
            jint getNumMatches() const;
            jfloat getScore() const;
            jint getStartOffset() const;
            void reset() const;
            void setEndOffset(jint) const;
            void setScore(jfloat) const;
            void setStartOffset(jint) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(Passage);
          extern PyTypeObject *PY_TYPE(Passage);

          class t_Passage {
          public:
            PyObject_HEAD
            Passage object;
            static PyObject *wrap_Object(const Passage&);
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
