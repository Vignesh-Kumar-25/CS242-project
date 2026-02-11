#ifndef org_apache_lucene_util_packed_PackedInts$Format_H
#define org_apache_lucene_util_packed_PackedInts$Format_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedInts$Format;
        }
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
      namespace util {
        namespace packed {

          class PackedInts$Format : public ::java::lang::Enum {
           public:
            enum {
              mid_byId_ff99af391f2b68dd,
              mid_byteCount_ec4e296e3c4d394f,
              mid_getId_15aa3d485e96b665,
              mid_isSupported_92eccba87b045bbc,
              mid_longCount_6416259f45982937,
              mid_overheadPerValue_cc3c9b7e666e88d5,
              mid_overheadRatio_cc3c9b7e666e88d5,
              mid_valueOf_bb6450df1365b572,
              mid_values_976e65c11dee9f72,
              max_mid
            };

            enum {
              fid_id,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Format(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Format(const PackedInts$Format& obj) : ::java::lang::Enum(obj) {}

            static PackedInts$Format *PACKED;
            static PackedInts$Format *PACKED_SINGLE_BLOCK;

            jint _get_id() const;

            static PackedInts$Format byId(jint);
            jlong byteCount(jint, jint, jint) const;
            jint getId() const;
            jboolean isSupported(jint) const;
            jint longCount(jint, jint, jint) const;
            jfloat overheadPerValue(jint) const;
            jfloat overheadRatio(jint) const;
            static PackedInts$Format valueOf(const ::java::lang::String &);
            static JArray< PackedInts$Format > values();
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
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts$Format);
          extern PyTypeObject *PY_TYPE(PackedInts$Format);

          class t_PackedInts$Format {
          public:
            PyObject_HEAD
            PackedInts$Format object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PackedInts$Format *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PackedInts$Format&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PackedInts$Format&, PyTypeObject *);
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
