#ifndef java_util_LinkedHashMap_H
#define java_util_LinkedHashMap_H

#include "java/util/HashMap.h"

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
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class LinkedHashMap : public ::java::util::HashMap {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_da425451c8de636b,
        mid_init$_62c0fdc62292ffbf,
        mid_init$_ad01d3552d962fe8,
        mid_init$_67027a2f6825e499,
        mid_clear_3353d9f14bbfd91a,
        mid_containsValue_6084f78e09b6c0c3,
        mid_entrySet_9a625d56b67c7390,
        mid_forEach_d1ffa4fa159a0a7d,
        mid_get_73b517fb00cf5d09,
        mid_getOrDefault_eed45094c70976e5,
        mid_keySet_9a625d56b67c7390,
        mid_replaceAll_8a18639cd78be234,
        mid_values_b47b7eaa8124fb60,
        mid_removeEldestEntry_3634a1250c016c5d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit LinkedHashMap(jobject obj) : ::java::util::HashMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      LinkedHashMap(const LinkedHashMap& obj) : ::java::util::HashMap(obj) {}

      LinkedHashMap();
      LinkedHashMap(jint);
      LinkedHashMap(const ::java::util::Map &);
      LinkedHashMap(jint, jfloat);
      LinkedHashMap(jint, jfloat, jboolean);

      void clear() const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::util::Set keySet() const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(LinkedHashMap);
    extern PyTypeObject *PY_TYPE(LinkedHashMap);

    class t_LinkedHashMap {
    public:
      PyObject_HEAD
      LinkedHashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_LinkedHashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const LinkedHashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const LinkedHashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
