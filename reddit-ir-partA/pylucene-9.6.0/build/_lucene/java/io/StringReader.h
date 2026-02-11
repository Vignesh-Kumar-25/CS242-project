#ifndef java_io_StringReader_H
#define java_io_StringReader_H

#include "java/io/Reader.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_close_3353d9f14bbfd91a,
        mid_mark_da425451c8de636b,
        mid_markSupported_ee8b0a5fa521ddac,
        mid_read_15aa3d485e96b665,
        mid_read_cb7d7dc978d108f2,
        mid_ready_ee8b0a5fa521ddac,
        mid_reset_3353d9f14bbfd91a,
        mid_skip_df4b83f9c1b9d174,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringReader(const StringReader& obj) : ::java::io::Reader(obj) {}

      StringReader(const ::java::lang::String &);

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(StringReader);
    extern PyTypeObject *PY_TYPE(StringReader);

    class t_StringReader {
    public:
      PyObject_HEAD
      StringReader object;
      static PyObject *wrap_Object(const StringReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
