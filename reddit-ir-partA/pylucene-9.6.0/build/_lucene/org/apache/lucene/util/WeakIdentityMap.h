#ifndef org_apache_lucene_util_WeakIdentityMap_H
#define org_apache_lucene_util_WeakIdentityMap_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class WeakIdentityMap;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class WeakIdentityMap : public ::java::lang::Object {
         public:
          enum {
            mid_clear_3353d9f14bbfd91a,
            mid_containsKey_6084f78e09b6c0c3,
            mid_get_73b517fb00cf5d09,
            mid_isEmpty_ee8b0a5fa521ddac,
            mid_keyIterator_7c74834ad8788f5d,
            mid_newConcurrentHashMap_1b5357f85a4dc9f7,
            mid_newConcurrentHashMap_0be1a6d992b76e2e,
            mid_newHashMap_1b5357f85a4dc9f7,
            mid_newHashMap_0be1a6d992b76e2e,
            mid_put_eed45094c70976e5,
            mid_reap_3353d9f14bbfd91a,
            mid_remove_73b517fb00cf5d09,
            mid_size_15aa3d485e96b665,
            mid_valueIterator_7c74834ad8788f5d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WeakIdentityMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WeakIdentityMap(const WeakIdentityMap& obj) : ::java::lang::Object(obj) {}

          void clear() const;
          jboolean containsKey(const ::java::lang::Object &) const;
          ::java::lang::Object get(const ::java::lang::Object &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator keyIterator() const;
          static WeakIdentityMap newConcurrentHashMap();
          static WeakIdentityMap newConcurrentHashMap(jboolean);
          static WeakIdentityMap newHashMap();
          static WeakIdentityMap newHashMap(jboolean);
          ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
          void reap() const;
          ::java::lang::Object remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::util::Iterator valueIterator() const;
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
        extern PyType_Def PY_TYPE_DEF(WeakIdentityMap);
        extern PyTypeObject *PY_TYPE(WeakIdentityMap);

        class t_WeakIdentityMap {
        public:
          PyObject_HEAD
          WeakIdentityMap object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_WeakIdentityMap *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const WeakIdentityMap&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const WeakIdentityMap&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
