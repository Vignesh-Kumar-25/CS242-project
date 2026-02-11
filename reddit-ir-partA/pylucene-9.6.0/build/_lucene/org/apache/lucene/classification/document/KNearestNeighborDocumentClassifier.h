#ifndef org_apache_lucene_classification_document_KNearestNeighborDocumentClassifier_H
#define org_apache_lucene_classification_document_KNearestNeighborDocumentClassifier_H

#include "org/apache/lucene/classification/KNearestNeighborClassifier.h"

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
        class ClassificationResult;
        namespace document {
          class DocumentClassifier;
        }
      }
      namespace document {
        class Document;
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
    class Map;
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
        namespace document {

          class KNearestNeighborDocumentClassifier : public ::org::apache::lucene::classification::KNearestNeighborClassifier {
           public:
            enum {
              mid_init$_d6fca790200be84d,
              mid_assignClass_0aef9f8bb3101110,
              mid_getClasses_f0ffff3620afffd7,
              mid_getClasses_4e57c43e8ea4c0c2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KNearestNeighborDocumentClassifier(jobject obj) : ::org::apache::lucene::classification::KNearestNeighborClassifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KNearestNeighborDocumentClassifier(const KNearestNeighborDocumentClassifier& obj) : ::org::apache::lucene::classification::KNearestNeighborClassifier(obj) {}

            KNearestNeighborDocumentClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::Similarity &, const ::org::apache::lucene::search::Query &, jint, jint, jint, const ::java::lang::String &, const ::java::util::Map &, const JArray< ::java::lang::String > &);

            ::org::apache::lucene::classification::ClassificationResult assignClass(const ::org::apache::lucene::document::Document &) const;
            ::java::util::List getClasses(const ::org::apache::lucene::document::Document &) const;
            ::java::util::List getClasses(const ::org::apache::lucene::document::Document &, jint) const;
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
        namespace document {
          extern PyType_Def PY_TYPE_DEF(KNearestNeighborDocumentClassifier);
          extern PyTypeObject *PY_TYPE(KNearestNeighborDocumentClassifier);

          class t_KNearestNeighborDocumentClassifier {
          public:
            PyObject_HEAD
            KNearestNeighborDocumentClassifier object;
            static PyObject *wrap_Object(const KNearestNeighborDocumentClassifier&);
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
