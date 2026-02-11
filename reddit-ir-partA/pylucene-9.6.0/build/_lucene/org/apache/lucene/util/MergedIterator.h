#ifndef org_apache_lucene_util_MergedIterator_H
#define org_apache_lucene_util_MergedIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class MergedIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_333465b0beb5b52e,
            mid_init$_0fde9727bacbece7,
            mid_hasNext_ee8b0a5fa521ddac,
            mid_next_a6749beb1ef6259a,
            mid_remove_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergedIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergedIterator(const MergedIterator& obj) : ::java::lang::Object(obj) {}

          MergedIterator(const JArray< ::java::util::Iterator > &);
          MergedIterator(jboolean, const JArray< ::java::util::Iterator > &);

          jboolean hasNext() const;
          ::java::lang::Comparable next() const;
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
        extern PyType_Def PY_TYPE_DEF(MergedIterator);
        extern PyTypeObject *PY_TYPE(MergedIterator);

        class t_MergedIterator {
        public:
          PyObject_HEAD
          MergedIterator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MergedIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MergedIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MergedIterator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
