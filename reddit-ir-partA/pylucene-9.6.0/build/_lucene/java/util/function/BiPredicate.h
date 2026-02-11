#ifndef java_util_function_BiPredicate_H
#define java_util_function_BiPredicate_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class BiPredicate;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class BiPredicate : public ::java::lang::Object {
       public:
        enum {
          mid_and_e6fb436bf1149ec9,
          mid_negate_26415abf5c472223,
          mid_or_e6fb436bf1149ec9,
          mid_test_3be3e90983e2a2b3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BiPredicate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BiPredicate(const BiPredicate& obj) : ::java::lang::Object(obj) {}

        BiPredicate and$(const BiPredicate &) const;
        BiPredicate negate() const;
        BiPredicate or$(const BiPredicate &) const;
        jboolean test(const ::java::lang::Object &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(BiPredicate);
      extern PyTypeObject *PY_TYPE(BiPredicate);

      class t_BiPredicate {
      public:
        PyObject_HEAD
        BiPredicate object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_BiPredicate *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BiPredicate&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BiPredicate&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
