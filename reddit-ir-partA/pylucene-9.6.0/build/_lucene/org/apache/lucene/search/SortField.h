#ifndef org_apache_lucene_search_SortField_H
#define org_apache_lucene_search_SortField_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class IndexSearcher;
        class SortField$Type;
        class FieldComparator;
        class FieldComparatorSource;
        class SortField;
      }
      namespace index {
        class IndexSorter;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
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

        class SortField : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7a93bf15e4fb6356,
            mid_init$_ed82c00fdb890f9b,
            mid_init$_d113ffbdcd025c97,
            mid_init$_4c140b7489b5fce8,
            mid_equals_6084f78e09b6c0c3,
            mid_getBytesComparator_bfaba219acee2aff,
            mid_getComparator_db461fb9837fcdf6,
            mid_getComparatorSource_4932bd125c5284db,
            mid_getField_dc633f13a47328a8,
            mid_getIndexSorter_5e77c8cba8c3247e,
            mid_getMissingValue_bdd51648087bae52,
            mid_getOptimizeSortWithIndexedData_ee8b0a5fa521ddac,
            mid_getOptimizeSortWithPoints_ee8b0a5fa521ddac,
            mid_getReverse_ee8b0a5fa521ddac,
            mid_getType_7d6169750a4f3bde,
            mid_hashCode_15aa3d485e96b665,
            mid_needsScores_ee8b0a5fa521ddac,
            mid_rewrite_43cd5a753f48a963,
            mid_setBytesComparator_8c65a0cb749b75d3,
            mid_setMissingValue_301632c741f5d054,
            mid_setOptimizeSortWithIndexedData_4f96af910856b303,
            mid_setOptimizeSortWithPoints_4f96af910856b303,
            mid_toString_dc633f13a47328a8,
            mid_readType_f11444c90859412e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortField(const SortField& obj) : ::java::lang::Object(obj) {}

          static SortField *FIELD_DOC;
          static SortField *FIELD_SCORE;
          static ::java::lang::Object *STRING_FIRST;
          static ::java::lang::Object *STRING_LAST;

          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldComparatorSource &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldComparatorSource &, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Comparator getBytesComparator() const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, jboolean) const;
          ::org::apache::lucene::search::FieldComparatorSource getComparatorSource() const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::java::lang::Object getMissingValue() const;
          jboolean getOptimizeSortWithIndexedData() const;
          jboolean getOptimizeSortWithPoints() const;
          jboolean getReverse() const;
          ::org::apache::lucene::search::SortField$Type getType() const;
          jint hashCode() const;
          jboolean needsScores() const;
          SortField rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          void setBytesComparator(const ::java::util::Comparator &) const;
          void setMissingValue(const ::java::lang::Object &) const;
          void setOptimizeSortWithIndexedData(jboolean) const;
          void setOptimizeSortWithPoints(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(SortField);
        extern PyTypeObject *PY_TYPE(SortField);

        class t_SortField {
        public:
          PyObject_HEAD
          SortField object;
          static PyObject *wrap_Object(const SortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
