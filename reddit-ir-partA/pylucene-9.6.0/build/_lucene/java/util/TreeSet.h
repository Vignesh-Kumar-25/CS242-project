#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class NavigableSet;
    class Iterator;
    class Comparator;
    class Spliterator;
    class Collection;
    class SortedSet;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Object;
    class Cloneable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class TreeSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_568dc3e0933a89e8,
        mid_init$_8c65a0cb749b75d3,
        mid_init$_2396921e62c21b8c,
        mid_add_6084f78e09b6c0c3,
        mid_addAll_919ee2b3f5bcb8c4,
        mid_ceiling_73b517fb00cf5d09,
        mid_clear_3353d9f14bbfd91a,
        mid_clone_bdd51648087bae52,
        mid_comparator_bfaba219acee2aff,
        mid_contains_6084f78e09b6c0c3,
        mid_descendingIterator_7c74834ad8788f5d,
        mid_descendingSet_c3d69eb61b7326e1,
        mid_first_bdd51648087bae52,
        mid_floor_73b517fb00cf5d09,
        mid_headSet_6412d22ba022e9b2,
        mid_headSet_0bbfb91b42e4da59,
        mid_higher_73b517fb00cf5d09,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_iterator_7c74834ad8788f5d,
        mid_last_bdd51648087bae52,
        mid_lower_73b517fb00cf5d09,
        mid_pollFirst_bdd51648087bae52,
        mid_pollLast_bdd51648087bae52,
        mid_remove_6084f78e09b6c0c3,
        mid_size_15aa3d485e96b665,
        mid_spliterator_9d52fb5abff5008d,
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

      explicit TreeSet(jobject obj) : ::java::util::AbstractSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      TreeSet(const TreeSet& obj) : ::java::util::AbstractSet(obj) {}

      TreeSet();
      TreeSet(const ::java::util::Collection &);
      TreeSet(const ::java::util::Comparator &);
      TreeSet(const ::java::util::SortedSet &);

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      ::java::lang::Object ceiling(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      ::java::util::Comparator comparator() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::util::NavigableSet descendingSet() const;
      ::java::lang::Object first() const;
      ::java::lang::Object floor(const ::java::lang::Object &) const;
      ::java::util::SortedSet headSet(const ::java::lang::Object &) const;
      ::java::util::NavigableSet headSet(const ::java::lang::Object &, jboolean) const;
      ::java::lang::Object higher(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      ::java::lang::Object last() const;
      ::java::lang::Object lower(const ::java::lang::Object &) const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      jboolean remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::util::NavigableSet subSet(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedSet tailSet(const ::java::lang::Object &) const;
      ::java::util::NavigableSet tailSet(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(TreeSet);
    extern PyTypeObject *PY_TYPE(TreeSet);

    class t_TreeSet {
    public:
      PyObject_HEAD
      TreeSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_TreeSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const TreeSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const TreeSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
