#ifndef java_util_Deque_H
#define java_util_Deque_H

#include "java/util/Queue.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Deque : public ::java::util::Queue {
     public:
      enum {
        mid_add_6084f78e09b6c0c3,
        mid_addAll_919ee2b3f5bcb8c4,
        mid_addFirst_301632c741f5d054,
        mid_addLast_301632c741f5d054,
        mid_contains_6084f78e09b6c0c3,
        mid_descendingIterator_7c74834ad8788f5d,
        mid_element_bdd51648087bae52,
        mid_getFirst_bdd51648087bae52,
        mid_getLast_bdd51648087bae52,
        mid_iterator_7c74834ad8788f5d,
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
        mid_remove_6084f78e09b6c0c3,
        mid_removeFirst_bdd51648087bae52,
        mid_removeFirstOccurrence_6084f78e09b6c0c3,
        mid_removeLast_bdd51648087bae52,
        mid_removeLastOccurrence_6084f78e09b6c0c3,
        mid_size_15aa3d485e96b665,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Deque(jobject obj) : ::java::util::Queue(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Deque(const Deque& obj) : ::java::util::Queue(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      ::java::util::Iterator iterator() const;
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
      jboolean remove(const ::java::lang::Object &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      jint size() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Deque);
    extern PyTypeObject *PY_TYPE(Deque);

    class t_Deque {
    public:
      PyObject_HEAD
      Deque object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Deque *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Deque&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Deque&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
