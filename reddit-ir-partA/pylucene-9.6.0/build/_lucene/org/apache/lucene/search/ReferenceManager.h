#ifndef org_apache_lucene_search_ReferenceManager_H
#define org_apache_lucene_search_ReferenceManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager$RefreshListener;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ReferenceManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_acquire_bdd51648087bae52,
            mid_addListener_a066df11ff3d240a,
            mid_close_3353d9f14bbfd91a,
            mid_maybeRefresh_ee8b0a5fa521ddac,
            mid_maybeRefreshBlocking_3353d9f14bbfd91a,
            mid_release_301632c741f5d054,
            mid_removeListener_a066df11ff3d240a,
            mid_getRefCount_cc82b01b9199bc71,
            mid_tryIncRef_6084f78e09b6c0c3,
            mid_decRef_301632c741f5d054,
            mid_afterClose_3353d9f14bbfd91a,
            mid_afterMaybeRefresh_3353d9f14bbfd91a,
            mid_refreshIfNeeded_73b517fb00cf5d09,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReferenceManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReferenceManager(const ReferenceManager& obj) : ::java::lang::Object(obj) {}

          ReferenceManager();

          ::java::lang::Object acquire() const;
          void addListener(const ::org::apache::lucene::search::ReferenceManager$RefreshListener &) const;
          void close() const;
          jboolean maybeRefresh() const;
          void maybeRefreshBlocking() const;
          void release(const ::java::lang::Object &) const;
          void removeListener(const ::org::apache::lucene::search::ReferenceManager$RefreshListener &) const;
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
        extern PyType_Def PY_TYPE_DEF(ReferenceManager);
        extern PyTypeObject *PY_TYPE(ReferenceManager);

        class t_ReferenceManager {
        public:
          PyObject_HEAD
          ReferenceManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReferenceManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReferenceManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReferenceManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
