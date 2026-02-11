#ifndef org_apache_lucene_search_BooleanClause_H
#define org_apache_lucene_search_BooleanClause_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause$Occur;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BooleanClause : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ac438034d3f37f89,
            mid_equals_6084f78e09b6c0c3,
            mid_getOccur_627cc21ed992f4b1,
            mid_getQuery_0b32ec998a0c18fa,
            mid_hashCode_15aa3d485e96b665,
            mid_isProhibited_ee8b0a5fa521ddac,
            mid_isRequired_ee8b0a5fa521ddac,
            mid_isScoring_ee8b0a5fa521ddac,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanClause(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanClause(const BooleanClause& obj) : ::java::lang::Object(obj) {}

          BooleanClause(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::BooleanClause$Occur &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::BooleanClause$Occur getOccur() const;
          ::org::apache::lucene::search::Query getQuery() const;
          jint hashCode() const;
          jboolean isProhibited() const;
          jboolean isRequired() const;
          jboolean isScoring() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(BooleanClause);
        extern PyTypeObject *PY_TYPE(BooleanClause);

        class t_BooleanClause {
        public:
          PyObject_HEAD
          BooleanClause object;
          static PyObject *wrap_Object(const BooleanClause&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
