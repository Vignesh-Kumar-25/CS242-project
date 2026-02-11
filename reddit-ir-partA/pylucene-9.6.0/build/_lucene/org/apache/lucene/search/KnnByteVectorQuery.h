#ifndef org_apache_lucene_search_KnnByteVectorQuery_H
#define org_apache_lucene_search_KnnByteVectorQuery_H

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

        class KnnByteVectorQuery : public ::org::apache::lucene::search::AbstractKnnVectorQuery {
         public:
          enum {
            mid_init$_a8870f212fb6c1ba,
            mid_init$_27fe4d9a8b1b2ce5,
            mid_equals_6084f78e09b6c0c3,
            mid_getTargetCopy_f4d7c022fb7af16d,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_04612c8360f09496,
            mid_approximateSearch_043416e36cf086e5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnByteVectorQuery(jobject obj) : ::org::apache::lucene::search::AbstractKnnVectorQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnByteVectorQuery(const KnnByteVectorQuery& obj) : ::org::apache::lucene::search::AbstractKnnVectorQuery(obj) {}

          KnnByteVectorQuery(const ::java::lang::String &, const JArray< jbyte > &, jint);
          KnnByteVectorQuery(const ::java::lang::String &, const JArray< jbyte > &, jint, const ::org::apache::lucene::search::Query &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< jbyte > getTargetCopy() const;
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
        extern PyType_Def PY_TYPE_DEF(KnnByteVectorQuery);
        extern PyTypeObject *PY_TYPE(KnnByteVectorQuery);

        class t_KnnByteVectorQuery {
        public:
          PyObject_HEAD
          KnnByteVectorQuery object;
          static PyObject *wrap_Object(const KnnByteVectorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
