#ifndef org_apache_lucene_classification_KNearestNeighborClassifier_H
#define org_apache_lucene_classification_KNearestNeighborClassifier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
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

        class KNearestNeighborClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9ef68503490c002f,
            mid_assignClass_2365b24cd4400b6d,
            mid_getClasses_bfc101691731cf5d,
            mid_getClasses_01dd3d4ed1cfd636,
            mid_toString_dc633f13a47328a8,
            mid_classifyFromTopDocs_7595d95130f24101,
            mid_buildListFromTopDocs_b11987e283ee27c6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KNearestNeighborClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KNearestNeighborClassifier(const KNearestNeighborClassifier& obj) : ::java::lang::Object(obj) {}

          KNearestNeighborClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::Similarity &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, jint, jint, jint, const ::java::lang::String &, const JArray< ::java::lang::String > &);

          ::org::apache::lucene::classification::ClassificationResult assignClass(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &, jint) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(KNearestNeighborClassifier);
        extern PyTypeObject *PY_TYPE(KNearestNeighborClassifier);

        class t_KNearestNeighborClassifier {
        public:
          PyObject_HEAD
          KNearestNeighborClassifier object;
          static PyObject *wrap_Object(const KNearestNeighborClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
