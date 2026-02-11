#ifndef org_apache_lucene_search_comparators_DoubleComparator$DoubleLeafComparator_H
#define org_apache_lucene_search_comparators_DoubleComparator$DoubleLeafComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator$NumericLeafComparator.h"

namespace java {
  namespace lang {
    class Double;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        namespace comparators {
          class DoubleComparator;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class DoubleComparator$DoubleLeafComparator : public ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator {
           public:
            enum {
              mid_init$_23da52f173431ec9,
              mid_compareBottom_58b165b57740feff,
              mid_compareTop_58b165b57740feff,
              mid_copy_078cef180abf5351,
              mid_setBottom_da425451c8de636b,
              mid_encodeBottom_e11791089a78895a,
              mid_isMissingValueCompetitive_ee8b0a5fa521ddac,
              mid_encodeTop_e11791089a78895a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleComparator$DoubleLeafComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleComparator$DoubleLeafComparator(const DoubleComparator$DoubleLeafComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {}

            DoubleComparator$DoubleLeafComparator(const ::org::apache::lucene::search::comparators::DoubleComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

            jint compareBottom(jint) const;
            jint compareTop(jint) const;
            void copy(jint, jint) const;
            void setBottom(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(DoubleComparator$DoubleLeafComparator);
          extern PyTypeObject *PY_TYPE(DoubleComparator$DoubleLeafComparator);

          class t_DoubleComparator$DoubleLeafComparator {
          public:
            PyObject_HEAD
            DoubleComparator$DoubleLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DoubleComparator$DoubleLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DoubleComparator$DoubleLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DoubleComparator$DoubleLeafComparator&, PyTypeObject *);
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
