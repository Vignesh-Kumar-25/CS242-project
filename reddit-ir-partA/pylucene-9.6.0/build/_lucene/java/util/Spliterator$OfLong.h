#ifndef java_util_Spliterator$OfLong_H
#define java_util_Spliterator$OfLong_H

#include "java/util/Spliterator$OfPrimitive.h"

namespace java {
  namespace util {
    class Spliterator$OfLong;
    namespace function {
      class LongConsumer;
      class Consumer;
    }
  }
  namespace lang {
    class Class;
    class Long;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator$OfLong : public ::java::util::Spliterator$OfPrimitive {
     public:
      enum {
        mid_forEachRemaining_dbb62ace2cd40418,
        mid_forEachRemaining_7f732e4ea8b8b51e,
        mid_tryAdvance_dd5977fe715f99ab,
        mid_tryAdvance_a475cd68910a93d7,
        mid_trySplit_4234195d101eaa99,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator$OfLong(jobject obj) : ::java::util::Spliterator$OfPrimitive(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator$OfLong(const Spliterator$OfLong& obj) : ::java::util::Spliterator$OfPrimitive(obj) {}

      void forEachRemaining(const ::java::util::function::Consumer &) const;
      void forEachRemaining(const ::java::util::function::LongConsumer &) const;
      jboolean tryAdvance(const ::java::util::function::Consumer &) const;
      jboolean tryAdvance(const ::java::util::function::LongConsumer &) const;
      Spliterator$OfLong trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator$OfLong);
    extern PyTypeObject *PY_TYPE(Spliterator$OfLong);

    class t_Spliterator$OfLong {
    public:
      PyObject_HEAD
      Spliterator$OfLong object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator$OfLong *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator$OfLong&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator$OfLong&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
