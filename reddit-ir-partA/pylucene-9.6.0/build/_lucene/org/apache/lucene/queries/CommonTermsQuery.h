#ifndef org_apache_lucene_queries_CommonTermsQuery_H
#define org_apache_lucene_queries_CommonTermsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class QueryVisitor;
      }
      namespace index {
        class TermStates;
        class Term;
        class LeafReaderContext;
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
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {

        class CommonTermsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_dae93d7175cd4749,
            mid_add_62e0fe03f75a3264,
            mid_collectTermStates_ff6d8f062fc1765d,
            mid_equals_6084f78e09b6c0c3,
            mid_getHighFreqBoost_15cd8574741b1394,
            mid_getHighFreqMinimumNumberShouldMatch_15cd8574741b1394,
            mid_getHighFreqOccur_627cc21ed992f4b1,
            mid_getLowFreqBoost_15cd8574741b1394,
            mid_getLowFreqMinimumNumberShouldMatch_15cd8574741b1394,
            mid_getLowFreqOccur_627cc21ed992f4b1,
            mid_getMaxTermFrequency_15cd8574741b1394,
            mid_getTerms_0bc66e960964b70a,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_7da87bae82c9c483,
            mid_setHighFreqMinimumNumberShouldMatch_354c036766ff84b4,
            mid_setLowFreqMinimumNumberShouldMatch_354c036766ff84b4,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            mid_newTermQuery_5a2d99b4dd95b68a,
            mid_calcLowFreqMinimumNumberShouldMatch_58b165b57740feff,
            mid_calcHighFreqMinimumNumberShouldMatch_58b165b57740feff,
            mid_buildQuery_47c9eded1a8f8455,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CommonTermsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CommonTermsQuery(const CommonTermsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          CommonTermsQuery(const ::org::apache::lucene::search::BooleanClause$Occur &, const ::org::apache::lucene::search::BooleanClause$Occur &, jfloat);

          void add(const ::org::apache::lucene::index::Term &) const;
          void collectTermStates(const ::org::apache::lucene::index::IndexReader &, const ::java::util::List &, const JArray< ::org::apache::lucene::index::TermStates > &, const JArray< ::org::apache::lucene::index::Term > &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jfloat getHighFreqBoost() const;
          jfloat getHighFreqMinimumNumberShouldMatch() const;
          ::org::apache::lucene::search::BooleanClause$Occur getHighFreqOccur() const;
          jfloat getLowFreqBoost() const;
          jfloat getLowFreqMinimumNumberShouldMatch() const;
          ::org::apache::lucene::search::BooleanClause$Occur getLowFreqOccur() const;
          jfloat getMaxTermFrequency() const;
          ::java::util::List getTerms() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setHighFreqMinimumNumberShouldMatch(jfloat) const;
          void setLowFreqMinimumNumberShouldMatch(jfloat) const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        extern PyType_Def PY_TYPE_DEF(CommonTermsQuery);
        extern PyTypeObject *PY_TYPE(CommonTermsQuery);

        class t_CommonTermsQuery {
        public:
          PyObject_HEAD
          CommonTermsQuery object;
          static PyObject *wrap_Object(const CommonTermsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
