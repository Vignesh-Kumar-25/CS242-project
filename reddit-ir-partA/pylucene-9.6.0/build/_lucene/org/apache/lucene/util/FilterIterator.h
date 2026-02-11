#ifndef org_apache_lucene_util_FilterIterator_H
#define org_apache_lucene_util_FilterIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
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

        class FilterIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d76c519fd0adbfd7,
            mid_hasNext_ee8b0a5fa521ddac,
            mid_next_bdd51648087bae52,
            mid_remove_3353d9f14bbfd91a,
            mid_predicateFunction_6084f78e09b6c0c3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterIterator(const FilterIterator& obj) : ::java::lang::Object(obj) {}

          FilterIterator(const ::java::util::Iterator &);

          jboolean hasNext() const;
          ::java::lang::Object next() const;
          void remove() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterIterator);
        extern PyTypeObject *PY_TYPE(FilterIterator);

        class t_FilterIterator {
        public:
          PyObject_HEAD
          FilterIterator object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FilterIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterIterator&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
