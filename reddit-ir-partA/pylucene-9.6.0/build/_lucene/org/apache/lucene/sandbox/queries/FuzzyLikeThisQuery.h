#ifndef org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H
#define org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace index {
        class IndexReader;
      }
      namespace search {
        class QueryVisitor;
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
        namespace queries {

          class FuzzyLikeThisQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_64d4af6c7a4c54e7,
              mid_addTerms_85d459e36d31092a,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_isIgnoreTF_ee8b0a5fa521ddac,
              mid_rewrite_7da87bae82c9c483,
              mid_setIgnoreTF_4f96af910856b303,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FuzzyLikeThisQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FuzzyLikeThisQuery(const FuzzyLikeThisQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FuzzyLikeThisQuery(jint, const ::org::apache::lucene::analysis::Analyzer &);

            void addTerms(const ::java::lang::String &, const ::java::lang::String &, jfloat, jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isIgnoreTF() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setIgnoreTF(jboolean) const;
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
        namespace queries {
          extern PyType_Def PY_TYPE_DEF(FuzzyLikeThisQuery);
          extern PyTypeObject *PY_TYPE(FuzzyLikeThisQuery);

          class t_FuzzyLikeThisQuery {
          public:
            PyObject_HEAD
            FuzzyLikeThisQuery object;
            static PyObject *wrap_Object(const FuzzyLikeThisQuery&);
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
