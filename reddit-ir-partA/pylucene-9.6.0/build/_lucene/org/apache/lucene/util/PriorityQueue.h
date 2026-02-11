#ifndef org_apache_lucene_util_PriorityQueue_H
#define org_apache_lucene_util_PriorityQueue_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class Supplier;
    }
    class Collection;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PriorityQueue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_init$_d3aa5604a0b87476,
            mid_add_73b517fb00cf5d09,
            mid_addAll_568dc3e0933a89e8,
            mid_clear_3353d9f14bbfd91a,
            mid_insertWithOverflow_73b517fb00cf5d09,
            mid_iterator_7c74834ad8788f5d,
            mid_pop_bdd51648087bae52,
            mid_remove_6084f78e09b6c0c3,
            mid_size_15aa3d485e96b665,
            mid_top_bdd51648087bae52,
            mid_updateTop_bdd51648087bae52,
            mid_updateTop_73b517fb00cf5d09,
            mid_lessThan_3be3e90983e2a2b3,
            mid_getHeapArray_c2c4aa8d9e7500a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PriorityQueue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PriorityQueue(const PriorityQueue& obj) : ::java::lang::Object(obj) {}

          PriorityQueue(jint);
          PriorityQueue(jint, const ::java::util::function::Supplier &);

          ::java::lang::Object add(const ::java::lang::Object &) const;
          void addAll(const ::java::util::Collection &) const;
          void clear() const;
          ::java::lang::Object insertWithOverflow(const ::java::lang::Object &) const;
          ::java::util::Iterator iterator() const;
          ::java::lang::Object pop() const;
          jboolean remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::lang::Object top() const;
          ::java::lang::Object updateTop() const;
          ::java::lang::Object updateTop(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(PriorityQueue);
        extern PyTypeObject *PY_TYPE(PriorityQueue);

        class t_PriorityQueue {
        public:
          PyObject_HEAD
          PriorityQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PriorityQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PriorityQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PriorityQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
