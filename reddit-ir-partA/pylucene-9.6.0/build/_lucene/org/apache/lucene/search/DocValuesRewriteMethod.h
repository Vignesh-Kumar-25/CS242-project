#ifndef org_apache_lucene_search_DocValuesRewriteMethod_H
#define org_apache_lucene_search_DocValuesRewriteMethod_H

#include "org/apache/lucene/search/MultiTermQuery$RewriteMethod.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MultiTermQuery;
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesRewriteMethod : public ::org::apache::lucene::search::MultiTermQuery$RewriteMethod {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_ccbf2760a21904c6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesRewriteMethod(jobject obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesRewriteMethod(const DocValuesRewriteMethod& obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {}

          DocValuesRewriteMethod();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::MultiTermQuery &) const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesRewriteMethod);
        extern PyTypeObject *PY_TYPE(DocValuesRewriteMethod);

        class t_DocValuesRewriteMethod {
        public:
          PyObject_HEAD
          DocValuesRewriteMethod object;
          static PyObject *wrap_Object(const DocValuesRewriteMethod&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
