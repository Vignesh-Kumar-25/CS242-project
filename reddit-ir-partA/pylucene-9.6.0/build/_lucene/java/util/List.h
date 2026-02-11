#ifndef java_util_List_H
#define java_util_List_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    namespace function {
      class UnaryOperator;
    }
    class List;
    class Spliterator;
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

    class List : public ::java::util::Collection {
     public:
      enum {
        mid_add_6084f78e09b6c0c3,
        mid_add_10ea9c335f27233d,
        mid_addAll_919ee2b3f5bcb8c4,
        mid_addAll_548295e08d540f27,
        mid_clear_3353d9f14bbfd91a,
        mid_contains_6084f78e09b6c0c3,
        mid_containsAll_919ee2b3f5bcb8c4,
        mid_copyOf_25ff872192038686,
        mid_equals_6084f78e09b6c0c3,
        mid_get_5eabe496ef99f2e4,
        mid_hashCode_15aa3d485e96b665,
        mid_indexOf_cc82b01b9199bc71,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_iterator_7c74834ad8788f5d,
        mid_lastIndexOf_cc82b01b9199bc71,
        mid_listIterator_093c1a9d11b7fcb9,
        mid_listIterator_75e76a2296f6fa62,
        mid_of_0bc66e960964b70a,
        mid_of_82453859a0e984ab,
        mid_of_83cc0b535f4a8147,
        mid_of_dcc396dbe29b60ae,
        mid_of_57408690b0db84d2,
        mid_of_e434baaaa9c09115,
        mid_of_6d28707e3c1cb19d,
        mid_of_32c5c5d7af28da68,
        mid_of_81d33575eaf954bf,
        mid_of_fa9a9c5f825fc965,
        mid_of_9bffad0e8be3b2db,
        mid_of_e43cb067fe8996c7,
        mid_remove_5eabe496ef99f2e4,
        mid_remove_6084f78e09b6c0c3,
        mid_removeAll_919ee2b3f5bcb8c4,
        mid_replaceAll_0112a1d6e433d24b,
        mid_retainAll_919ee2b3f5bcb8c4,
        mid_set_96426eb36328f909,
        mid_size_15aa3d485e96b665,
        mid_sort_8c65a0cb749b75d3,
        mid_spliterator_9d52fb5abff5008d,
        mid_subList_4e354260301a5b61,
        mid_toArray_c2c4aa8d9e7500a9,
        mid_toArray_a53302d2d48784e1,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit List(jobject obj) : ::java::util::Collection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      List(const List& obj) : ::java::util::Collection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      static List copyOf(const ::java::util::Collection &);
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      static List of();
      static List of(const JArray< ::java::lang::Object > &);
      static List of(const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      void replaceAll(const ::java::util::function::UnaryOperator &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      void sort(const ::java::util::Comparator &) const;
      ::java::util::Spliterator spliterator() const;
      List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(List);
    extern PyTypeObject *PY_TYPE(List);

    class t_List {
    public:
      PyObject_HEAD
      List object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_List *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const List&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const List&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
