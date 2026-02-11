#ifndef java_text_BreakIterator_H
#define java_text_BreakIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
  namespace util {
    class Locale;
  }
  namespace text {
    class BreakIterator;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class BreakIterator : public ::java::lang::Object {
     public:
      enum {
        mid_clone_bdd51648087bae52,
        mid_current_15aa3d485e96b665,
        mid_first_15aa3d485e96b665,
        mid_following_58b165b57740feff,
        mid_getAvailableLocales_40108ee1d11c7d0c,
        mid_getCharacterInstance_9e8c9151a7f27da0,
        mid_getCharacterInstance_9bd1b33d2fc349bd,
        mid_getLineInstance_9e8c9151a7f27da0,
        mid_getLineInstance_9bd1b33d2fc349bd,
        mid_getSentenceInstance_9e8c9151a7f27da0,
        mid_getSentenceInstance_9bd1b33d2fc349bd,
        mid_getWordInstance_9e8c9151a7f27da0,
        mid_getWordInstance_9bd1b33d2fc349bd,
        mid_isBoundary_92eccba87b045bbc,
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

      explicit BreakIterator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BreakIterator(const BreakIterator& obj) : ::java::lang::Object(obj) {}

      static jint DONE;

      ::java::lang::Object clone() const;
      jint current() const;
      jint first() const;
      jint following(jint) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      static BreakIterator getCharacterInstance();
      static BreakIterator getCharacterInstance(const ::java::util::Locale &);
      static BreakIterator getLineInstance();
      static BreakIterator getLineInstance(const ::java::util::Locale &);
      static BreakIterator getSentenceInstance();
      static BreakIterator getSentenceInstance(const ::java::util::Locale &);
      static BreakIterator getWordInstance();
      static BreakIterator getWordInstance(const ::java::util::Locale &);
      jboolean isBoundary(jint) const;
      jint last() const;
      jint next() const;
      jint next(jint) const;
      jint preceding(jint) const;
      jint previous() const;
      void setText(const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(BreakIterator);
    extern PyTypeObject *PY_TYPE(BreakIterator);

    class t_BreakIterator {
    public:
      PyObject_HEAD
      BreakIterator object;
      static PyObject *wrap_Object(const BreakIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
