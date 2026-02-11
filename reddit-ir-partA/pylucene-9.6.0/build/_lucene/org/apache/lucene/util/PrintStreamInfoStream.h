#ifndef org_apache_lucene_util_PrintStreamInfoStream_H
#define org_apache_lucene_util_PrintStreamInfoStream_H

#include "org/apache/lucene/util/InfoStream.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class PrintStream;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PrintStreamInfoStream : public ::org::apache::lucene::util::InfoStream {
         public:
          enum {
            mid_init$_b6308c09112257e7,
            mid_init$_b263313313dc3fed,
            mid_close_3353d9f14bbfd91a,
            mid_isEnabled_77e0b5c3eb1962ba,
            mid_isSystemStream_ee8b0a5fa521ddac,
            mid_message_1c92f57e5f37bb8d,
            mid_getTimestamp_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrintStreamInfoStream(jobject obj) : ::org::apache::lucene::util::InfoStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrintStreamInfoStream(const PrintStreamInfoStream& obj) : ::org::apache::lucene::util::InfoStream(obj) {}

          PrintStreamInfoStream(const ::java::io::PrintStream &);
          PrintStreamInfoStream(const ::java::io::PrintStream &, jint);

          void close() const;
          jboolean isEnabled(const ::java::lang::String &) const;
          jboolean isSystemStream() const;
          void message(const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PrintStreamInfoStream);
        extern PyTypeObject *PY_TYPE(PrintStreamInfoStream);

        class t_PrintStreamInfoStream {
        public:
          PyObject_HEAD
          PrintStreamInfoStream object;
          static PyObject *wrap_Object(const PrintStreamInfoStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
