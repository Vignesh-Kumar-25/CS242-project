#ifndef org_apache_lucene_spatial3d_geom_BasePlanetObject_H
#define org_apache_lucene_spatial3d_geom_BasePlanetObject_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class PlanetObject;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class OutputStream;
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
      namespace spatial3d {
        namespace geom {

          class BasePlanetObject : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5618eb5b554e7cc3,
              mid_equals_6084f78e09b6c0c3,
              mid_getPlanetModel_8e16a654eecc2f8b,
              mid_hashCode_15aa3d485e96b665,
              mid_write_065827f6e1eef6f6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasePlanetObject(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasePlanetObject(const BasePlanetObject& obj) : ::java::lang::Object(obj) {}

            BasePlanetObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::spatial3d::geom::PlanetModel getPlanetModel() const;
            jint hashCode() const;
            void write(const ::java::io::OutputStream &) const;
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
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(BasePlanetObject);
          extern PyTypeObject *PY_TYPE(BasePlanetObject);

          class t_BasePlanetObject {
          public:
            PyObject_HEAD
            BasePlanetObject object;
            static PyObject *wrap_Object(const BasePlanetObject&);
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
