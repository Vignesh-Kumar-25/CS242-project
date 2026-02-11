#ifndef org_apache_lucene_search_PhraseQuery_H
#define org_apache_lucene_search_PhraseQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class IndexSearcher;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace index {
        class TermsEnum;
        class Term;
        class IndexReader;
      }
    }
  }
}
namespace java {
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
      namespace search {

        class PhraseQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_2d46bc6535191d4b,
            mid_init$_7dd1337ac26867a9,
            mid_init$_da9e638699719245,
            mid_init$_c67f2573930c3260,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getField_dc633f13a47328a8,
            mid_getPositions_7880494ffe2d4089,
            mid_getSlop_15aa3d485e96b665,
            mid_getTerms_c5952cebe9400945,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_7da87bae82c9c483,
            mid_termPositionsCost_b23fea4c4fb2302d,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseQuery(const PhraseQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          PhraseQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          PhraseQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          PhraseQuery(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &);
          PhraseQuery(jint, const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          JArray< jint > getPositions() const;
          jint getSlop() const;
          JArray< ::org::apache::lucene::index::Term > getTerms() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          static jfloat termPositionsCost(const ::org::apache::lucene::index::TermsEnum &);
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(PhraseQuery);
        extern PyTypeObject *PY_TYPE(PhraseQuery);

        class t_PhraseQuery {
        public:
          PyObject_HEAD
          PhraseQuery object;
          static PyObject *wrap_Object(const PhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
