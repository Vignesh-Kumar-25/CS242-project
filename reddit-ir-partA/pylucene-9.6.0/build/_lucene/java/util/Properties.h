#ifndef java_util_Properties_H
#define java_util_Properties_H

#include "java/util/Hashtable.h"

namespace java {
  namespace util {
    class Set;
    class Map;
    class InvalidPropertiesFormatException;
    namespace function {
      class Function;
      class BiConsumer;
      class BiFunction;
    }
    class Enumeration;
    class Map$Entry;
    class Collection;
  }
  namespace io {
    class InputStream;
    class PrintWriter;
    class IOException;
    class Writer;
    class PrintStream;
    class OutputStream;
    class Reader;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Properties : public ::java::util::Hashtable {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_da425451c8de636b,
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
        mid_getProperty_04612c8360f09496,
        mid_getProperty_4178ea5d4aed7988,
        mid_hashCode_15aa3d485e96b665,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_keySet_9a625d56b67c7390,
        mid_keys_1c290dc3d4f44086,
        mid_list_b6308c09112257e7,
        mid_list_d0942db2d06fa91a,
        mid_load_839363fac538f4b4,
        mid_load_48be8a5844a4c6e0,
        mid_loadFromXML_839363fac538f4b4,
        mid_merge_32dc9f731b04a82d,
        mid_propertyNames_1c290dc3d4f44086,
        mid_put_eed45094c70976e5,
        mid_putAll_62c0fdc62292ffbf,
        mid_putIfAbsent_eed45094c70976e5,
        mid_remove_73b517fb00cf5d09,
        mid_remove_3be3e90983e2a2b3,
        mid_replace_eed45094c70976e5,
        mid_replace_ea06979b8a1f8738,
        mid_replaceAll_8a18639cd78be234,
        mid_save_50d565796ee1c40d,
        mid_setProperty_e0b67cc35bc624c3,
        mid_size_15aa3d485e96b665,
        mid_store_50d565796ee1c40d,
        mid_store_4c84a94fe19d386e,
        mid_storeToXML_50d565796ee1c40d,
        mid_storeToXML_ead28b2b3eb32755,
        mid_stringPropertyNames_9a625d56b67c7390,
        mid_toString_dc633f13a47328a8,
        mid_values_b47b7eaa8124fb60,
        mid_rehash_3353d9f14bbfd91a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Properties(jobject obj) : ::java::util::Hashtable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Properties(const Properties& obj) : ::java::util::Hashtable(obj) {}

      Properties();
      Properties(jint);

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
      ::java::lang::String getProperty(const ::java::lang::String &) const;
      ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::util::Enumeration keys() const;
      void list(const ::java::io::PrintStream &) const;
      void list(const ::java::io::PrintWriter &) const;
      void load(const ::java::io::InputStream &) const;
      void load(const ::java::io::Reader &) const;
      void loadFromXML(const ::java::io::InputStream &) const;
      ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::util::Enumeration propertyNames() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      void save(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      ::java::lang::Object setProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      jint size() const;
      void store(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void store(const ::java::io::Writer &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &, const ::java::lang::String &) const;
      ::java::util::Set stringPropertyNames() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Properties);
    extern PyTypeObject *PY_TYPE(Properties);

    class t_Properties {
    public:
      PyObject_HEAD
      Properties object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Properties *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Properties&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Properties&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
