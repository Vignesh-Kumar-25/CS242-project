#ifndef org_apache_pylucene_store_PythonIndexInput_H
#define org_apache_pylucene_store_PythonIndexInput_H

#include "org/apache/lucene/store/BufferedIndexInput.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
      }
    }
    namespace pylucene {
      namespace store {
        class PythonIndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonIndexInput : public ::org::apache::lucene::store::BufferedIndexInput {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            mid_init$_1bb51ade5c18747d,
            mid_init$_751a1c1a1ca09c1d,
            mid_clone_1b8a6db1b5414d24,
            mid_close_3353d9f14bbfd91a,
            mid_finalize_3353d9f14bbfd91a,
            mid_length_058f5911dcf5d8a4,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            mid_readInternal_34b345f7fe199a4f,
            mid_seekInternal_db2028ac45cd5b77,
            mid_readInternal_228ac23c9690c8eb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexInput(jobject obj) : ::org::apache::lucene::store::BufferedIndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexInput(const PythonIndexInput& obj) : ::org::apache::lucene::store::BufferedIndexInput(obj) {}

          PythonIndexInput(const ::java::lang::String &);
          PythonIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
          PythonIndexInput(const ::java::lang::String &, jint);

          PythonIndexInput clone() const;
          void close() const;
          void finalize() const;
          jlong length() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          JArray< jbyte > readInternal(jint, jlong) const;
          void seekInternal(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonIndexInput);
        extern PyTypeObject *PY_TYPE(PythonIndexInput);

        class t_PythonIndexInput {
        public:
          PyObject_HEAD
          PythonIndexInput object;
          static PyObject *wrap_Object(const PythonIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
