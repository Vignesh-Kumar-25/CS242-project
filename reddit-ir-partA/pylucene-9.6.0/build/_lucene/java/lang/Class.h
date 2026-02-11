#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalAccessException;
    class Package;
    class InstantiationException;
    class ClassNotFoundException;
    class Module;
    class SecurityException;
    class Class;
    class String;
    class ClassLoader;
  }
  namespace io {
    class Serializable;
    class InputStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Class : public ::java::lang::Object {
     public:
      enum {
        mid_asSubclass_8c843dc3bcb514d5,
        mid_cast_73b517fb00cf5d09,
        mid_desiredAssertionStatus_ee8b0a5fa521ddac,
        mid_forName_ec52581e08fd2fb7,
        mid_forName_e0187b3d4fe26630,
        mid_forName_071971565af1dfa3,
        mid_getCanonicalName_dc633f13a47328a8,
        mid_getClassLoader_56f737cb9675ba6d,
        mid_getClasses_065a3789ccc8e24f,
        mid_getComponentType_18822df052d4f846,
        mid_getDeclaredClasses_065a3789ccc8e24f,
        mid_getDeclaringClass_18822df052d4f846,
        mid_getEnclosingClass_18822df052d4f846,
        mid_getEnumConstants_c2c4aa8d9e7500a9,
        mid_getInterfaces_065a3789ccc8e24f,
        mid_getModifiers_15aa3d485e96b665,
        mid_getModule_40120f5403807a40,
        mid_getName_dc633f13a47328a8,
        mid_getNestHost_18822df052d4f846,
        mid_getNestMembers_065a3789ccc8e24f,
        mid_getPackage_761e59f87cfe191d,
        mid_getPackageName_dc633f13a47328a8,
        mid_getResourceAsStream_b80db603f07ddae0,
        mid_getSigners_c2c4aa8d9e7500a9,
        mid_getSimpleName_dc633f13a47328a8,
        mid_getSuperclass_18822df052d4f846,
        mid_getTypeName_dc633f13a47328a8,
        mid_isAnnotation_ee8b0a5fa521ddac,
        mid_isAnonymousClass_ee8b0a5fa521ddac,
        mid_isArray_ee8b0a5fa521ddac,
        mid_isAssignableFrom_b192f4d73bfa9825,
        mid_isEnum_ee8b0a5fa521ddac,
        mid_isInstance_6084f78e09b6c0c3,
        mid_isInterface_ee8b0a5fa521ddac,
        mid_isLocalClass_ee8b0a5fa521ddac,
        mid_isMemberClass_ee8b0a5fa521ddac,
        mid_isNestmateOf_b192f4d73bfa9825,
        mid_isPrimitive_ee8b0a5fa521ddac,
        mid_isSynthetic_ee8b0a5fa521ddac,
        mid_newInstance_bdd51648087bae52,
        mid_toGenericString_dc633f13a47328a8,
        mid_toString_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Class(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Class(const Class& obj) : ::java::lang::Object(obj) {}

      Class asSubclass(const Class &) const;
      ::java::lang::Object cast(const ::java::lang::Object &) const;
      jboolean desiredAssertionStatus() const;
      static Class forName(const ::java::lang::String &);
      static Class forName(const ::java::lang::Module &, const ::java::lang::String &);
      static Class forName(const ::java::lang::String &, jboolean, const ::java::lang::ClassLoader &);
      ::java::lang::String getCanonicalName() const;
      ::java::lang::ClassLoader getClassLoader() const;
      JArray< Class > getClasses() const;
      Class getComponentType() const;
      JArray< Class > getDeclaredClasses() const;
      Class getDeclaringClass() const;
      Class getEnclosingClass() const;
      JArray< ::java::lang::Object > getEnumConstants() const;
      JArray< Class > getInterfaces() const;
      jint getModifiers() const;
      ::java::lang::Module getModule() const;
      ::java::lang::String getName() const;
      Class getNestHost() const;
      JArray< Class > getNestMembers() const;
      ::java::lang::Package getPackage() const;
      ::java::lang::String getPackageName() const;
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      JArray< ::java::lang::Object > getSigners() const;
      ::java::lang::String getSimpleName() const;
      Class getSuperclass() const;
      ::java::lang::String getTypeName() const;
      jboolean isAnnotation() const;
      jboolean isAnonymousClass() const;
      jboolean isArray() const;
      jboolean isAssignableFrom(const Class &) const;
      jboolean isEnum() const;
      jboolean isInstance(const ::java::lang::Object &) const;
      jboolean isInterface() const;
      jboolean isLocalClass() const;
      jboolean isMemberClass() const;
      jboolean isNestmateOf(const Class &) const;
      jboolean isPrimitive() const;
      jboolean isSynthetic() const;
      ::java::lang::Object newInstance() const;
      ::java::lang::String toGenericString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Class);
    extern PyTypeObject *PY_TYPE(Class);

    class t_Class {
    public:
      PyObject_HEAD
      Class object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Class *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Class&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Class&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
