#ifndef java_io_PrintWriter_H
#define java_io_PrintWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class OutputStream;
    class PrintWriter;
    class File;
    class UnsupportedEncodingException;
    class FileNotFoundException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_f24c39010c173a4e,
        mid_init$_065827f6e1eef6f6,
        mid_init$_7397602eca34e24c,
        mid_init$_4a883f7810d2effa,
        mid_init$_bd5bfd862b432199,
        mid_init$_1c92f57e5f37bb8d,
        mid_init$_f5864760bbd31a23,
        mid_init$_81ba1ac1d88695f0,
        mid_append_be2c2b0b57447224,
        mid_append_b5b17d8922c6fc3a,
        mid_append_a5b5ad7ab1d345c9,
        mid_checkError_ee8b0a5fa521ddac,
        mid_close_3353d9f14bbfd91a,
        mid_flush_3353d9f14bbfd91a,
        mid_format_41681598aba3f404,
        mid_format_fe7cd752fde308d1,
        mid_print_7d636082e71ec259,
        mid_print_4a883f7810d2effa,
        mid_print_4f96af910856b303,
        mid_print_216a2efc81ae4aff,
        mid_print_c1f7206c104d501e,
        mid_print_354c036766ff84b4,
        mid_print_da425451c8de636b,
        mid_print_301632c741f5d054,
        mid_print_db2028ac45cd5b77,
        mid_printf_41681598aba3f404,
        mid_printf_fe7cd752fde308d1,
        mid_println_3353d9f14bbfd91a,
        mid_println_7d636082e71ec259,
        mid_println_4a883f7810d2effa,
        mid_println_4f96af910856b303,
        mid_println_216a2efc81ae4aff,
        mid_println_c1f7206c104d501e,
        mid_println_354c036766ff84b4,
        mid_println_da425451c8de636b,
        mid_println_301632c741f5d054,
        mid_println_db2028ac45cd5b77,
        mid_write_7d636082e71ec259,
        mid_write_4a883f7810d2effa,
        mid_write_da425451c8de636b,
        mid_write_9df2689bc3d19600,
        mid_write_abda226c13e53119,
        mid_setError_3353d9f14bbfd91a,
        mid_clearError_3353d9f14bbfd91a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrintWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrintWriter(const PrintWriter& obj) : ::java::io::Writer(obj) {}

      PrintWriter(const ::java::io::File &);
      PrintWriter(const ::java::io::OutputStream &);
      PrintWriter(const ::java::io::Writer &);
      PrintWriter(const ::java::lang::String &);
      PrintWriter(const ::java::io::File &, const ::java::lang::String &);
      PrintWriter(const ::java::lang::String &, const ::java::lang::String &);
      PrintWriter(const ::java::io::OutputStream &, jboolean);
      PrintWriter(const ::java::io::Writer &, jboolean);

      PrintWriter append(jchar) const;
      PrintWriter append(const ::java::lang::CharSequence &) const;
      PrintWriter append(const ::java::lang::CharSequence &, jint, jint) const;
      jboolean checkError() const;
      void close() const;
      void flush() const;
      PrintWriter format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintWriter format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void print(const JArray< jchar > &) const;
      void print(const ::java::lang::String &) const;
      void print(jboolean) const;
      void print(jchar) const;
      void print(jdouble) const;
      void print(jfloat) const;
      void print(jint) const;
      void print(const ::java::lang::Object &) const;
      void print(jlong) const;
      PrintWriter printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintWriter printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void println() const;
      void println(const JArray< jchar > &) const;
      void println(const ::java::lang::String &) const;
      void println(jboolean) const;
      void println(jchar) const;
      void println(jdouble) const;
      void println(jfloat) const;
      void println(jint) const;
      void println(const ::java::lang::Object &) const;
      void println(jlong) const;
      void write(const JArray< jchar > &) const;
      void write(const ::java::lang::String &) const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(PrintWriter);
    extern PyTypeObject *PY_TYPE(PrintWriter);

    class t_PrintWriter {
    public:
      PyObject_HEAD
      PrintWriter object;
      static PyObject *wrap_Object(const PrintWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
