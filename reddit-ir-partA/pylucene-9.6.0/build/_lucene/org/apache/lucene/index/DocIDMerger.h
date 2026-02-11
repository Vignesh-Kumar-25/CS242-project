#ifndef org_apache_lucene_index_DocIDMerger_H
#define org_apache_lucene_index_DocIDMerger_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocIDMerger$Sub;
        class DocIDMerger;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DocIDMerger : public ::java::lang::Object {
         public:
          enum {
            mid_next_a88a0aa10025baea,
            mid_of_04e627b6f6e4f1b8,
            mid_of_8dfb7ee80ad00ccc,
            mid_reset_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIDMerger(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIDMerger(const DocIDMerger& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::DocIDMerger$Sub next() const;
          static DocIDMerger of(const ::java::util::List &, jboolean);
          static DocIDMerger of(const ::java::util::List &, jint, jboolean);
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(DocIDMerger);
        extern PyTypeObject *PY_TYPE(DocIDMerger);

        class t_DocIDMerger {
        public:
          PyObject_HEAD
          DocIDMerger object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocIDMerger *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocIDMerger&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocIDMerger&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
