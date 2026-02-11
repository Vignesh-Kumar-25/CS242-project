#ifndef org_apache_lucene_search_SortedSetSortField_H
#define org_apache_lucene_search_SortedSetSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortedSetSelector$Type;
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

        class SortedSetSortField : public ::org::apache::lucene::search::SortField {
         public:
          enum {
            mid_init$_33d070369aa7d0f5,
            mid_init$_c02c66fd7cb7c1bf,
            mid_equals_6084f78e09b6c0c3,
            mid_getComparator_db461fb9837fcdf6,
            mid_getIndexSorter_5e77c8cba8c3247e,
            mid_getSelector_d8fbe3db1a421b1c,
            mid_hashCode_15aa3d485e96b665,
            mid_setMissingValue_301632c741f5d054,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetSortField(const SortedSetSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

          SortedSetSortField(const ::java::lang::String &, jboolean);
          SortedSetSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedSetSelector$Type &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, jboolean) const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::org::apache::lucene::search::SortedSetSelector$Type getSelector() const;
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
        extern PyType_Def PY_TYPE_DEF(SortedSetSortField);
        extern PyTypeObject *PY_TYPE(SortedSetSortField);

        class t_SortedSetSortField {
        public:
          PyObject_HEAD
          SortedSetSortField object;
          static PyObject *wrap_Object(const SortedSetSortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
