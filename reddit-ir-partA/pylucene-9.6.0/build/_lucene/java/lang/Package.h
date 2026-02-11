#ifndef java_lang_Package_H
#define java_lang_Package_H

#include "java/lang/NamedPackage.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class String;
    class Class;
    class Package;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Package : public ::java::lang::NamedPackage {
     public:
      enum {
        mid_getImplementationTitle_dc633f13a47328a8,
        mid_getImplementationVendor_dc633f13a47328a8,
        mid_getImplementationVersion_dc633f13a47328a8,
        mid_getName_dc633f13a47328a8,
        mid_getPackage_1abb35e92a81cbf1,
        mid_getPackages_a36c55e0474e9e5b,
        mid_getSpecificationTitle_dc633f13a47328a8,
        mid_getSpecificationVendor_dc633f13a47328a8,
        mid_getSpecificationVersion_dc633f13a47328a8,
        mid_hashCode_15aa3d485e96b665,
        mid_isCompatibleWith_77e0b5c3eb1962ba,
        mid_isSealed_ee8b0a5fa521ddac,
        mid_toString_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Package(jobject obj) : ::java::lang::NamedPackage(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Package(const Package& obj) : ::java::lang::NamedPackage(obj) {}

      ::java::lang::String getImplementationTitle() const;
      ::java::lang::String getImplementationVendor() const;
      ::java::lang::String getImplementationVersion() const;
      ::java::lang::String getName() const;
      static Package getPackage(const ::java::lang::String &);
      static JArray< Package > getPackages();
      ::java::lang::String getSpecificationTitle() const;
      ::java::lang::String getSpecificationVendor() const;
      ::java::lang::String getSpecificationVersion() const;
      jint hashCode() const;
      jboolean isCompatibleWith(const ::java::lang::String &) const;
      jboolean isSealed() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Package);
    extern PyTypeObject *PY_TYPE(Package);

    class t_Package {
    public:
      PyObject_HEAD
      Package object;
      static PyObject *wrap_Object(const Package&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
