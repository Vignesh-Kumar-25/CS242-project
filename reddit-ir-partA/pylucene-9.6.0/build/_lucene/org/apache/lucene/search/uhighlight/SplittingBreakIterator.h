#ifndef org_apache_lucene_search_uhighlight_SplittingBreakIterator_H
#define org_apache_lucene_search_uhighlight_SplittingBreakIterator_H

#include "java/text/BreakIterator.h"

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

          class SplittingBreakIterator : public ::java::text::BreakIterator {
           public:
            enum {
              mid_init$_ca63658ca680db15,
              mid_current_15aa3d485e96b665,
              mid_first_15aa3d485e96b665,
              mid_following_58b165b57740feff,
              mid_last_15aa3d485e96b665,
              mid_next_15aa3d485e96b665,
              mid_next_58b165b57740feff,
              mid_preceding_58b165b57740feff,
              mid_previous_15aa3d485e96b665,
              mid_setText_4a883f7810d2effa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SplittingBreakIterator(jobject obj) : ::java::text::BreakIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SplittingBreakIterator(const SplittingBreakIterator& obj) : ::java::text::BreakIterator(obj) {}

            SplittingBreakIterator(const ::java::text::BreakIterator &, jchar);

            jint current() const;
            jint first() const;
            jint following(jint) const;
            jint last() const;
            jint next() const;
            jint next(jint) const;
            jint preceding(jint) const;
            jint previous() const;
            void setText(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(SplittingBreakIterator);
          extern PyTypeObject *PY_TYPE(SplittingBreakIterator);

          class t_SplittingBreakIterator {
          public:
            PyObject_HEAD
            SplittingBreakIterator object;
            static PyObject *wrap_Object(const SplittingBreakIterator&);
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
