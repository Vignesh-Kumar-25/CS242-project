#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class Consumer;
      class UnaryOperator;
      class Predicate;
    }
    class List;
    class Comparator;
    class Spliterator;
    class Collection;
    class ListIterator;
    class RandomAccess;
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

    class ArrayList : public ::java::util::AbstractList {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_da425451c8de636b,
        mid_init$_568dc3e0933a89e8,
        mid_add_6084f78e09b6c0c3,
        mid_add_10ea9c335f27233d,
        mid_addAll_919ee2b3f5bcb8c4,
        mid_addAll_548295e08d540f27,
        mid_clear_3353d9f14bbfd91a,
        mid_clone_bdd51648087bae52,
        mid_contains_6084f78e09b6c0c3,
        mid_ensureCapacity_da425451c8de636b,
        mid_equals_6084f78e09b6c0c3,
        mid_forEach_dbb62ace2cd40418,
        mid_get_5eabe496ef99f2e4,
        mid_hashCode_15aa3d485e96b665,
        mid_indexOf_cc82b01b9199bc71,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_iterator_7c74834ad8788f5d,
        mid_lastIndexOf_cc82b01b9199bc71,
        mid_listIterator_093c1a9d11b7fcb9,
        mid_listIterator_75e76a2296f6fa62,
        mid_remove_5eabe496ef99f2e4,
        mid_remove_6084f78e09b6c0c3,
        mid_removeAll_919ee2b3f5bcb8c4,
        mid_removeIf_c111ccc7b4bec38e,
        mid_replaceAll_0112a1d6e433d24b,
        mid_retainAll_919ee2b3f5bcb8c4,
        mid_set_96426eb36328f909,
        mid_size_15aa3d485e96b665,
        mid_sort_8c65a0cb749b75d3,
        mid_spliterator_9d52fb5abff5008d,
        mid_subList_4e354260301a5b61,
        mid_toArray_c2c4aa8d9e7500a9,
        mid_toArray_a53302d2d48784e1,
        mid_trimToSize_3353d9f14bbfd91a,
        mid_removeRange_078cef180abf5351,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ArrayList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ArrayList(const ArrayList& obj) : ::java::util::AbstractList(obj) {}

      ArrayList();
      ArrayList(jint);
      ArrayList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      void ensureCapacity(jint) const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::Consumer &) const;
      ::java::lang::Object get(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean removeIf(const ::java::util::function::Predicate &) const;
      void replaceAll(const ::java::util::function::UnaryOperator &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      void sort(const ::java::util::Comparator &) const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ArrayList);
    extern PyTypeObject *PY_TYPE(ArrayList);

    class t_ArrayList {
    public:
      PyObject_HEAD
      ArrayList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ArrayList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ArrayList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ArrayList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
