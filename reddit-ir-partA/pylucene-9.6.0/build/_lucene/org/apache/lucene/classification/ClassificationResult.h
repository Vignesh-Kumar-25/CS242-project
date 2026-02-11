#ifndef org_apache_lucene_classification_ClassificationResult_H
#define org_apache_lucene_classification_ClassificationResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        class ClassificationResult;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class ClassificationResult : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e9e4f5685c2df595,
            mid_compareTo_43457bb2975be1e0,
            mid_getAssignedClass_bdd51648087bae52,
            mid_getScore_409d010a7a53d0d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ClassificationResult(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ClassificationResult(const ClassificationResult& obj) : ::java::lang::Object(obj) {}

          ClassificationResult(const ::java::lang::Object &, jdouble);

          jint compareTo(const ClassificationResult &) const;
          ::java::lang::Object getAssignedClass() const;
          jdouble getScore() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        extern PyType_Def PY_TYPE_DEF(ClassificationResult);
        extern PyTypeObject *PY_TYPE(ClassificationResult);

        class t_ClassificationResult {
        public:
          PyObject_HEAD
          ClassificationResult object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ClassificationResult *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ClassificationResult&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ClassificationResult&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
