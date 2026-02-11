#ifndef org_apache_lucene_util_BytesRefArray_H
#define org_apache_lucene_util_BytesRefArray_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
        class BytesRef;
        class BytesRefBuilder;
        class BytesRefArray$SortState;
        class BytesRefArray$IndexedBytesRefIterator;
        class BytesRefIterator;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
    namespace function {
      class IntBinaryOperator;
    }
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

        class BytesRefArray : public ::java::lang::Object {
         public:
          enum {
            mid_init$_40d8bf87115e049e,
            mid_append_7e43af883cb79fc2,
            mid_clear_3353d9f14bbfd91a,
            mid_get_a3bf7f8457b1d2ad,
            mid_iterator_9a5de514656d5195,
            mid_iterator_786bdc3d2902a857,
            mid_iterator_d1d213b1ffb23e24,
            mid_size_15aa3d485e96b665,
            mid_sort_8803a4d2e15a0229,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefArray(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefArray(const BytesRefArray& obj) : ::java::lang::Object(obj) {}

          BytesRefArray(const ::org::apache::lucene::util::Counter &);

          jint append(const ::org::apache::lucene::util::BytesRef &) const;
          void clear() const;
          ::org::apache::lucene::util::BytesRef get(const ::org::apache::lucene::util::BytesRefBuilder &, jint) const;
          ::org::apache::lucene::util::BytesRefIterator iterator() const;
          ::org::apache::lucene::util::BytesRefArray$IndexedBytesRefIterator iterator(const ::org::apache::lucene::util::BytesRefArray$SortState &) const;
          ::org::apache::lucene::util::BytesRefIterator iterator(const ::java::util::Comparator &) const;
          jint size() const;
          ::org::apache::lucene::util::BytesRefArray$SortState sort(const ::java::util::Comparator &, const ::java::util::function::IntBinaryOperator &) const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefArray);
        extern PyTypeObject *PY_TYPE(BytesRefArray);

        class t_BytesRefArray {
        public:
          PyObject_HEAD
          BytesRefArray object;
          static PyObject *wrap_Object(const BytesRefArray&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
