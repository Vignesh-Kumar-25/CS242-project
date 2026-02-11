#ifndef org_apache_lucene_classification_utils_ConfusionMatrixGenerator$ConfusionMatrix_H
#define org_apache_lucene_classification_utils_ConfusionMatrixGenerator$ConfusionMatrix_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
    class Long;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {

          class ConfusionMatrixGenerator$ConfusionMatrix : public ::java::lang::Object {
           public:
            enum {
              mid_getAccuracy_409d010a7a53d0d1,
              mid_getAvgClassificationTime_409d010a7a53d0d1,
              mid_getF1Measure_409d010a7a53d0d1,
              mid_getF1Measure_36312bff0393adf3,
              mid_getLinearizedMatrix_19f838df22aacf85,
              mid_getNumberOfEvaluatedDocs_15aa3d485e96b665,
              mid_getPrecision_409d010a7a53d0d1,
              mid_getPrecision_36312bff0393adf3,
              mid_getRecall_409d010a7a53d0d1,
              mid_getRecall_36312bff0393adf3,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConfusionMatrixGenerator$ConfusionMatrix(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConfusionMatrixGenerator$ConfusionMatrix(const ConfusionMatrixGenerator$ConfusionMatrix& obj) : ::java::lang::Object(obj) {}

            jdouble getAccuracy() const;
            jdouble getAvgClassificationTime() const;
            jdouble getF1Measure() const;
            jdouble getF1Measure(const ::java::lang::String &) const;
            ::java::util::Map getLinearizedMatrix() const;
            jint getNumberOfEvaluatedDocs() const;
            jdouble getPrecision() const;
            jdouble getPrecision(const ::java::lang::String &) const;
            jdouble getRecall() const;
            jdouble getRecall(const ::java::lang::String &) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(ConfusionMatrixGenerator$ConfusionMatrix);
          extern PyTypeObject *PY_TYPE(ConfusionMatrixGenerator$ConfusionMatrix);

          class t_ConfusionMatrixGenerator$ConfusionMatrix {
          public:
            PyObject_HEAD
            ConfusionMatrixGenerator$ConfusionMatrix object;
            static PyObject *wrap_Object(const ConfusionMatrixGenerator$ConfusionMatrix&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
