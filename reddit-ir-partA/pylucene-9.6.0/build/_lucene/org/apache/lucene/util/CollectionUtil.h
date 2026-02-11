#ifndef org_apache_lucene_util_CollectionUtil_H
#define org_apache_lucene_util_CollectionUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class List;
    class HashSet;
    class HashMap;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CollectionUtil : public ::java::lang::Object {
         public:
          enum {
            mid_introSort_1a2e28000748bc88,
            mid_introSort_bb414f0176db51cc,
            mid_newHashMap_725f7bbe8fccc94f,
            mid_newHashSet_46bb23bccabb1c12,
            mid_timSort_1a2e28000748bc88,
            mid_timSort_bb414f0176db51cc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollectionUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollectionUtil(const CollectionUtil& obj) : ::java::lang::Object(obj) {}

          static void introSort(const ::java::util::List &);
          static void introSort(const ::java::util::List &, const ::java::util::Comparator &);
          static ::java::util::HashMap newHashMap(jint);
          static ::java::util::HashSet newHashSet(jint);
          static void timSort(const ::java::util::List &);
          static void timSort(const ::java::util::List &, const ::java::util::Comparator &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(CollectionUtil);
        extern PyTypeObject *PY_TYPE(CollectionUtil);

        class t_CollectionUtil {
        public:
          PyObject_HEAD
          CollectionUtil object;
          static PyObject *wrap_Object(const CollectionUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
