#ifndef org_apache_pylucene_index_PythonIndexDeletionPolicy_H
#define org_apache_pylucene_index_PythonIndexDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace index {

        class PythonIndexDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_finalize_3353d9f14bbfd91a,
            mid_onCommit_1a2e28000748bc88,
            mid_onInit_1a2e28000748bc88,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexDeletionPolicy(const PythonIndexDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          PythonIndexDeletionPolicy();

          void finalize() const;
          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PythonIndexDeletionPolicy);
        extern PyTypeObject *PY_TYPE(PythonIndexDeletionPolicy);

        class t_PythonIndexDeletionPolicy {
        public:
          PyObject_HEAD
          PythonIndexDeletionPolicy object;
          static PyObject *wrap_Object(const PythonIndexDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
