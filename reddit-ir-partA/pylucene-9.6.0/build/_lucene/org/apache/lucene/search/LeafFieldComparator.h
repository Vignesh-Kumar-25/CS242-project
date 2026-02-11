#ifndef org_apache_lucene_search_LeafFieldComparator_H
#define org_apache_lucene_search_LeafFieldComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class DocIdSetIterator;
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

        class LeafFieldComparator : public ::java::lang::Object {
         public:
          enum {
            mid_compareBottom_58b165b57740feff,
            mid_compareTop_58b165b57740feff,
            mid_competitiveIterator_4d173fc78d956ba9,
            mid_copy_078cef180abf5351,
            mid_setBottom_da425451c8de636b,
            mid_setHitsThresholdReached_3353d9f14bbfd91a,
            mid_setScorer_dd6a8586263881d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafFieldComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafFieldComparator(const LeafFieldComparator& obj) : ::java::lang::Object(obj) {}

          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator competitiveIterator() const;
          void copy(jint, jint) const;
          void setBottom(jint) const;
          void setHitsThresholdReached() const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
        extern PyType_Def PY_TYPE_DEF(LeafFieldComparator);
        extern PyTypeObject *PY_TYPE(LeafFieldComparator);

        class t_LeafFieldComparator {
        public:
          PyObject_HEAD
          LeafFieldComparator object;
          static PyObject *wrap_Object(const LeafFieldComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
