#ifndef org_apache_lucene_search_MultiTermQuery_H
#define org_apache_lucene_search_MultiTermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
      namespace index {
        class TermsEnum;
        class IndexReader;
        class Terms;
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

        class MultiTermQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_55097619ebf73c4f,
            mid_equals_6084f78e09b6c0c3,
            mid_getField_dc633f13a47328a8,
            mid_getRewriteMethod_f4906511f7fa38db,
            mid_getTermsCount_058f5911dcf5d8a4,
            mid_getTermsEnum_c54c71b4dada81a0,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_7da87bae82c9c483,
            mid_setRewriteMethod_21ec55f89b31b080,
            mid_getTermsEnum_7a78de2b3c524392,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery(const MultiTermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_BLENDED_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_BOOLEAN_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *DOC_VALUES_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *SCORING_BOOLEAN_REWRITE;

          MultiTermQuery(const ::java::lang::String &, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getRewriteMethod() const;
          jlong getTermsCount() const;
          ::org::apache::lucene::index::TermsEnum getTermsEnum(const ::org::apache::lucene::index::Terms &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiTermQuery);
        extern PyTypeObject *PY_TYPE(MultiTermQuery);

        class t_MultiTermQuery {
        public:
          PyObject_HEAD
          MultiTermQuery object;
          static PyObject *wrap_Object(const MultiTermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
