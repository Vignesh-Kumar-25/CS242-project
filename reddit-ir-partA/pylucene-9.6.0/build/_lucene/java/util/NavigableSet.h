#ifndef java_util_NavigableSet_H
#define java_util_NavigableSet_H

#include "java/util/SortedSet.h"

namespace java {
  namespace util {
    class Iterator;
    class NavigableSet;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NavigableSet : public ::java::util::SortedSet {
     public:
      enum {
        mid_ceiling_73b517fb00cf5d09,
        mid_descendingIterator_7c74834ad8788f5d,
        mid_descendingSet_c3d69eb61b7326e1,
        mid_floor_73b517fb00cf5d09,
        mid_headSet_6412d22ba022e9b2,
        mid_headSet_0bbfb91b42e4da59,
        mid_higher_73b517fb00cf5d09,
        mid_iterator_7c74834ad8788f5d,
        mid_lower_73b517fb00cf5d09,
        mid_pollFirst_bdd51648087bae52,
        mid_pollLast_bdd51648087bae52,
        mid_subSet_4e80163bd5aba454,
        mid_subSet_9ee999497425c451,
        mid_tailSet_6412d22ba022e9b2,
        mid_tailSet_0bbfb91b42e4da59,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NavigableSet(jobject obj) : ::java::util::SortedSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NavigableSet(const NavigableSet& obj) : ::java::util::SortedSet(obj) {}

      ::java::lang::Object ceiling(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      NavigableSet descendingSet() const;
      ::java::lang::Object floor(const ::java::lang::Object &) const;
      ::java::util::SortedSet headSet(const ::java::lang::Object &) const;
      NavigableSet headSet(const ::java::lang::Object &, jboolean) const;
      ::java::lang::Object higher(const ::java::lang::Object &) const;
      ::java::util::Iterator iterator() const;
      ::java::lang::Object lower(const ::java::lang::Object &) const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::util::SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      NavigableSet subSet(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedSet tailSet(const ::java::lang::Object &) const;
      NavigableSet tailSet(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NavigableSet);
    extern PyTypeObject *PY_TYPE(NavigableSet);

    class t_NavigableSet {
    public:
      PyObject_HEAD
      NavigableSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_NavigableSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const NavigableSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const NavigableSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
