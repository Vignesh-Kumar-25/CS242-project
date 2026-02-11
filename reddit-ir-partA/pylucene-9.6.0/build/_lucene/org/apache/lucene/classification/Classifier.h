#ifndef org_apache_lucene_classification_Classifier_H
#define org_apache_lucene_classification_Classifier_H

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
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class Classifier : public ::java::lang::Object {
         public:
          enum {
            mid_assignClass_2365b24cd4400b6d,
            mid_getClasses_bfc101691731cf5d,
            mid_getClasses_01dd3d4ed1cfd636,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Classifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Classifier(const Classifier& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::classification::ClassificationResult assignClass(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(Classifier);
        extern PyTypeObject *PY_TYPE(Classifier);

        class t_Classifier {
        public:
          PyObject_HEAD
          Classifier object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Classifier *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Classifier&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Classifier&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
