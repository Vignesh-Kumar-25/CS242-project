#ifndef org_apache_lucene_util_JavaLoggingInfoStream_H
#define org_apache_lucene_util_JavaLoggingInfoStream_H

#include "org/apache/lucene/util/InfoStream.h"

namespace java {
  namespace util {
    namespace function {
      class Function;
    }
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class JavaLoggingInfoStream : public ::org::apache::lucene::util::InfoStream {
         public:
          enum {
            mid_close_3353d9f14bbfd91a,
            mid_isEnabled_77e0b5c3eb1962ba,
            mid_message_1c92f57e5f37bb8d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit JavaLoggingInfoStream(jobject obj) : ::org::apache::lucene::util::InfoStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          JavaLoggingInfoStream(const JavaLoggingInfoStream& obj) : ::org::apache::lucene::util::InfoStream(obj) {}

          void close() const;
          jboolean isEnabled(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(JavaLoggingInfoStream);
        extern PyTypeObject *PY_TYPE(JavaLoggingInfoStream);

        class t_JavaLoggingInfoStream {
        public:
          PyObject_HEAD
          JavaLoggingInfoStream object;
          static PyObject *wrap_Object(const JavaLoggingInfoStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
