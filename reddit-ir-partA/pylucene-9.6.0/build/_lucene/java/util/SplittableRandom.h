#ifndef java_util_SplittableRandom_H
#define java_util_SplittableRandom_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class SplittableRandom;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SplittableRandom : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_db2028ac45cd5b77,
        mid_nextBoolean_ee8b0a5fa521ddac,
        mid_nextBytes_e11791089a78895a,
        mid_nextDouble_409d010a7a53d0d1,
        mid_nextDouble_7c88f981e0181669,
        mid_nextDouble_f1b2ed450bf62d32,
        mid_nextInt_15aa3d485e96b665,
        mid_nextInt_58b165b57740feff,
        mid_nextInt_cd4894667d94f4d3,
        mid_nextLong_058f5911dcf5d8a4,
        mid_nextLong_df4b83f9c1b9d174,
        mid_nextLong_2614435c62c39e05,
        mid_split_bab4f0ecff5dece8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SplittableRandom(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SplittableRandom(const SplittableRandom& obj) : ::java::lang::Object(obj) {}

      SplittableRandom();
      SplittableRandom(jlong);

      jboolean nextBoolean() const;
      void nextBytes(const JArray< jbyte > &) const;
      jdouble nextDouble() const;
      jdouble nextDouble(jdouble) const;
      jdouble nextDouble(jdouble, jdouble) const;
      jint nextInt() const;
      jint nextInt(jint) const;
      jint nextInt(jint, jint) const;
      jlong nextLong() const;
      jlong nextLong(jlong) const;
      jlong nextLong(jlong, jlong) const;
      SplittableRandom split() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SplittableRandom);
    extern PyTypeObject *PY_TYPE(SplittableRandom);

    class t_SplittableRandom {
    public:
      PyObject_HEAD
      SplittableRandom object;
      static PyObject *wrap_Object(const SplittableRandom&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
