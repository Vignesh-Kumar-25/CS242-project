#ifndef org_apache_lucene_analysis_ko_POS$Tag_H
#define org_apache_lucene_analysis_ko_POS$Tag_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class POS$Tag;
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
      namespace analysis {
        namespace ko {

          class POS$Tag : public ::java::lang::Enum {
           public:
            enum {
              mid_code_15aa3d485e96b665,
              mid_description_dc633f13a47328a8,
              mid_valueOf_dbdd0667b1a528f7,
              mid_values_4d6fe8d7684452e3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit POS$Tag(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            POS$Tag(const POS$Tag& obj) : ::java::lang::Enum(obj) {}

            static POS$Tag *E;
            static POS$Tag *IC;
            static POS$Tag *J;
            static POS$Tag *MAG;
            static POS$Tag *MAJ;
            static POS$Tag *MM;
            static POS$Tag *NA;
            static POS$Tag *NNB;
            static POS$Tag *NNBC;
            static POS$Tag *NNG;
            static POS$Tag *NNP;
            static POS$Tag *NP;
            static POS$Tag *NR;
            static POS$Tag *SC;
            static POS$Tag *SE;
            static POS$Tag *SF;
            static POS$Tag *SH;
            static POS$Tag *SL;
            static POS$Tag *SN;
            static POS$Tag *SP;
            static POS$Tag *SSC;
            static POS$Tag *SSO;
            static POS$Tag *SY;
            static POS$Tag *UNA;
            static POS$Tag *UNKNOWN;
            static POS$Tag *VA;
            static POS$Tag *VCN;
            static POS$Tag *VCP;
            static POS$Tag *VSV;
            static POS$Tag *VV;
            static POS$Tag *VX;
            static POS$Tag *XPN;
            static POS$Tag *XR;
            static POS$Tag *XSA;
            static POS$Tag *XSN;
            static POS$Tag *XSV;

            jint code() const;
            ::java::lang::String description() const;
            static POS$Tag valueOf(const ::java::lang::String &);
            static JArray< POS$Tag > values();
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
      namespace analysis {
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(POS$Tag);
          extern PyTypeObject *PY_TYPE(POS$Tag);

          class t_POS$Tag {
          public:
            PyObject_HEAD
            POS$Tag object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_POS$Tag *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const POS$Tag&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const POS$Tag&, PyTypeObject *);
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
