#ifndef org_apache_lucene_classification_SimpleNaiveBayesClassifier_H
#define org_apache_lucene_classification_SimpleNaiveBayesClassifier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
      }
      namespace classification {
        class Classifier;
        class ClassificationResult;
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

        class SimpleNaiveBayesClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ab60366b49d9abf8,
            mid_assignClass_2365b24cd4400b6d,
            mid_getClasses_bfc101691731cf5d,
            mid_getClasses_01dd3d4ed1cfd636,
            mid_assignClassNormalizedList_bfc101691731cf5d,
            mid_normClassificationResults_11cb875180e1e18f,
            mid_tokenize_5dfe22b47e50fb54,
            mid_countDocsWithClass_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleNaiveBayesClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleNaiveBayesClassifier(const SimpleNaiveBayesClassifier& obj) : ::java::lang::Object(obj) {}

          SimpleNaiveBayesClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const JArray< ::java::lang::String > &);

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
        extern PyType_Def PY_TYPE_DEF(SimpleNaiveBayesClassifier);
        extern PyTypeObject *PY_TYPE(SimpleNaiveBayesClassifier);

        class t_SimpleNaiveBayesClassifier {
        public:
          PyObject_HEAD
          SimpleNaiveBayesClassifier object;
          static PyObject *wrap_Object(const SimpleNaiveBayesClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
