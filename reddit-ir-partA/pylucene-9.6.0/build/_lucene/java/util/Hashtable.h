#ifndef java_util_Hashtable_H
#define java_util_Hashtable_H

#include "java/util/Dictionary.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
    namespace function {
      class BiFunction;
      class BiConsumer;
      class Function;
    }
    class Enumeration;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Object;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Hashtable : public ::java::util::Dictionary {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_da425451c8de636b,
        mid_init$_62c0fdc62292ffbf,
        mid_init$_ad01d3552d962fe8,
        mid_clear_3353d9f14bbfd91a,
        mid_clone_bdd51648087bae52,
        mid_compute_0c5411355b46608b,
        mid_computeIfAbsent_ff8114f50d3905aa,
        mid_computeIfPresent_0c5411355b46608b,
        mid_contains_6084f78e09b6c0c3,
        mid_containsKey_6084f78e09b6c0c3,
        mid_containsValue_6084f78e09b6c0c3,
        mid_elements_1c290dc3d4f44086,
        mid_entrySet_9a625d56b67c7390,
        mid_equals_6084f78e09b6c0c3,
        mid_forEach_d1ffa4fa159a0a7d,
        mid_get_73b517fb00cf5d09,
        mid_getOrDefault_eed45094c70976e5,
        mid_hashCode_15aa3d485e96b665,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_keySet_9a625d56b67c7390,
        mid_keys_1c290dc3d4f44086,
        mid_merge_32dc9f731b04a82d,
        mid_put_eed45094c70976e5,
        mid_putAll_62c0fdc62292ffbf,
        mid_putIfAbsent_eed45094c70976e5,
        mid_remove_73b517fb00cf5d09,
        mid_remove_3be3e90983e2a2b3,
        mid_replace_eed45094c70976e5,
        mid_replace_ea06979b8a1f8738,
        mid_replaceAll_8a18639cd78be234,
        mid_size_15aa3d485e96b665,
        mid_toString_dc633f13a47328a8,
        mid_values_b47b7eaa8124fb60,
        mid_rehash_3353d9f14bbfd91a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Hashtable(jobject obj) : ::java::util::Dictionary(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Hashtable(const Hashtable& obj) : ::java::util::Dictionary(obj) {}

      Hashtable();
      Hashtable(jint);
      Hashtable(const ::java::util::Map &);
      Hashtable(jint, jfloat);

      void clear() const;
      ::java::lang::Object clone() const;
      ::java::lang::Object compute(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object computeIfAbsent(const ::java::lang::Object &, const ::java::util::function::Function &) const;
      ::java::lang::Object computeIfPresent(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Enumeration elements() const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::util::Enumeration keys() const;
      ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      jint size() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Hashtable);
    extern PyTypeObject *PY_TYPE(Hashtable);

    class t_Hashtable {
    public:
      PyObject_HEAD
      Hashtable object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Hashtable *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Hashtable&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Hashtable&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
