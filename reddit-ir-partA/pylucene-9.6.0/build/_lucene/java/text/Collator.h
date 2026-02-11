#ifndef java_text_Collator_H
#define java_text_Collator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class Locale;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
  namespace text {
    class Collator;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class Collator : public ::java::lang::Object {
     public:
      enum {
        mid_clone_bdd51648087bae52,
        mid_compare_1951ff36bbcd363e,
        mid_compare_a89a7424a31ba835,
        mid_equals_6084f78e09b6c0c3,
        mid_equals_fd896d126634f44a,
        mid_getAvailableLocales_40108ee1d11c7d0c,
        mid_getDecomposition_15aa3d485e96b665,
        mid_getInstance_0a102a0a5e2aa82f,
        mid_getInstance_73d47622842363ac,
        mid_getStrength_15aa3d485e96b665,
        mid_hashCode_15aa3d485e96b665,
        mid_setDecomposition_da425451c8de636b,
        mid_setStrength_da425451c8de636b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collator(const Collator& obj) : ::java::lang::Object(obj) {}

      static jint CANONICAL_DECOMPOSITION;
      static jint FULL_DECOMPOSITION;
      static jint IDENTICAL;
      static jint NO_DECOMPOSITION;
      static jint PRIMARY;
      static jint SECONDARY;
      static jint TERTIARY;

      ::java::lang::Object clone() const;
      jint compare(const ::java::lang::String &, const ::java::lang::String &) const;
      jint compare(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::String &, const ::java::lang::String &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      jint getDecomposition() const;
      static Collator getInstance();
      static Collator getInstance(const ::java::util::Locale &);
      jint getStrength() const;
      jint hashCode() const;
      void setDecomposition(jint) const;
      void setStrength(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(Collator);
    extern PyTypeObject *PY_TYPE(Collator);

    class t_Collator {
    public:
      PyObject_HEAD
      Collator object;
      static PyObject *wrap_Object(const Collator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
