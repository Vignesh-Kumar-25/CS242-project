#ifndef org_apache_lucene_search_Sort_H
#define org_apache_lucene_search_Sort_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class Sort;
        class SortField;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Sort : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_c22a1d4717c37564,
            mid_equals_6084f78e09b6c0c3,
            mid_getSort_4e10d54c201a0ed6,
            mid_hashCode_15aa3d485e96b665,
            mid_needsScores_ee8b0a5fa521ddac,
            mid_rewrite_3d801417bacf22f9,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Sort(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Sort(const Sort& obj) : ::java::lang::Object(obj) {}

          static Sort *INDEXORDER;
          static Sort *RELEVANCE;

          Sort();
          Sort(const JArray< ::org::apache::lucene::search::SortField > &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< ::org::apache::lucene::search::SortField > getSort() const;
          jint hashCode() const;
          jboolean needsScores() const;
          Sort rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(Sort);
        extern PyTypeObject *PY_TYPE(Sort);

        class t_Sort {
        public:
          PyObject_HEAD
          Sort object;
          static PyObject *wrap_Object(const Sort&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
