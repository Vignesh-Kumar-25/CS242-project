#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_FieldMetadataTermState_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_FieldMetadataTermState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class BlockTermState;
        namespace uniformsplit {
          class FieldMetadata;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class FieldMetadataTermState : public ::java::lang::Object {
             public:
              enum {
                mid_init$_952df8db2c425a14,
                max_mid
              };

              enum {
                fid_fieldMetadata,
                fid_state,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldMetadataTermState(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldMetadataTermState(const FieldMetadataTermState& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::codecs::uniformsplit::FieldMetadata _get_fieldMetadata() const;
              ::org::apache::lucene::codecs::BlockTermState _get_state() const;

              FieldMetadataTermState(const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::BlockTermState &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(FieldMetadataTermState);
            extern PyTypeObject *PY_TYPE(FieldMetadataTermState);

            class t_FieldMetadataTermState {
            public:
              PyObject_HEAD
              FieldMetadataTermState object;
              static PyObject *wrap_Object(const FieldMetadataTermState&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
