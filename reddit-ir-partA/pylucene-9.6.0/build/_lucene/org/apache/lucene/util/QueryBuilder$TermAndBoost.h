#ifndef org_apache_lucene_util_QueryBuilder$TermAndBoost_H
#define org_apache_lucene_util_QueryBuilder$TermAndBoost_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class QueryBuilder$TermAndBoost : public ::java::lang::Object {
         public:
          enum {
            mid_init$_09ece6fe5fcfba05,
            max_mid
          };

          enum {
            fid_boost,
            fid_term,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryBuilder$TermAndBoost(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryBuilder$TermAndBoost(const QueryBuilder$TermAndBoost& obj) : ::java::lang::Object(obj) {}

          jfloat _get_boost() const;
          ::org::apache::lucene::util::BytesRef _get_term() const;

          QueryBuilder$TermAndBoost(const ::org::apache::lucene::util::BytesRef &, jfloat);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(QueryBuilder$TermAndBoost);
        extern PyTypeObject *PY_TYPE(QueryBuilder$TermAndBoost);

        class t_QueryBuilder$TermAndBoost {
        public:
          PyObject_HEAD
          QueryBuilder$TermAndBoost object;
          static PyObject *wrap_Object(const QueryBuilder$TermAndBoost&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
