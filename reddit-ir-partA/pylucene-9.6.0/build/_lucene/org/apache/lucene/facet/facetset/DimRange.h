#ifndef org_apache_lucene_facet_facetset_DimRange_H
#define org_apache_lucene_facet_facetset_DimRange_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {
          class DimRange;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {

          class DimRange : public ::java::lang::Object {
           public:
            enum {
              mid_init$_330edd6fec9fab93,
              mid_fromDoubles_88cd4eaea67b0a8e,
              mid_fromFloats_067b540f90c433a5,
              mid_fromLongs_465d7469762200d6,
              max_mid
            };

            enum {
              fid_max,
              fid_min,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DimRange(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DimRange(const DimRange& obj) : ::java::lang::Object(obj) {}

            jlong _get_max() const;
            jlong _get_min() const;

            DimRange(jlong, jlong);

            static DimRange fromDoubles(jdouble, jboolean, jdouble, jboolean);
            static DimRange fromFloats(jfloat, jboolean, jfloat, jboolean);
            static DimRange fromLongs(jlong, jboolean, jlong, jboolean);
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
        namespace facetset {
          extern PyType_Def PY_TYPE_DEF(DimRange);
          extern PyTypeObject *PY_TYPE(DimRange);

          class t_DimRange {
          public:
            PyObject_HEAD
            DimRange object;
            static PyObject *wrap_Object(const DimRange&);
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
