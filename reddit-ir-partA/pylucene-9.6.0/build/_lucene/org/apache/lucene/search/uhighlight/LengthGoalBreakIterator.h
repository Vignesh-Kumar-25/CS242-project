#ifndef org_apache_lucene_search_uhighlight_LengthGoalBreakIterator_H
#define org_apache_lucene_search_uhighlight_LengthGoalBreakIterator_H

#include "java/text/BreakIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class LengthGoalBreakIterator;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class LengthGoalBreakIterator : public ::java::text::BreakIterator {
           public:
            enum {
              mid_clone_bdd51648087bae52,
              mid_createClosestToLength_48395950a5c8c7bf,
              mid_createMinLength_48395950a5c8c7bf,
              mid_current_15aa3d485e96b665,
              mid_first_15aa3d485e96b665,
              mid_following_58b165b57740feff,
              mid_isBoundary_92eccba87b045bbc,
              mid_last_15aa3d485e96b665,
              mid_next_15aa3d485e96b665,
              mid_next_58b165b57740feff,
              mid_preceding_58b165b57740feff,
              mid_previous_15aa3d485e96b665,
              mid_setText_4a883f7810d2effa,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LengthGoalBreakIterator(jobject obj) : ::java::text::BreakIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LengthGoalBreakIterator(const LengthGoalBreakIterator& obj) : ::java::text::BreakIterator(obj) {}

            ::java::lang::Object clone() const;
            static LengthGoalBreakIterator createClosestToLength(const ::java::text::BreakIterator &, jint, jfloat);
            static LengthGoalBreakIterator createMinLength(const ::java::text::BreakIterator &, jint, jfloat);
            jint current() const;
            jint first() const;
            jint following(jint) const;
            jboolean isBoundary(jint) const;
            jint last() const;
            jint next() const;
            jint next(jint) const;
            jint preceding(jint) const;
            jint previous() const;
            void setText(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(LengthGoalBreakIterator);
          extern PyTypeObject *PY_TYPE(LengthGoalBreakIterator);

          class t_LengthGoalBreakIterator {
          public:
            PyObject_HEAD
            LengthGoalBreakIterator object;
            static PyObject *wrap_Object(const LengthGoalBreakIterator&);
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
