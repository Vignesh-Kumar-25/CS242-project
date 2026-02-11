#ifndef org_apache_pylucene_util_PythonListIterator_H
#define org_apache_pylucene_util_PythonListIterator_H

#include "org/apache/pylucene/util/PythonIterator.h"

namespace java {
  namespace util {
    class ListIterator;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonListIterator : public ::org::apache::pylucene::util::PythonIterator {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_301632c741f5d054,
            mid_hasPrevious_ee8b0a5fa521ddac,
            mid_nextIndex_15aa3d485e96b665,
            mid_previous_bdd51648087bae52,
            mid_previousIndex_15aa3d485e96b665,
            mid_remove_3353d9f14bbfd91a,
            mid_set_301632c741f5d054,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonListIterator(jobject obj) : ::org::apache::pylucene::util::PythonIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonListIterator(const PythonListIterator& obj) : ::org::apache::pylucene::util::PythonIterator(obj) {}

          PythonListIterator();

          void add(const ::java::lang::Object &) const;
          jboolean hasPrevious() const;
          jint nextIndex() const;
          ::java::lang::Object previous() const;
          jint previousIndex() const;
          void remove() const;
          void set(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonListIterator);
        extern PyTypeObject *PY_TYPE(PythonListIterator);

        class t_PythonListIterator {
        public:
          PyObject_HEAD
          PythonListIterator object;
          static PyObject *wrap_Object(const PythonListIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
