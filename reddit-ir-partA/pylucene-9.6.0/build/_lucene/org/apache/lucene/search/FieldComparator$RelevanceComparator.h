#ifndef org_apache_lucene_search_FieldComparator$RelevanceComparator_H
#define org_apache_lucene_search_FieldComparator$RelevanceComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace java {
  namespace lang {
    class Float;
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
        class LeafFieldComparator;
        class Scorable;
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

        class FieldComparator$RelevanceComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_compare_cd4894667d94f4d3,
            mid_compareBottom_58b165b57740feff,
            mid_compareTop_58b165b57740feff,
            mid_compareValues_87da4f5f5a831b4f,
            mid_copy_078cef180abf5351,
            mid_getLeafComparator_24af0401587da8a8,
            mid_setBottom_da425451c8de636b,
            mid_setScorer_dd6a8586263881d1,
            mid_setTopValue_44f8bfbb375983de,
            mid_value_2515615d8f1576ef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$RelevanceComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$RelevanceComparator(const FieldComparator$RelevanceComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          FieldComparator$RelevanceComparator(jint);

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          jint compareValues(const ::java::lang::Float &, const ::java::lang::Float &) const;
          void copy(jint, jint) const;
          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setBottom(jint) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
          void setTopValue(const ::java::lang::Float &) const;
          ::java::lang::Float value(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldComparator$RelevanceComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator$RelevanceComparator);

        class t_FieldComparator$RelevanceComparator {
        public:
          PyObject_HEAD
          FieldComparator$RelevanceComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$RelevanceComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$RelevanceComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$RelevanceComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
