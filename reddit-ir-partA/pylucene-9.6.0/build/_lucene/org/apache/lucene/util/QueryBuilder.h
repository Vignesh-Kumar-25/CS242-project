#ifndef org_apache_lucene_util_QueryBuilder_H
#define org_apache_lucene_util_QueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause$Occur;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class QueryBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_cea12a5ff05f6816,
            mid_createBooleanQuery_8b970d057e017e30,
            mid_createBooleanQuery_de0cac8e4daf0ae6,
            mid_createMinShouldMatchQuery_1e1d94ae57c788e4,
            mid_createPhraseQuery_8b970d057e017e30,
            mid_createPhraseQuery_fbf95c8fba42206c,
            mid_getAnalyzer_2e5841967e4c0700,
            mid_getAutoGenerateMultiTermSynonymsPhraseQuery_ee8b0a5fa521ddac,
            mid_getEnableGraphQueries_ee8b0a5fa521ddac,
            mid_getEnablePositionIncrements_ee8b0a5fa521ddac,
            mid_setAnalyzer_cea12a5ff05f6816,
            mid_setAutoGenerateMultiTermSynonymsPhraseQuery_4f96af910856b303,
            mid_setEnableGraphQueries_4f96af910856b303,
            mid_setEnablePositionIncrements_4f96af910856b303,
            mid_analyzeTerm_3c0639f82d685d8c,
            mid_newBooleanQuery_b8e2b700ae88382a,
            mid_createFieldQuery_942a8195f4f6bc6c,
            mid_createFieldQuery_7f219f339760e538,
            mid_analyzeBoolean_3c0639f82d685d8c,
            mid_analyzeMultiBoolean_f1d50d79770956a0,
            mid_analyzePhrase_f12d89e37787fca5,
            mid_analyzeMultiPhrase_f12d89e37787fca5,
            mid_analyzeGraphBoolean_f1d50d79770956a0,
            mid_analyzeGraphPhrase_64d205b9cce60416,
            mid_newSynonymQuery_e9c7c81575527c47,
            mid_newGraphSynonymQuery_a314bed7428637e2,
            mid_newTermQuery_1ed2f45c8f0b43bd,
            mid_newMultiPhraseQueryBuilder_12f9f564b4cc625f,
            mid_add_717974148e9fbe36,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryBuilder(const QueryBuilder& obj) : ::java::lang::Object(obj) {}

          QueryBuilder(const ::org::apache::lucene::analysis::Analyzer &);

          ::org::apache::lucene::search::Query createBooleanQuery(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::Query createBooleanQuery(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          ::org::apache::lucene::search::Query createMinShouldMatchQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat) const;
          ::org::apache::lucene::search::Query createPhraseQuery(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::Query createPhraseQuery(const ::java::lang::String &, const ::java::lang::String &, jint) const;
          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          jboolean getAutoGenerateMultiTermSynonymsPhraseQuery() const;
          jboolean getEnableGraphQueries() const;
          jboolean getEnablePositionIncrements() const;
          void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
          void setAutoGenerateMultiTermSynonymsPhraseQuery(jboolean) const;
          void setEnableGraphQueries(jboolean) const;
          void setEnablePositionIncrements(jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(QueryBuilder);
        extern PyTypeObject *PY_TYPE(QueryBuilder);

        class t_QueryBuilder {
        public:
          PyObject_HEAD
          QueryBuilder object;
          static PyObject *wrap_Object(const QueryBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
