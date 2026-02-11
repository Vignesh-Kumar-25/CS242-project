#ifndef org_apache_lucene_search_comparators_IntComparator$IntLeafComparator_H
#define org_apache_lucene_search_comparators_IntComparator$IntLeafComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator$NumericLeafComparator.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {
          class IntComparator;
        }
      }
      namespace index {
        class LeafReaderContext;
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

          class IntComparator$IntLeafComparator : public ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator {
           public:
            enum {
              mid_init$_e848dc43c8aba73b,
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

            explicit IntComparator$IntLeafComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntComparator$IntLeafComparator(const IntComparator$IntLeafComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {}

            IntComparator$IntLeafComparator(const ::org::apache::lucene::search::comparators::IntComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

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
          extern PyType_Def PY_TYPE_DEF(IntComparator$IntLeafComparator);
          extern PyTypeObject *PY_TYPE(IntComparator$IntLeafComparator);

          class t_IntComparator$IntLeafComparator {
          public:
            PyObject_HEAD
            IntComparator$IntLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntComparator$IntLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntComparator$IntLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntComparator$IntLeafComparator&, PyTypeObject *);
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
