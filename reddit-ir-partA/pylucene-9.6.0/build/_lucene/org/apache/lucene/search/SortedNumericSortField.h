#ifndef org_apache_lucene_search_SortedNumericSortField_H
#define org_apache_lucene_search_SortedNumericSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortedNumericSelector$Type;
        class SortField$Type;
        class FieldComparator;
      }
      namespace index {
        class IndexSorter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SortedNumericSortField : public ::org::apache::lucene::search::SortField {
         public:
          enum {
            mid_init$_7a93bf15e4fb6356,
            mid_init$_d113ffbdcd025c97,
            mid_init$_686c69fdbfc932df,
            mid_equals_6084f78e09b6c0c3,
            mid_getComparator_db461fb9837fcdf6,
            mid_getIndexSorter_5e77c8cba8c3247e,
            mid_getNumericType_7d6169750a4f3bde,
            mid_getSelector_d6736cd3e951231a,
            mid_hashCode_15aa3d485e96b665,
            mid_setMissingValue_301632c741f5d054,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedNumericSortField(const SortedNumericSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &);
          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean);
          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, jboolean) const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::org::apache::lucene::search::SortField$Type getNumericType() const;
          ::org::apache::lucene::search::SortedNumericSelector$Type getSelector() const;
          jint hashCode() const;
          void setMissingValue(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(SortedNumericSortField);
        extern PyTypeObject *PY_TYPE(SortedNumericSortField);

        class t_SortedNumericSortField {
        public:
          PyObject_HEAD
          SortedNumericSortField object;
          static PyObject *wrap_Object(const SortedNumericSortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
