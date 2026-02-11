#ifndef org_apache_lucene_search_matchhighlight_MatchRegionRetriever_H
#define org_apache_lucene_search_matchhighlight_MatchRegionRetriever_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
        class TopDocs;
        namespace matchhighlight {
          class OffsetsRetrievalStrategySupplier;
          class OffsetRange;
          class MatchRegionRetriever$FieldValueProvider;
          class MatchRegionRetriever$MatchOffsetsConsumer;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace index {
        class LeafReaderContext;
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
    namespace function {
      class Predicate;
    }
    class PrimitiveIterator$OfInt;
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
      namespace search {
        namespace matchhighlight {

          class MatchRegionRetriever : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c5576ebccd77b44d,
              mid_init$_806689bcc09e77af,
              mid_computeOffsetRetrievalStrategies_a01d3c2cc56d3aef,
              mid_highlightDocument_2d44b4a839d10900,
              mid_highlightDocuments_ec5ac7e648c60095,
              mid_highlightDocuments_bebe47e36623dcd6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchRegionRetriever(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchRegionRetriever(const MatchRegionRetriever& obj) : ::java::lang::Object(obj) {}

            MatchRegionRetriever(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::analysis::Analyzer &);
            MatchRegionRetriever(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::matchhighlight::OffsetsRetrievalStrategySupplier &);

            static ::org::apache::lucene::search::matchhighlight::OffsetsRetrievalStrategySupplier computeOffsetRetrievalStrategies(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::analysis::Analyzer &);
            void highlightDocument(const ::org::apache::lucene::index::LeafReaderContext &, jint, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$FieldValueProvider &, const ::java::util::function::Predicate &, const ::java::util::Map &) const;
            void highlightDocuments(const ::org::apache::lucene::search::TopDocs &, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$MatchOffsetsConsumer &) const;
            void highlightDocuments(const ::java::util::PrimitiveIterator$OfInt &, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$MatchOffsetsConsumer &) const;
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
      namespace search {
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(MatchRegionRetriever);
          extern PyTypeObject *PY_TYPE(MatchRegionRetriever);

          class t_MatchRegionRetriever {
          public:
            PyObject_HEAD
            MatchRegionRetriever object;
            static PyObject *wrap_Object(const MatchRegionRetriever&);
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
