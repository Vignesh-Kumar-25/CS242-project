#ifndef org_apache_lucene_util_hppc_IntIntHashMap$AbstractIterator_H
#define org_apache_lucene_util_hppc_IntIntHashMap$AbstractIterator_H

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
        namespace hppc {

          class IntIntHashMap$AbstractIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_hasNext_ee8b0a5fa521ddac,
              mid_next_bdd51648087bae52,
              mid_remove_3353d9f14bbfd91a,
              mid_fetch_bdd51648087bae52,
              mid_done_bdd51648087bae52,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntIntHashMap$AbstractIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntIntHashMap$AbstractIterator(const IntIntHashMap$AbstractIterator& obj) : ::java::lang::Object(obj) {}

            IntIntHashMap$AbstractIterator();

            jboolean hasNext() const;
            ::java::lang::Object next() const;
            void remove() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hppc {
          extern PyType_Def PY_TYPE_DEF(IntIntHashMap$AbstractIterator);
          extern PyTypeObject *PY_TYPE(IntIntHashMap$AbstractIterator);

          class t_IntIntHashMap$AbstractIterator {
          public:
            PyObject_HEAD
            IntIntHashMap$AbstractIterator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntIntHashMap$AbstractIterator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntIntHashMap$AbstractIterator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntIntHashMap$AbstractIterator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
