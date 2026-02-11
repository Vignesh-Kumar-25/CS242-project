#ifndef org_apache_lucene_search_DisiPriorityQueue_H
#define org_apache_lucene_search_DisiPriorityQueue_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DisiWrapper;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DisiPriorityQueue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_add_ddaaa74eac5d1947,
            mid_addAll_367b5e46f68cf715,
            mid_clear_3353d9f14bbfd91a,
            mid_iterator_7c74834ad8788f5d,
            mid_pop_613c6ffa547c9c6f,
            mid_size_15aa3d485e96b665,
            mid_top_613c6ffa547c9c6f,
            mid_topList_613c6ffa547c9c6f,
            mid_updateTop_613c6ffa547c9c6f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DisiPriorityQueue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DisiPriorityQueue(const DisiPriorityQueue& obj) : ::java::lang::Object(obj) {}

          DisiPriorityQueue(jint);

          ::org::apache::lucene::search::DisiWrapper add(const ::org::apache::lucene::search::DisiWrapper &) const;
          void addAll(const JArray< ::org::apache::lucene::search::DisiWrapper > &, jint, jint) const;
          void clear() const;
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::search::DisiWrapper pop() const;
          jint size() const;
          ::org::apache::lucene::search::DisiWrapper top() const;
          ::org::apache::lucene::search::DisiWrapper topList() const;
          ::org::apache::lucene::search::DisiWrapper updateTop() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(DisiPriorityQueue);
        extern PyTypeObject *PY_TYPE(DisiPriorityQueue);

        class t_DisiPriorityQueue {
        public:
          PyObject_HEAD
          DisiPriorityQueue object;
          static PyObject *wrap_Object(const DisiPriorityQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
