#ifndef java_util_Comparator_H
#define java_util_Comparator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class ToIntFunction;
      class ToDoubleFunction;
      class ToLongFunction;
      class Function;
    }
    class Comparator;
  }
  namespace lang {
    class Class;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Comparator : public ::java::lang::Object {
     public:
      enum {
        mid_compare_a89a7424a31ba835,
        mid_comparing_9aac1976a5765de3,
        mid_comparing_788a0b7a37924456,
        mid_comparingDouble_ddb8e89341bf0c09,
        mid_comparingInt_43a97006d2ba85ca,
        mid_comparingLong_4a185eca036229df,
        mid_equals_6084f78e09b6c0c3,
        mid_naturalOrder_bfaba219acee2aff,
        mid_nullsFirst_af8e11d3c2101e29,
        mid_nullsLast_af8e11d3c2101e29,
        mid_reverseOrder_bfaba219acee2aff,
        mid_reversed_bfaba219acee2aff,
        mid_thenComparing_af8e11d3c2101e29,
        mid_thenComparing_9aac1976a5765de3,
        mid_thenComparing_788a0b7a37924456,
        mid_thenComparingDouble_ddb8e89341bf0c09,
        mid_thenComparingInt_43a97006d2ba85ca,
        mid_thenComparingLong_4a185eca036229df,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Comparator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Comparator(const Comparator& obj) : ::java::lang::Object(obj) {}

      jint compare(const ::java::lang::Object &, const ::java::lang::Object &) const;
      static Comparator comparing(const ::java::util::function::Function &);
      static Comparator comparing(const ::java::util::function::Function &, const Comparator &);
      static Comparator comparingDouble(const ::java::util::function::ToDoubleFunction &);
      static Comparator comparingInt(const ::java::util::function::ToIntFunction &);
      static Comparator comparingLong(const ::java::util::function::ToLongFunction &);
      jboolean equals(const ::java::lang::Object &) const;
      static Comparator naturalOrder();
      static Comparator nullsFirst(const Comparator &);
      static Comparator nullsLast(const Comparator &);
      static Comparator reverseOrder();
      Comparator reversed() const;
      Comparator thenComparing(const Comparator &) const;
      Comparator thenComparing(const ::java::util::function::Function &) const;
      Comparator thenComparing(const ::java::util::function::Function &, const Comparator &) const;
      Comparator thenComparingDouble(const ::java::util::function::ToDoubleFunction &) const;
      Comparator thenComparingInt(const ::java::util::function::ToIntFunction &) const;
      Comparator thenComparingLong(const ::java::util::function::ToLongFunction &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Comparator);
    extern PyTypeObject *PY_TYPE(Comparator);

    class t_Comparator {
    public:
      PyObject_HEAD
      Comparator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Comparator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Comparator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Comparator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
