#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Random;
    class SortedMap;
    class Set;
    class ArrayList;
    class Map;
    class ListIterator;
    class Deque;
    class Queue;
    class Comparator;
    class NavigableMap;
    class SortedSet;
    class Enumeration;
    class NavigableSet;
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
    class Comparable;
    class Boolean;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Collections : public ::java::lang::Object {
     public:
      enum {
        mid_addAll_9201018069a230cc,
        mid_asLifoQueue_dfb9ffad9ce1c47f,
        mid_binarySearch_fc45d76920c36676,
        mid_binarySearch_e76fca2d8792674c,
        mid_checkedCollection_96756a267d8cb8e3,
        mid_checkedList_e984575072ffc2fa,
        mid_checkedMap_2ea58e64d33773b5,
        mid_checkedNavigableMap_8ffe925258d17205,
        mid_checkedNavigableSet_251438d8b3fcdf59,
        mid_checkedQueue_b893d3c6028d97b9,
        mid_checkedSet_53a3167176602a57,
        mid_checkedSortedMap_09bf96839186ecaa,
        mid_checkedSortedSet_b80f133fc639bdb2,
        mid_copy_ee305be0f744cdd8,
        mid_disjoint_7dc090d1995a8198,
        mid_emptyEnumeration_1c290dc3d4f44086,
        mid_emptyIterator_7c74834ad8788f5d,
        mid_emptyList_0bc66e960964b70a,
        mid_emptyListIterator_093c1a9d11b7fcb9,
        mid_emptyMap_19f838df22aacf85,
        mid_emptyNavigableMap_cee7d7942e16aea5,
        mid_emptyNavigableSet_c3d69eb61b7326e1,
        mid_emptySet_9a625d56b67c7390,
        mid_emptySortedMap_eb819dd2ad7d7aeb,
        mid_emptySortedSet_c91dd9b660f98fa4,
        mid_enumeration_2c1cda4e6e607286,
        mid_fill_1a91d2554a0415c6,
        mid_frequency_c02d35e11aebf728,
        mid_indexOfSubList_d922f93fdbe60ce8,
        mid_lastIndexOfSubList_d922f93fdbe60ce8,
        mid_list_f345adba21f05f9f,
        mid_max_9bbfabe1405115fd,
        mid_max_08296a75685b0a56,
        mid_min_9bbfabe1405115fd,
        mid_min_08296a75685b0a56,
        mid_nCopies_6f15968926acb5e6,
        mid_newSetFromMap_1939d1c4bb0e3494,
        mid_replaceAll_d61a6ca45aa7d970,
        mid_reverse_1a2e28000748bc88,
        mid_reverseOrder_bfaba219acee2aff,
        mid_reverseOrder_af8e11d3c2101e29,
        mid_rotate_aa3e142129ac3f13,
        mid_shuffle_1a2e28000748bc88,
        mid_shuffle_0de4099e37a91e49,
        mid_singleton_8e756097142bfedf,
        mid_singletonList_83cc0b535f4a8147,
        mid_singletonMap_a49d6547f3eec9e8,
        mid_sort_1a2e28000748bc88,
        mid_sort_bb414f0176db51cc,
        mid_swap_4e62c6d0517be0b4,
        mid_synchronizedCollection_a2164aa0aac084b2,
        mid_synchronizedList_8cdc94b2f26ee964,
        mid_synchronizedMap_43958a43363a29fb,
        mid_synchronizedNavigableMap_42903c8c041eb61b,
        mid_synchronizedNavigableSet_91677cc568e5cc80,
        mid_synchronizedSet_bcfcb7f54f16fa35,
        mid_synchronizedSortedMap_86bfb16d52e5b2c8,
        mid_synchronizedSortedSet_665dced4804b9bca,
        mid_unmodifiableCollection_a2164aa0aac084b2,
        mid_unmodifiableList_8cdc94b2f26ee964,
        mid_unmodifiableMap_43958a43363a29fb,
        mid_unmodifiableNavigableMap_42903c8c041eb61b,
        mid_unmodifiableNavigableSet_91677cc568e5cc80,
        mid_unmodifiableSet_bcfcb7f54f16fa35,
        mid_unmodifiableSortedMap_86bfb16d52e5b2c8,
        mid_unmodifiableSortedSet_665dced4804b9bca,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collections(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collections(const Collections& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List *EMPTY_LIST;
      static ::java::util::Map *EMPTY_MAP;
      static ::java::util::Set *EMPTY_SET;

      static jboolean addAll(const ::java::util::Collection &, const JArray< ::java::lang::Object > &);
      static ::java::util::Queue asLifoQueue(const ::java::util::Deque &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static ::java::util::Collection checkedCollection(const ::java::util::Collection &, const ::java::lang::Class &);
      static ::java::util::List checkedList(const ::java::util::List &, const ::java::lang::Class &);
      static ::java::util::Map checkedMap(const ::java::util::Map &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::NavigableMap checkedNavigableMap(const ::java::util::NavigableMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::NavigableSet checkedNavigableSet(const ::java::util::NavigableSet &, const ::java::lang::Class &);
      static ::java::util::Queue checkedQueue(const ::java::util::Queue &, const ::java::lang::Class &);
      static ::java::util::Set checkedSet(const ::java::util::Set &, const ::java::lang::Class &);
      static ::java::util::SortedMap checkedSortedMap(const ::java::util::SortedMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::SortedSet checkedSortedSet(const ::java::util::SortedSet &, const ::java::lang::Class &);
      static void copy(const ::java::util::List &, const ::java::util::List &);
      static jboolean disjoint(const ::java::util::Collection &, const ::java::util::Collection &);
      static ::java::util::Enumeration emptyEnumeration();
      static ::java::util::Iterator emptyIterator();
      static ::java::util::List emptyList();
      static ::java::util::ListIterator emptyListIterator();
      static ::java::util::Map emptyMap();
      static ::java::util::NavigableMap emptyNavigableMap();
      static ::java::util::NavigableSet emptyNavigableSet();
      static ::java::util::Set emptySet();
      static ::java::util::SortedMap emptySortedMap();
      static ::java::util::SortedSet emptySortedSet();
      static ::java::util::Enumeration enumeration(const ::java::util::Collection &);
      static void fill(const ::java::util::List &, const ::java::lang::Object &);
      static jint frequency(const ::java::util::Collection &, const ::java::lang::Object &);
      static jint indexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static jint lastIndexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static ::java::util::ArrayList list(const ::java::util::Enumeration &);
      static ::java::lang::Object max$(const ::java::util::Collection &);
      static ::java::lang::Object max$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::lang::Object min$(const ::java::util::Collection &);
      static ::java::lang::Object min$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::util::List nCopies(jint, const ::java::lang::Object &);
      static ::java::util::Set newSetFromMap(const ::java::util::Map &);
      static jboolean replaceAll(const ::java::util::List &, const ::java::lang::Object &, const ::java::lang::Object &);
      static void reverse(const ::java::util::List &);
      static ::java::util::Comparator reverseOrder();
      static ::java::util::Comparator reverseOrder(const ::java::util::Comparator &);
      static void rotate(const ::java::util::List &, jint);
      static void shuffle(const ::java::util::List &);
      static void shuffle(const ::java::util::List &, const ::java::util::Random &);
      static ::java::util::Set singleton(const ::java::lang::Object &);
      static ::java::util::List singletonList(const ::java::lang::Object &);
      static ::java::util::Map singletonMap(const ::java::lang::Object &, const ::java::lang::Object &);
      static void sort(const ::java::util::List &);
      static void sort(const ::java::util::List &, const ::java::util::Comparator &);
      static void swap(const ::java::util::List &, jint, jint);
      static ::java::util::Collection synchronizedCollection(const ::java::util::Collection &);
      static ::java::util::List synchronizedList(const ::java::util::List &);
      static ::java::util::Map synchronizedMap(const ::java::util::Map &);
      static ::java::util::NavigableMap synchronizedNavigableMap(const ::java::util::NavigableMap &);
      static ::java::util::NavigableSet synchronizedNavigableSet(const ::java::util::NavigableSet &);
      static ::java::util::Set synchronizedSet(const ::java::util::Set &);
      static ::java::util::SortedMap synchronizedSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet synchronizedSortedSet(const ::java::util::SortedSet &);
      static ::java::util::Collection unmodifiableCollection(const ::java::util::Collection &);
      static ::java::util::List unmodifiableList(const ::java::util::List &);
      static ::java::util::Map unmodifiableMap(const ::java::util::Map &);
      static ::java::util::NavigableMap unmodifiableNavigableMap(const ::java::util::NavigableMap &);
      static ::java::util::NavigableSet unmodifiableNavigableSet(const ::java::util::NavigableSet &);
      static ::java::util::Set unmodifiableSet(const ::java::util::Set &);
      static ::java::util::SortedMap unmodifiableSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet unmodifiableSortedSet(const ::java::util::SortedSet &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Collections);
    extern PyTypeObject *PY_TYPE(Collections);

    class t_Collections {
    public:
      PyObject_HEAD
      Collections object;
      static PyObject *wrap_Object(const Collections&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
