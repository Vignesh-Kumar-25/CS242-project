#ifndef org_apache_lucene_facet_taxonomy_FacetLabel_H
#define org_apache_lucene_facet_taxonomy_FacetLabel_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class FacetLabel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a43828b01cd19e9d,
              mid_init$_2d46bc6535191d4b,
              mid_compareTo_5f6b81d33a4cb0ec,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_longHashCode_058f5911dcf5d8a4,
              mid_subpath_3d53de1621f9c4f2,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_components,
              fid_length,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetLabel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetLabel(const FacetLabel& obj) : ::java::lang::Object(obj) {}

            static jint MAX_CATEGORY_PATH_LENGTH;

            JArray< ::java::lang::String > _get_components() const;
            jint _get_length() const;

            FacetLabel(const JArray< ::java::lang::String > &);
            FacetLabel(const ::java::lang::String &, const JArray< ::java::lang::String > &);

            jint compareTo(const FacetLabel &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jlong longHashCode() const;
            FacetLabel subpath(jint) const;
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
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(FacetLabel);
          extern PyTypeObject *PY_TYPE(FacetLabel);

          class t_FacetLabel {
          public:
            PyObject_HEAD
            FacetLabel object;
            static PyObject *wrap_Object(const FacetLabel&);
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
