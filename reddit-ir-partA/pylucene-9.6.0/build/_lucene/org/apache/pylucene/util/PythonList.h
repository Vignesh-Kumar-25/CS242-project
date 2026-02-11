#ifndef org_apache_pylucene_util_PythonList_H
#define org_apache_pylucene_util_PythonList_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
    class Collection;
    class ListIterator;
  }
  namespace lang {
    class Throwable;
    class IndexOutOfBoundsException;
    class Class;
    class IllegalArgumentException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonList : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_6084f78e09b6c0c3,
            mid_add_10ea9c335f27233d,
            mid_addAll_919ee2b3f5bcb8c4,
            mid_addAll_548295e08d540f27,
            mid_clear_3353d9f14bbfd91a,
            mid_contains_6084f78e09b6c0c3,
            mid_containsAll_919ee2b3f5bcb8c4,
            mid_finalize_3353d9f14bbfd91a,
            mid_get_5eabe496ef99f2e4,
            mid_indexOf_cc82b01b9199bc71,
            mid_isEmpty_ee8b0a5fa521ddac,
            mid_iterator_7c74834ad8788f5d,
            mid_lastIndexOf_cc82b01b9199bc71,
            mid_listIterator_093c1a9d11b7fcb9,
            mid_listIterator_75e76a2296f6fa62,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            mid_remove_5eabe496ef99f2e4,
            mid_remove_6084f78e09b6c0c3,
            mid_removeAll_919ee2b3f5bcb8c4,
            mid_retainAll_919ee2b3f5bcb8c4,
            mid_set_96426eb36328f909,
            mid_size_15aa3d485e96b665,
            mid_subList_4e354260301a5b61,
            mid_toArray_c2c4aa8d9e7500a9,
            mid_toArray_a53302d2d48784e1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonList(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonList(const PythonList& obj) : ::java::lang::Object(obj) {}

          PythonList();

          jboolean add(const ::java::lang::Object &) const;
          void add(jint, const ::java::lang::Object &) const;
          jboolean addAll(const ::java::util::Collection &) const;
          jboolean addAll(jint, const ::java::util::Collection &) const;
          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean containsAll(const ::java::util::Collection &) const;
          void finalize() const;
          ::java::lang::Object get(jint) const;
          jint indexOf(const ::java::lang::Object &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator iterator() const;
          jint lastIndexOf(const ::java::lang::Object &) const;
          ::java::util::ListIterator listIterator() const;
          ::java::util::ListIterator listIterator(jint) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::java::lang::Object remove(jint) const;
          jboolean remove(const ::java::lang::Object &) const;
          jboolean removeAll(const ::java::util::Collection &) const;
          jboolean retainAll(const ::java::util::Collection &) const;
          ::java::lang::Object set(jint, const ::java::lang::Object &) const;
          jint size() const;
          ::java::util::List subList(jint, jint) const;
          JArray< ::java::lang::Object > toArray() const;
          JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PythonList);
        extern PyTypeObject *PY_TYPE(PythonList);

        class t_PythonList {
        public:
          PyObject_HEAD
          PythonList object;
          static PyObject *wrap_Object(const PythonList&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
