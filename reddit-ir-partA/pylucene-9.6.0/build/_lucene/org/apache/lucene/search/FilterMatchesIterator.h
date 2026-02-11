#ifndef org_apache_lucene_search_FilterMatchesIterator_H
#define org_apache_lucene_search_FilterMatchesIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MatchesIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FilterMatchesIterator : public ::java::lang::Object {
         public:
          enum {
            mid_endOffset_15aa3d485e96b665,
            mid_endPosition_15aa3d485e96b665,
            mid_getQuery_0b32ec998a0c18fa,
            mid_getSubMatches_37adfcb996a3cb3e,
            mid_next_ee8b0a5fa521ddac,
            mid_startOffset_15aa3d485e96b665,
            mid_startPosition_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterMatchesIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterMatchesIterator(const FilterMatchesIterator& obj) : ::java::lang::Object(obj) {}

          jint endOffset() const;
          jint endPosition() const;
          ::org::apache::lucene::search::Query getQuery() const;
          ::org::apache::lucene::search::MatchesIterator getSubMatches() const;
          jboolean next() const;
          jint startOffset() const;
          jint startPosition() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterMatchesIterator);
        extern PyTypeObject *PY_TYPE(FilterMatchesIterator);

        class t_FilterMatchesIterator {
        public:
          PyObject_HEAD
          FilterMatchesIterator object;
          static PyObject *wrap_Object(const FilterMatchesIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
