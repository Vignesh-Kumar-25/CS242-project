#ifndef org_apache_lucene_facet_taxonomy_AssociationAggregationFunction_H
#define org_apache_lucene_facet_taxonomy_AssociationAggregationFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class AssociationAggregationFunction;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class AssociationAggregationFunction : public ::java::lang::Object {
           public:
            enum {
              mid_aggregate_ee4110fd5a96b256,
              mid_aggregate_cd4894667d94f4d3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AssociationAggregationFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AssociationAggregationFunction(const AssociationAggregationFunction& obj) : ::java::lang::Object(obj) {}

            static AssociationAggregationFunction *MAX;
            static AssociationAggregationFunction *SUM;

            jfloat aggregate(jfloat, jfloat) const;
            jint aggregate(jint, jint) const;
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
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(AssociationAggregationFunction);
          extern PyTypeObject *PY_TYPE(AssociationAggregationFunction);

          class t_AssociationAggregationFunction {
          public:
            PyObject_HEAD
            AssociationAggregationFunction object;
            static PyObject *wrap_Object(const AssociationAggregationFunction&);
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
