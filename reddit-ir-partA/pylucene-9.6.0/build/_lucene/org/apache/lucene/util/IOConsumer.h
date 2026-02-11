#ifndef org_apache_lucene_util_IOConsumer_H
#define org_apache_lucene_util_IOConsumer_H

#include "org/apache/lucene/util/IOUtils$IOConsumer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IOConsumer : public ::org::apache::lucene::util::IOUtils$IOConsumer {
         public:
          enum {
            mid_accept_301632c741f5d054,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOConsumer(jobject obj) : ::org::apache::lucene::util::IOUtils$IOConsumer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOConsumer(const IOConsumer& obj) : ::org::apache::lucene::util::IOUtils$IOConsumer(obj) {}

          void accept(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(IOConsumer);
        extern PyTypeObject *PY_TYPE(IOConsumer);

        class t_IOConsumer {
        public:
          PyObject_HEAD
          IOConsumer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_IOConsumer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IOConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IOConsumer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
