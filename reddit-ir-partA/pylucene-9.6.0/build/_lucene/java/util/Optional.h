#ifndef java_util_Optional_H
#define java_util_Optional_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Throwable;
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class Supplier;
      class Predicate;
      class Function;
      class Consumer;
    }
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Optional : public ::java::lang::Object {
     public:
      enum {
        mid_empty_c93856a18dee0470,
        mid_equals_6084f78e09b6c0c3,
        mid_filter_1abda9ef5a1952db,
        mid_flatMap_e5792e80ea28d81f,
        mid_get_bdd51648087bae52,
        mid_hashCode_15aa3d485e96b665,
        mid_ifPresent_dbb62ace2cd40418,
        mid_ifPresentOrElse_a8e376cb185c9fd6,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_isPresent_ee8b0a5fa521ddac,
        mid_map_e5792e80ea28d81f,
        mid_of_3ea806b8c2b5c8ab,
        mid_ofNullable_3ea806b8c2b5c8ab,
        mid_or_6c7894b20ca8f393,
        mid_orElse_73b517fb00cf5d09,
        mid_orElseGet_36e35d8091c247e9,
        mid_orElseThrow_bdd51648087bae52,
        mid_orElseThrow_36e35d8091c247e9,
        mid_toString_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Optional(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Optional(const Optional& obj) : ::java::lang::Object(obj) {}

      static Optional empty();
      jboolean equals(const ::java::lang::Object &) const;
      Optional filter(const ::java::util::function::Predicate &) const;
      Optional flatMap(const ::java::util::function::Function &) const;
      ::java::lang::Object get() const;
      jint hashCode() const;
      void ifPresent(const ::java::util::function::Consumer &) const;
      void ifPresentOrElse(const ::java::util::function::Consumer &, const ::java::lang::Runnable &) const;
      jboolean isEmpty() const;
      jboolean isPresent() const;
      Optional map(const ::java::util::function::Function &) const;
      static Optional of(const ::java::lang::Object &);
      static Optional ofNullable(const ::java::lang::Object &);
      Optional or$(const ::java::util::function::Supplier &) const;
      ::java::lang::Object orElse(const ::java::lang::Object &) const;
      ::java::lang::Object orElseGet(const ::java::util::function::Supplier &) const;
      ::java::lang::Object orElseThrow() const;
      ::java::lang::Object orElseThrow(const ::java::util::function::Supplier &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Optional);
    extern PyTypeObject *PY_TYPE(Optional);

    class t_Optional {
    public:
      PyObject_HEAD
      Optional object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Optional *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Optional&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Optional&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
