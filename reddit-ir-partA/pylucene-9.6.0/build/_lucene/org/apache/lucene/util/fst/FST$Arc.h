#ifndef org_apache_lucene_util_fst_FST$Arc_H
#define org_apache_lucene_util_fst_FST$Arc_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$Arc;
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
        namespace fst {

          class FST$Arc : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_arcIdx_15aa3d485e96b665,
              mid_bytesPerArc_15aa3d485e96b665,
              mid_copyFrom_4ad9864c4e02057b,
              mid_flags_9fe2c7e31d2bc1ae,
              mid_isFinal_ee8b0a5fa521ddac,
              mid_isLast_ee8b0a5fa521ddac,
              mid_label_15aa3d485e96b665,
              mid_nextFinalOutput_bdd51648087bae52,
              mid_nodeFlags_9fe2c7e31d2bc1ae,
              mid_numArcs_15aa3d485e96b665,
              mid_output_bdd51648087bae52,
              mid_posArcsStart_058f5911dcf5d8a4,
              mid_target_058f5911dcf5d8a4,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST$Arc(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FST$Arc(const FST$Arc& obj) : ::java::lang::Object(obj) {}

            FST$Arc();

            jint arcIdx() const;
            jint bytesPerArc() const;
            FST$Arc copyFrom(const FST$Arc &) const;
            jbyte flags() const;
            jboolean isFinal() const;
            jboolean isLast() const;
            jint label() const;
            ::java::lang::Object nextFinalOutput() const;
            jbyte nodeFlags() const;
            jint numArcs() const;
            ::java::lang::Object output() const;
            jlong posArcsStart() const;
            jlong target() const;
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(FST$Arc);
          extern PyTypeObject *PY_TYPE(FST$Arc);

          class t_FST$Arc {
          public:
            PyObject_HEAD
            FST$Arc object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST$Arc *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST$Arc&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST$Arc&, PyTypeObject *);
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
