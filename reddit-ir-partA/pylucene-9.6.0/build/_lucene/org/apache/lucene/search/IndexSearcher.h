#ifndef org_apache_lucene_search_IndexSearcher_H
#define org_apache_lucene_search_IndexSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class QueryCachingPolicy;
        class TermStatistics;
        class ScoreMode;
        class Weight;
        class ScoreDoc;
        class IndexSearcher$LeafSlice;
        class QueryCache;
        class CollectionStatistics;
        class CollectorManager;
        class TopDocs;
        class TopFieldDocs;
        class Query;
        class Explanation;
        class Sort;
        class Collector;
      }
      namespace index {
        class IndexReaderContext;
        class LeafReaderContext;
        class QueryTimeout;
        class StoredFieldVisitor;
        class Term;
        class IndexReader;
        class StoredFields;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace concurrent {
      class Executor;
    }
    class Set;
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
      namespace search {

        class IndexSearcher : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f48a27e209678b8f,
            mid_init$_a0b82ef08f61928c,
            mid_init$_ddde8b76d2ff0e79,
            mid_init$_e5ce8a7b6fbaff23,
            mid_collectionStatistics_cf295d514b4c5f99,
            mid_count_2fcfb540fe89fa87,
            mid_createWeight_d1787431f7f105c4,
            mid_doc_0c636ffa23b67e6b,
            mid_doc_554c42b3867e24d2,
            mid_doc_39a3372a89edb50b,
            mid_explain_9b840f8bd6929341,
            mid_getDefaultQueryCache_b683a6ecec11471b,
            mid_getDefaultQueryCachingPolicy_51e0fcffb503bc5f,
            mid_getDefaultSimilarity_4057ab9f016d67a1,
            mid_getExecutor_58bdccaf49bf778f,
            mid_getIndexReader_5412d7f2b2358551,
            mid_getLeafContexts_0bc66e960964b70a,
            mid_getMaxClauseCount_15aa3d485e96b665,
            mid_getQueryCache_b683a6ecec11471b,
            mid_getQueryCachingPolicy_51e0fcffb503bc5f,
            mid_getSimilarity_4057ab9f016d67a1,
            mid_getSlices_095cfd122152d5d1,
            mid_getTopReaderContext_854d13b266278673,
            mid_rewrite_5a65f017700c85fe,
            mid_search_668aebe1bfa0365d,
            mid_search_fe8d78813e9e19bb,
            mid_search_ee6395a9c60e9963,
            mid_search_4c30376eb3ee40d1,
            mid_search_8154c734163d2214,
            mid_searchAfter_d037981939e3561f,
            mid_searchAfter_a1979f219870a901,
            mid_searchAfter_50d7087342aa177c,
            mid_setDefaultQueryCache_db7bd5a6f2610d86,
            mid_setDefaultQueryCachingPolicy_ce1358bc44122881,
            mid_setMaxClauseCount_da425451c8de636b,
            mid_setQueryCache_db7bd5a6f2610d86,
            mid_setQueryCachingPolicy_ce1358bc44122881,
            mid_setSimilarity_29acba51c4484d46,
            mid_setTimeout_72bdb4de18c939af,
            mid_slices_15400d4e3f81f7e7,
            mid_storedFields_5c55707d6155e873,
            mid_termStatistics_79338ea075d0469e,
            mid_timedOut_ee8b0a5fa521ddac,
            mid_toString_dc633f13a47328a8,
            mid_slices_42d964c096ffe8ea,
            mid_explain_0227ac624fedea7b,
            mid_search_f48d36f5ad974c37,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher(const IndexSearcher& obj) : ::java::lang::Object(obj) {}

          IndexSearcher(const ::org::apache::lucene::index::IndexReader &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReaderContext &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReader &, const ::java::util::concurrent::Executor &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReaderContext &, const ::java::util::concurrent::Executor &);

          ::org::apache::lucene::search::CollectionStatistics collectionStatistics(const ::java::lang::String &) const;
          jint count(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          ::org::apache::lucene::document::Document doc(jint) const;
          void doc(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::document::Document doc(jint, const ::java::util::Set &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::Query &, jint) const;
          static ::org::apache::lucene::search::QueryCache getDefaultQueryCache();
          static ::org::apache::lucene::search::QueryCachingPolicy getDefaultQueryCachingPolicy();
          static ::org::apache::lucene::search::similarities::Similarity getDefaultSimilarity();
          ::java::util::concurrent::Executor getExecutor() const;
          ::org::apache::lucene::index::IndexReader getIndexReader() const;
          ::java::util::List getLeafContexts() const;
          static jint getMaxClauseCount();
          ::org::apache::lucene::search::QueryCache getQueryCache() const;
          ::org::apache::lucene::search::QueryCachingPolicy getQueryCachingPolicy() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          JArray< ::org::apache::lucene::search::IndexSearcher$LeafSlice > getSlices() const;
          ::org::apache::lucene::index::IndexReaderContext getTopReaderContext() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::Query &, jint) const;
          void search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Collector &) const;
          ::java::lang::Object search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::CollectorManager &) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopFieldDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
          static void setDefaultQueryCache(const ::org::apache::lucene::search::QueryCache &);
          static void setDefaultQueryCachingPolicy(const ::org::apache::lucene::search::QueryCachingPolicy &);
          static void setMaxClauseCount(jint);
          void setQueryCache(const ::org::apache::lucene::search::QueryCache &) const;
          void setQueryCachingPolicy(const ::org::apache::lucene::search::QueryCachingPolicy &) const;
          void setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
          void setTimeout(const ::org::apache::lucene::index::QueryTimeout &) const;
          static JArray< ::org::apache::lucene::search::IndexSearcher$LeafSlice > slices(const ::java::util::List &, jint, jint);
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::search::TermStatistics termStatistics(const ::org::apache::lucene::index::Term &, jint, jlong) const;
          jboolean timedOut() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(IndexSearcher);
        extern PyTypeObject *PY_TYPE(IndexSearcher);

        class t_IndexSearcher {
        public:
          PyObject_HEAD
          IndexSearcher object;
          static PyObject *wrap_Object(const IndexSearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
