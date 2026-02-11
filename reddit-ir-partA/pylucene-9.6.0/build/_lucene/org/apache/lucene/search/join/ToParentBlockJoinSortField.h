#ifndef org_apache_lucene_search_join_ToParentBlockJoinSortField_H
#define org_apache_lucene_search_join_ToParentBlockJoinSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField$Type;
        class FieldComparator;
        namespace join {
          class BitSetProducer;
        }
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
        namespace join {

          class ToParentBlockJoinSortField : public ::org::apache::lucene::search::SortField {
           public:
            enum {
              mid_init$_2f59c771e033d86e,
              mid_init$_7ad97e28a04a510a,
              mid_equals_6084f78e09b6c0c3,
              mid_getComparator_db461fb9837fcdf6,
              mid_hashCode_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ToParentBlockJoinSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ToParentBlockJoinSortField(const ToParentBlockJoinSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

            ToParentBlockJoinSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, const ::org::apache::lucene::search::join::BitSetProducer &, const ::org::apache::lucene::search::join::BitSetProducer &);
            ToParentBlockJoinSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, jboolean, const ::org::apache::lucene::search::join::BitSetProducer &, const ::org::apache::lucene::search::join::BitSetProducer &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::FieldComparator getComparator(jint, jboolean) const;
            jint hashCode() const;
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
        namespace join {
          extern PyType_Def PY_TYPE_DEF(ToParentBlockJoinSortField);
          extern PyTypeObject *PY_TYPE(ToParentBlockJoinSortField);

          class t_ToParentBlockJoinSortField {
          public:
            PyObject_HEAD
            ToParentBlockJoinSortField object;
            static PyObject *wrap_Object(const ToParentBlockJoinSortField&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
