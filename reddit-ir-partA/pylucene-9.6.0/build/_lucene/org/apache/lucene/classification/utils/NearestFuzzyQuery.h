#ifndef org_apache_lucene_classification_utils_NearestFuzzyQuery_H
#define org_apache_lucene_classification_utils_NearestFuzzyQuery_H

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
      namespace classification {
        namespace utils {

          class NearestFuzzyQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_cea12a5ff05f6816,
              mid_addTerms_1c92f57e5f37bb8d,
              mid_equals_6084f78e09b6c0c3,
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

            explicit NearestFuzzyQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NearestFuzzyQuery(const NearestFuzzyQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            NearestFuzzyQuery(const ::org::apache::lucene::analysis::Analyzer &);

            void addTerms(const ::java::lang::String &, const ::java::lang::String &) const;
            jboolean equals(const ::java::lang::Object &) const;
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
      namespace classification {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(NearestFuzzyQuery);
          extern PyTypeObject *PY_TYPE(NearestFuzzyQuery);

          class t_NearestFuzzyQuery {
          public:
            PyObject_HEAD
            NearestFuzzyQuery object;
            static PyObject *wrap_Object(const NearestFuzzyQuery&);
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
