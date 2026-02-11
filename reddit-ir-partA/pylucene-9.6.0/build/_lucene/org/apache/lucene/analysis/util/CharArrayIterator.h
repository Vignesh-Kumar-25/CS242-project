#ifndef org_apache_lucene_analysis_util_CharArrayIterator_H
#define org_apache_lucene_analysis_util_CharArrayIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArrayIterator;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharArrayIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_clone_3c16ffc5c7c42809,
              mid_current_b2ab5238d4cbdf34,
              mid_first_b2ab5238d4cbdf34,
              mid_getBeginIndex_15aa3d485e96b665,
              mid_getEndIndex_15aa3d485e96b665,
              mid_getIndex_15aa3d485e96b665,
              mid_getLength_15aa3d485e96b665,
              mid_getStart_15aa3d485e96b665,
              mid_getText_44e5186a889ad767,
              mid_last_b2ab5238d4cbdf34,
              mid_newSentenceInstance_3c16ffc5c7c42809,
              mid_newWordInstance_3c16ffc5c7c42809,
              mid_next_b2ab5238d4cbdf34,
              mid_previous_b2ab5238d4cbdf34,
              mid_setIndex_c36d5d142dcfe0b2,
              mid_setText_9df2689bc3d19600,
              mid_jreBugWorkaround_18bc01776e360eab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArrayIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharArrayIterator(const CharArrayIterator& obj) : ::java::lang::Object(obj) {}

            static jboolean HAS_BUGGY_BREAKITERATORS;

            CharArrayIterator();

            CharArrayIterator clone() const;
            jchar current() const;
            jchar first() const;
            jint getBeginIndex() const;
            jint getEndIndex() const;
            jint getIndex() const;
            jint getLength() const;
            jint getStart() const;
            JArray< jchar > getText() const;
            jchar last() const;
            static CharArrayIterator newSentenceInstance();
            static CharArrayIterator newWordInstance();
            jchar next() const;
            jchar previous() const;
            jchar setIndex(jint) const;
            void setText(const JArray< jchar > &, jint, jint) const;
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
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(CharArrayIterator);
          extern PyTypeObject *PY_TYPE(CharArrayIterator);

          class t_CharArrayIterator {
          public:
            PyObject_HEAD
            CharArrayIterator object;
            static PyObject *wrap_Object(const CharArrayIterator&);
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
