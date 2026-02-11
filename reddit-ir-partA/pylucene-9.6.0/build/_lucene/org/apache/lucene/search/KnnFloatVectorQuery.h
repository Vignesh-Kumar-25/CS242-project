#ifndef org_apache_lucene_search_KnnFloatVectorQuery_H
#define org_apache_lucene_search_KnnFloatVectorQuery_H

#include "org/apache/lucene/search/AbstractKnnVectorQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class KnnFloatVectorQuery : public ::org::apache::lucene::search::AbstractKnnVectorQuery {
         public:
          enum {
            mid_init$_39fee07b00877200,
            mid_init$_32174603768177a9,
            mid_equals_6084f78e09b6c0c3,
            mid_getTargetCopy_f9af2b083f7af575,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_04612c8360f09496,
            mid_approximateSearch_043416e36cf086e5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnFloatVectorQuery(jobject obj) : ::org::apache::lucene::search::AbstractKnnVectorQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnFloatVectorQuery(const KnnFloatVectorQuery& obj) : ::org::apache::lucene::search::AbstractKnnVectorQuery(obj) {}

          KnnFloatVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, jint);
          KnnFloatVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::search::Query &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< jfloat > getTargetCopy() const;
          jint hashCode() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(KnnFloatVectorQuery);
        extern PyTypeObject *PY_TYPE(KnnFloatVectorQuery);

        class t_KnnFloatVectorQuery {
        public:
          PyObject_HEAD
          KnnFloatVectorQuery object;
          static PyObject *wrap_Object(const KnnFloatVectorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
