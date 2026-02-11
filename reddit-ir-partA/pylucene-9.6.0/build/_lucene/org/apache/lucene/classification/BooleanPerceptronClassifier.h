#ifndef org_apache_lucene_classification_BooleanPerceptronClassifier_H
#define org_apache_lucene_classification_BooleanPerceptronClassifier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace classification {
        class ClassificationResult;
        class Classifier;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Integer;
    class Double;
    class Boolean;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class BooleanPerceptronClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_23d0b17cd961c67a,
            mid_assignClass_2365b24cd4400b6d,
            mid_getClasses_bfc101691731cf5d,
            mid_getClasses_01dd3d4ed1cfd636,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanPerceptronClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanPerceptronClassifier(const BooleanPerceptronClassifier& obj) : ::java::lang::Object(obj) {}

          BooleanPerceptronClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, const ::java::lang::Integer &, const ::java::lang::Double &, const ::java::lang::String &, const ::java::lang::String &);

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
        extern PyType_Def PY_TYPE_DEF(BooleanPerceptronClassifier);
        extern PyTypeObject *PY_TYPE(BooleanPerceptronClassifier);

        class t_BooleanPerceptronClassifier {
        public:
          PyObject_HEAD
          BooleanPerceptronClassifier object;
          static PyObject *wrap_Object(const BooleanPerceptronClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
