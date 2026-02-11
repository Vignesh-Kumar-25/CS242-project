#ifndef java_lang_Runtime$Version_H
#define java_lang_Runtime$Version_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runtime$Version;
    class Integer;
    class Class;
    class String;
    class Comparable;
  }
  namespace util {
    class List;
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runtime$Version : public ::java::lang::Object {
     public:
      enum {
        mid_build_c93856a18dee0470,
        mid_compareTo_2f6f6c75dd97623e,
        mid_compareToIgnoreOptional_2f6f6c75dd97623e,
        mid_equals_6084f78e09b6c0c3,
        mid_equalsIgnoreOptional_6084f78e09b6c0c3,
        mid_feature_15aa3d485e96b665,
        mid_hashCode_15aa3d485e96b665,
        mid_interim_15aa3d485e96b665,
        mid_major_15aa3d485e96b665,
        mid_minor_15aa3d485e96b665,
        mid_optional_c93856a18dee0470,
        mid_parse_b0d4fae8a626ddcf,
        mid_patch_15aa3d485e96b665,
        mid_pre_c93856a18dee0470,
        mid_security_15aa3d485e96b665,
        mid_toString_dc633f13a47328a8,
        mid_update_15aa3d485e96b665,
        mid_version_0bc66e960964b70a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Runtime$Version(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Runtime$Version(const Runtime$Version& obj) : ::java::lang::Object(obj) {}

      ::java::util::Optional build() const;
      jint compareTo(const Runtime$Version &) const;
      jint compareToIgnoreOptional(const Runtime$Version &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equalsIgnoreOptional(const ::java::lang::Object &) const;
      jint feature() const;
      jint hashCode() const;
      jint interim() const;
      jint major() const;
      jint minor() const;
      ::java::util::Optional optional() const;
      static Runtime$Version parse(const ::java::lang::String &);
      jint patch() const;
      ::java::util::Optional pre() const;
      jint security() const;
      ::java::lang::String toString() const;
      jint update() const;
      ::java::util::List version() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Runtime$Version);
    extern PyTypeObject *PY_TYPE(Runtime$Version);

    class t_Runtime$Version {
    public:
      PyObject_HEAD
      Runtime$Version object;
      static PyObject *wrap_Object(const Runtime$Version&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
