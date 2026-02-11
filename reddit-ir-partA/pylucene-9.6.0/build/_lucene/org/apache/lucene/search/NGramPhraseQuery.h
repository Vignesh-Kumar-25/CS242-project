#ifndef org_apache_lucene_search_NGramPhraseQuery_H
#define org_apache_lucene_search_NGramPhraseQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        class PhraseQuery;
        class QueryVisitor;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
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
      namespace search {

        class NGramPhraseQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_511b24a784cd0aa6,
            mid_equals_6084f78e09b6c0c3,
            mid_getN_15aa3d485e96b665,
            mid_getPositions_7880494ffe2d4089,
            mid_getTerms_c5952cebe9400945,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_7da87bae82c9c483,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NGramPhraseQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NGramPhraseQuery(const NGramPhraseQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          NGramPhraseQuery(jint, const ::org::apache::lucene::search::PhraseQuery &);

          jboolean equals(const ::java::lang::Object &) const;
          jint getN() const;
          JArray< jint > getPositions() const;
          JArray< ::org::apache::lucene::index::Term > getTerms() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(NGramPhraseQuery);
        extern PyTypeObject *PY_TYPE(NGramPhraseQuery);

        class t_NGramPhraseQuery {
        public:
          PyObject_HEAD
          NGramPhraseQuery object;
          static PyObject *wrap_Object(const NGramPhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
