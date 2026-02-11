#ifndef org_apache_pylucene_util_PythonIterator_H
#define org_apache_pylucene_util_PythonIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_finalize_3353d9f14bbfd91a,
            mid_hasNext_ee8b0a5fa521ddac,
            mid_next_bdd51648087bae52,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            mid_remove_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIterator(const PythonIterator& obj) : ::java::lang::Object(obj) {}

          PythonIterator();

          void finalize() const;
          jboolean hasNext() const;
          ::java::lang::Object next() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void remove() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonIterator);
        extern PyTypeObject *PY_TYPE(PythonIterator);

        class t_PythonIterator {
        public:
          PyObject_HEAD
          PythonIterator object;
          static PyObject *wrap_Object(const PythonIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
