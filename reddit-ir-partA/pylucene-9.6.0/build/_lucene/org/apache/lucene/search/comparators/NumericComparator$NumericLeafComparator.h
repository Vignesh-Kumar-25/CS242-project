#ifndef org_apache_lucene_search_comparators_NumericComparator$NumericLeafComparator_H
#define org_apache_lucene_search_comparators_NumericComparator$NumericLeafComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {
          class NumericComparator;
        }
        class LeafFieldComparator;
        class Scorable;
        class DocIdSetIterator;
      }
      namespace index {
        class LeafReaderContext;
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
        namespace comparators {

          class NumericComparator$NumericLeafComparator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_24fd07c348e09087,
              mid_competitiveIterator_4d173fc78d956ba9,
              mid_copy_078cef180abf5351,
              mid_setBottom_da425451c8de636b,
              mid_setHitsThresholdReached_3353d9f14bbfd91a,
              mid_setScorer_dd6a8586263881d1,
              mid_getNumericDocValues_bf932b5c72d7235b,
              mid_encodeBottom_e11791089a78895a,
              mid_isMissingValueCompetitive_ee8b0a5fa521ddac,
              mid_encodeTop_e11791089a78895a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NumericComparator$NumericLeafComparator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NumericComparator$NumericLeafComparator(const NumericComparator$NumericLeafComparator& obj) : ::java::lang::Object(obj) {}

            NumericComparator$NumericLeafComparator(const ::org::apache::lucene::search::comparators::NumericComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {
          extern PyType_Def PY_TYPE_DEF(NumericComparator$NumericLeafComparator);
          extern PyTypeObject *PY_TYPE(NumericComparator$NumericLeafComparator);

          class t_NumericComparator$NumericLeafComparator {
          public:
            PyObject_HEAD
            NumericComparator$NumericLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NumericComparator$NumericLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NumericComparator$NumericLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NumericComparator$NumericLeafComparator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
