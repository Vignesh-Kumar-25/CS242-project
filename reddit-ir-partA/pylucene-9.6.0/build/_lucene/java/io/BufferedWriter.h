#ifndef java_io_BufferedWriter_H
#define java_io_BufferedWriter_H

#include "java/io/Writer.h"

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

    class BufferedWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_7397602eca34e24c,
        mid_init$_cd979043c6ce4280,
        mid_close_3353d9f14bbfd91a,
        mid_flush_3353d9f14bbfd91a,
        mid_newLine_3353d9f14bbfd91a,
        mid_write_da425451c8de636b,
        mid_write_9df2689bc3d19600,
        mid_write_abda226c13e53119,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BufferedWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BufferedWriter(const BufferedWriter& obj) : ::java::io::Writer(obj) {}

      BufferedWriter(const ::java::io::Writer &);
      BufferedWriter(const ::java::io::Writer &, jint);

      void close() const;
      void flush() const;
      void newLine() const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(BufferedWriter);
    extern PyTypeObject *PY_TYPE(BufferedWriter);

    class t_BufferedWriter {
    public:
      PyObject_HEAD
      BufferedWriter object;
      static PyObject *wrap_Object(const BufferedWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
