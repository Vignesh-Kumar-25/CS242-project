#ifndef java_util_LinkedList_H
#define java_util_LinkedList_H

#include "java/util/AbstractSequentialList.h"

namespace java {
  namespace util {
    class Iterator;
    class Spliterator;
    class Collection;
    class ListIterator;
    class Deque;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class Object;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class LinkedList : public ::java::util::AbstractSequentialList {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_568dc3e0933a89e8,
        mid_add_6084f78e09b6c0c3,
        mid_add_10ea9c335f27233d,
        mid_addAll_919ee2b3f5bcb8c4,
        mid_addAll_548295e08d540f27,
        mid_addFirst_301632c741f5d054,
        mid_addLast_301632c741f5d054,
        mid_clear_3353d9f14bbfd91a,
        mid_clone_bdd51648087bae52,
        mid_contains_6084f78e09b6c0c3,
        mid_descendingIterator_7c74834ad8788f5d,
        mid_element_bdd51648087bae52,
        mid_get_5eabe496ef99f2e4,
        mid_getFirst_bdd51648087bae52,
        mid_getLast_bdd51648087bae52,
        mid_indexOf_cc82b01b9199bc71,
        mid_lastIndexOf_cc82b01b9199bc71,
        mid_listIterator_75e76a2296f6fa62,
        mid_offer_6084f78e09b6c0c3,
        mid_offerFirst_6084f78e09b6c0c3,
        mid_offerLast_6084f78e09b6c0c3,
        mid_peek_bdd51648087bae52,
        mid_peekFirst_bdd51648087bae52,
        mid_peekLast_bdd51648087bae52,
        mid_poll_bdd51648087bae52,
        mid_pollFirst_bdd51648087bae52,
        mid_pollLast_bdd51648087bae52,
        mid_pop_bdd51648087bae52,
        mid_push_301632c741f5d054,
        mid_remove_bdd51648087bae52,
        mid_remove_5eabe496ef99f2e4,
        mid_remove_6084f78e09b6c0c3,
        mid_removeFirst_bdd51648087bae52,
        mid_removeFirstOccurrence_6084f78e09b6c0c3,
        mid_removeLast_bdd51648087bae52,
        mid_removeLastOccurrence_6084f78e09b6c0c3,
        mid_set_96426eb36328f909,
        mid_size_15aa3d485e96b665,
        mid_spliterator_9d52fb5abff5008d,
        mid_toArray_c2c4aa8d9e7500a9,
        mid_toArray_a53302d2d48784e1,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit LinkedList(jobject obj) : ::java::util::AbstractSequentialList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      LinkedList(const LinkedList& obj) : ::java::util::AbstractSequentialList(obj) {}

      LinkedList();
      LinkedList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object get(jint) const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      jint indexOf(const ::java::lang::Object &) const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator(jint) const;
      jboolean offer(const ::java::lang::Object &) const;
      jboolean offerFirst(const ::java::lang::Object &) const;
      jboolean offerLast(const ::java::lang::Object &) const;
      ::java::lang::Object peek() const;
      ::java::lang::Object peekFirst() const;
      ::java::lang::Object peekLast() const;
      ::java::lang::Object poll() const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::lang::Object pop() const;
      void push(const ::java::lang::Object &) const;
      ::java::lang::Object remove() const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(LinkedList);
    extern PyTypeObject *PY_TYPE(LinkedList);

    class t_LinkedList {
    public:
      PyObject_HEAD
      LinkedList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_LinkedList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const LinkedList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const LinkedList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
