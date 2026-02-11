#ifndef org_apache_lucene_util_DocIdSetBuilder$BulkAdder_H
#define org_apache_lucene_util_DocIdSetBuilder$BulkAdder_H

#include "java/lang/Object.h"

namespace java {
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
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class DocIdSetBuilder$BulkAdder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_2564d731e9721b2c,
            mid_add_da425451c8de636b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSetBuilder$BulkAdder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdSetBuilder$BulkAdder(const DocIdSetBuilder$BulkAdder& obj) : ::java::lang::Object(obj) {}

          DocIdSetBuilder$BulkAdder();

          void add(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          void add(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(DocIdSetBuilder$BulkAdder);
        extern PyTypeObject *PY_TYPE(DocIdSetBuilder$BulkAdder);

        class t_DocIdSetBuilder$BulkAdder {
        public:
          PyObject_HEAD
          DocIdSetBuilder$BulkAdder object;
          static PyObject *wrap_Object(const DocIdSetBuilder$BulkAdder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
