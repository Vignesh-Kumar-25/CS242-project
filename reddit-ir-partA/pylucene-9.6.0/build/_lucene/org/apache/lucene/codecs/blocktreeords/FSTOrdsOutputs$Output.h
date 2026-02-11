#ifndef org_apache_lucene_codecs_blocktreeords_FSTOrdsOutputs$Output_H
#define org_apache_lucene_codecs_blocktreeords_FSTOrdsOutputs$Output_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace codecs {
        namespace blocktreeords {
          class FSTOrdsOutputs$Output;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktreeords {

          class FSTOrdsOutputs$Output : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f02204e59be9218f,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_bytes,
              fid_endOrd,
              fid_startOrd,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTOrdsOutputs$Output(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTOrdsOutputs$Output(const FSTOrdsOutputs$Output& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BytesRef _get_bytes() const;
            jlong _get_endOrd() const;
            jlong _get_startOrd() const;

            FSTOrdsOutputs$Output(const ::org::apache::lucene::util::BytesRef &, jlong, jlong);

            jboolean equals(const ::java::lang::Object &) const;
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
      namespace codecs {
        namespace blocktreeords {
          extern PyType_Def PY_TYPE_DEF(FSTOrdsOutputs$Output);
          extern PyTypeObject *PY_TYPE(FSTOrdsOutputs$Output);

          class t_FSTOrdsOutputs$Output {
          public:
            PyObject_HEAD
            FSTOrdsOutputs$Output object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTOrdsOutputs$Output *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTOrdsOutputs$Output&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTOrdsOutputs$Output&, PyTypeObject *);
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
