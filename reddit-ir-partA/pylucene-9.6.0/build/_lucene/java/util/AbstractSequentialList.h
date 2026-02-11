#ifndef java_util_AbstractSequentialList_H
#define java_util_AbstractSequentialList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class ListIterator;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractSequentialList : public ::java::util::AbstractList {
     public:
      enum {
        mid_add_10ea9c335f27233d,
        mid_addAll_548295e08d540f27,
        mid_get_5eabe496ef99f2e4,
        mid_iterator_7c74834ad8788f5d,
        mid_listIterator_75e76a2296f6fa62,
        mid_remove_5eabe496ef99f2e4,
        mid_set_96426eb36328f909,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractSequentialList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractSequentialList(const AbstractSequentialList& obj) : ::java::util::AbstractList(obj) {}

      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      ::java::lang::Object get(jint) const;
      ::java::util::Iterator iterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractSequentialList);
    extern PyTypeObject *PY_TYPE(AbstractSequentialList);

    class t_AbstractSequentialList {
    public:
      PyObject_HEAD
      AbstractSequentialList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractSequentialList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractSequentialList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractSequentialList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
