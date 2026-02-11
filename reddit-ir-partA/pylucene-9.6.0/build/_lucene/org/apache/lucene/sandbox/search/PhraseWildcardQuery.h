#ifndef org_apache_lucene_sandbox_search_PhraseWildcardQuery_H
#define org_apache_lucene_sandbox_search_PhraseWildcardQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace index {
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
      namespace sandbox {
        namespace search {

          class PhraseWildcardQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_createWeight_9d45be3ef0fc5210,
              mid_equals_6084f78e09b6c0c3,
              mid_getField_dc633f13a47328a8,
              mid_hashCode_15aa3d485e96b665,
              mid_rewrite_7da87bae82c9c483,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              mid_createTermsData_50390ea773b7b72b,
              mid_earlyStopWeight_9b02c1072ecc5bbb,
              mid_noMatchWeight_9b02c1072ecc5bbb,
              mid_collectSingleTermData_b7222ac0022109de,
              mid_collectMultiTermData_75489bc6086b4c44,
              mid_shouldOptimizeSegments_ee8b0a5fa521ddac,
              mid_createTermStatsMap_74bb07310d9e4c43,
              mid_collectMultiTermDataForSegment_ea8398495da158c3,
              mid_createTermsEnum_c995dfcef1937b73,
              mid_collectMultiTermStats_e432e87037bb3a01,
              mid_checkTermsHavePositions_ce070e6b1fe7cd1e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhraseWildcardQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhraseWildcardQuery(const PhraseWildcardQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(PhraseWildcardQuery);
          extern PyTypeObject *PY_TYPE(PhraseWildcardQuery);

          class t_PhraseWildcardQuery {
          public:
            PyObject_HEAD
            PhraseWildcardQuery object;
            static PyObject *wrap_Object(const PhraseWildcardQuery&);
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
