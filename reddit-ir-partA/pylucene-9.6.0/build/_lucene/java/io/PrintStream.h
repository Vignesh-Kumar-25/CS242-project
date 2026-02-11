#ifndef java_io_PrintStream_H
#define java_io_PrintStream_H

#include "java/io/FilterOutputStream.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Appendable;
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class OutputStream;
    class File;
    class UnsupportedEncodingException;
    class FileNotFoundException;
    class PrintStream;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintStream : public ::java::io::FilterOutputStream {
     public:
      enum {
        mid_init$_f24c39010c173a4e,
        mid_init$_065827f6e1eef6f6,
        mid_init$_4a883f7810d2effa,
        mid_init$_bd5bfd862b432199,
        mid_init$_1c92f57e5f37bb8d,
        mid_init$_f5864760bbd31a23,
        mid_init$_63382b7708d9331a,
        mid_append_91cc5795e4b13dad,
        mid_append_b993b12ed7f1d254,
        mid_append_8ba6dd441b28ee6d,
        mid_checkError_ee8b0a5fa521ddac,
        mid_close_3353d9f14bbfd91a,
        mid_flush_3353d9f14bbfd91a,
        mid_format_641563fe2bf5bc3b,
        mid_format_01474c52d12f9446,
        mid_print_7d636082e71ec259,
        mid_print_4a883f7810d2effa,
        mid_print_4f96af910856b303,
        mid_print_216a2efc81ae4aff,
        mid_print_c1f7206c104d501e,
        mid_print_354c036766ff84b4,
        mid_print_da425451c8de636b,
        mid_print_301632c741f5d054,
        mid_print_db2028ac45cd5b77,
        mid_printf_641563fe2bf5bc3b,
        mid_printf_01474c52d12f9446,
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
        mid_write_da425451c8de636b,
        mid_write_411019d3e65b5a2d,
        mid_setError_3353d9f14bbfd91a,
        mid_clearError_3353d9f14bbfd91a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrintStream(jobject obj) : ::java::io::FilterOutputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrintStream(const PrintStream& obj) : ::java::io::FilterOutputStream(obj) {}

      PrintStream(const ::java::io::File &);
      PrintStream(const ::java::io::OutputStream &);
      PrintStream(const ::java::lang::String &);
      PrintStream(const ::java::io::File &, const ::java::lang::String &);
      PrintStream(const ::java::lang::String &, const ::java::lang::String &);
      PrintStream(const ::java::io::OutputStream &, jboolean);
      PrintStream(const ::java::io::OutputStream &, jboolean, const ::java::lang::String &);

      PrintStream append(jchar) const;
      PrintStream append(const ::java::lang::CharSequence &) const;
      PrintStream append(const ::java::lang::CharSequence &, jint, jint) const;
      jboolean checkError() const;
      void close() const;
      void flush() const;
      PrintStream format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintStream format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void print(const JArray< jchar > &) const;
      void print(const ::java::lang::String &) const;
      void print(jboolean) const;
      void print(jchar) const;
      void print(jdouble) const;
      void print(jfloat) const;
      void print(jint) const;
      void print(const ::java::lang::Object &) const;
      void print(jlong) const;
      PrintStream printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintStream printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
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
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(PrintStream);
    extern PyTypeObject *PY_TYPE(PrintStream);

    class t_PrintStream {
    public:
      PyObject_HEAD
      PrintStream object;
      static PyObject *wrap_Object(const PrintStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
