#ifndef org_apache_lucene_search_FieldComparator_H
#define org_apache_lucene_search_FieldComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafFieldComparator;
      }
      namespace index {
        class LeafReaderContext;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldComparator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_compare_cd4894667d94f4d3,
            mid_compareValues_a89a7424a31ba835,
            mid_disableSkipping_3353d9f14bbfd91a,
            mid_getLeafComparator_24af0401587da8a8,
            mid_setSingleSort_3353d9f14bbfd91a,
            mid_setTopValue_301632c741f5d054,
            mid_value_5eabe496ef99f2e4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator(const FieldComparator& obj) : ::java::lang::Object(obj) {}

          FieldComparator();

          jint compare(jint, jint) const;
          jint compareValues(const ::java::lang::Object &, const ::java::lang::Object &) const;
          void disableSkipping() const;
          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setSingleSort() const;
          void setTopValue(const ::java::lang::Object &) const;
          ::java::lang::Object value(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator);

        class t_FieldComparator {
        public:
          PyObject_HEAD
          FieldComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
