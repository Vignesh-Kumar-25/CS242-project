#ifndef org_apache_lucene_search_grouping_GroupFacetCollector$FacetEntry_H
#define org_apache_lucene_search_grouping_GroupFacetCollector$FacetEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupFacetCollector$FacetEntry : public ::java::lang::Object {
           public:
            enum {
              mid_init$_77db1b29bc525299,
              mid_equals_6084f78e09b6c0c3,
              mid_getCount_15aa3d485e96b665,
              mid_getValue_e6961a1ebae5a29a,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupFacetCollector$FacetEntry(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupFacetCollector$FacetEntry(const GroupFacetCollector$FacetEntry& obj) : ::java::lang::Object(obj) {}

            GroupFacetCollector$FacetEntry(const ::org::apache::lucene::util::BytesRef &, jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getCount() const;
            ::org::apache::lucene::util::BytesRef getValue() const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(GroupFacetCollector$FacetEntry);
          extern PyTypeObject *PY_TYPE(GroupFacetCollector$FacetEntry);

          class t_GroupFacetCollector$FacetEntry {
          public:
            PyObject_HEAD
            GroupFacetCollector$FacetEntry object;
            static PyObject *wrap_Object(const GroupFacetCollector$FacetEntry&);
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
