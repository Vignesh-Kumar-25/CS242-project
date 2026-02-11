#ifndef org_apache_lucene_codecs_uniformsplit_FieldMetadata$Serializer_H
#define org_apache_lucene_codecs_uniformsplit_FieldMetadata$Serializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
      }
      namespace index {
        class FieldInfos;
      }
      namespace codecs {
        namespace uniformsplit {
          class FieldMetadata;
          class FieldMetadata$Serializer;
        }
      }
    }
  }
}
namespace java {
  namespace io {
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
      namespace codecs {
        namespace uniformsplit {

          class FieldMetadata$Serializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_read_6f6c8cc7ec88a390,
              mid_write_52a25443fb4b1504,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldMetadata$Serializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldMetadata$Serializer(const FieldMetadata$Serializer& obj) : ::java::lang::Object(obj) {}

            static FieldMetadata$Serializer *INSTANCE;

            FieldMetadata$Serializer();

            ::org::apache::lucene::codecs::uniformsplit::FieldMetadata read(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfos &, jint) const;
            void write(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &) const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(FieldMetadata$Serializer);
          extern PyTypeObject *PY_TYPE(FieldMetadata$Serializer);

          class t_FieldMetadata$Serializer {
          public:
            PyObject_HEAD
            FieldMetadata$Serializer object;
            static PyObject *wrap_Object(const FieldMetadata$Serializer&);
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
