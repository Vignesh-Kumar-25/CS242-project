#ifndef java_util_IdentityHashMap_H
#define java_util_IdentityHashMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
    namespace function {
      class BiFunction;
      class BiConsumer;
    }
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Object;
    class Cloneable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class IdentityHashMap : public ::java::util::AbstractMap {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_da425451c8de636b,
        mid_init$_62c0fdc62292ffbf,
        mid_clear_3353d9f14bbfd91a,
        mid_clone_bdd51648087bae52,
        mid_containsKey_6084f78e09b6c0c3,
        mid_containsValue_6084f78e09b6c0c3,
        mid_entrySet_9a625d56b67c7390,
        mid_equals_6084f78e09b6c0c3,
        mid_forEach_d1ffa4fa159a0a7d,
        mid_get_73b517fb00cf5d09,
        mid_hashCode_15aa3d485e96b665,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_keySet_9a625d56b67c7390,
        mid_put_eed45094c70976e5,
        mid_putAll_62c0fdc62292ffbf,
        mid_remove_73b517fb00cf5d09,
        mid_replaceAll_8a18639cd78be234,
        mid_size_15aa3d485e96b665,
        mid_values_b47b7eaa8124fb60,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IdentityHashMap(jobject obj) : ::java::util::AbstractMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IdentityHashMap(const IdentityHashMap& obj) : ::java::util::AbstractMap(obj) {}

      IdentityHashMap();
      IdentityHashMap(jint);
      IdentityHashMap(const ::java::util::Map &);

      void clear() const;
      ::java::lang::Object clone() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      jint size() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(IdentityHashMap);
    extern PyTypeObject *PY_TYPE(IdentityHashMap);

    class t_IdentityHashMap {
    public:
      PyObject_HEAD
      IdentityHashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_IdentityHashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const IdentityHashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const IdentityHashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
