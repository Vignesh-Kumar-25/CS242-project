#ifndef org_apache_lucene_facet_taxonomy_FloatAssociationFacetField_H
#define org_apache_lucene_facet_taxonomy_FloatAssociationFacetField_H

#include "org/apache/lucene/facet/taxonomy/AssociationFacetField.h"

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
      namespace facet {
        namespace taxonomy {

          class FloatAssociationFacetField : public ::org::apache::lucene::facet::taxonomy::AssociationFacetField {
           public:
            enum {
              mid_init$_3bf7b68f545d8286,
              mid_bytesRefToFloat_737b45df638ca5d0,
              mid_floatToBytesRef_005124a35c1e0b11,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatAssociationFacetField(jobject obj) : ::org::apache::lucene::facet::taxonomy::AssociationFacetField(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatAssociationFacetField(const FloatAssociationFacetField& obj) : ::org::apache::lucene::facet::taxonomy::AssociationFacetField(obj) {}

            FloatAssociationFacetField(jfloat, const ::java::lang::String &, const JArray< ::java::lang::String > &);

            static jfloat bytesRefToFloat(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::util::BytesRef floatToBytesRef(jfloat);
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
          extern PyType_Def PY_TYPE_DEF(FloatAssociationFacetField);
          extern PyTypeObject *PY_TYPE(FloatAssociationFacetField);

          class t_FloatAssociationFacetField {
          public:
            PyObject_HEAD
            FloatAssociationFacetField object;
            static PyObject *wrap_Object(const FloatAssociationFacetField&);
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
