#ifndef org_apache_lucene_search_grouping_SearchGroup_H
#define org_apache_lucene_search_grouping_SearchGroup_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        namespace grouping {
          class SearchGroup;
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
        namespace grouping {

          class SearchGroup : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_merge_7a9e6ae0ce45ce3d,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_groupValue,
              fid_sortValues,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SearchGroup(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SearchGroup(const SearchGroup& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Object _get_groupValue() const;
            void _set_groupValue(const ::java::lang::Object &) const;
            JArray< ::java::lang::Object > _get_sortValues() const;
            void _set_sortValues(const JArray< ::java::lang::Object > &) const;

            SearchGroup();

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            static ::java::util::Collection merge(const ::java::util::List &, jint, jint, const ::org::apache::lucene::search::Sort &);
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
          extern PyType_Def PY_TYPE_DEF(SearchGroup);
          extern PyTypeObject *PY_TYPE(SearchGroup);

          class t_SearchGroup {
          public:
            PyObject_HEAD
            SearchGroup object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SearchGroup *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SearchGroup&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SearchGroup&, PyTypeObject *);
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
