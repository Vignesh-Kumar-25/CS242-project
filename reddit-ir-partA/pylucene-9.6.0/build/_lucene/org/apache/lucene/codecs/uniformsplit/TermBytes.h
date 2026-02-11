#ifndef org_apache_lucene_codecs_uniformsplit_TermBytes_H
#define org_apache_lucene_codecs_uniformsplit_TermBytes_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
      }
      namespace codecs {
        namespace uniformsplit {
          class TermBytes;
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

          class TermBytes : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0918cf67b8215564,
              mid_computeMdpLength_2043ccb7f68fbcb7,
              mid_getMdpLength_15aa3d485e96b665,
              mid_getSuffixLength_15aa3d485e96b665,
              mid_getSuffixOffset_15aa3d485e96b665,
              mid_getTerm_e6961a1ebae5a29a,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_reset_1e0521b559c83af1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermBytes(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermBytes(const TermBytes& obj) : ::java::lang::Object(obj) {}

            TermBytes(jint, const ::org::apache::lucene::util::BytesRef &);

            static jint computeMdpLength(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
            jint getMdpLength() const;
            jint getSuffixLength() const;
            jint getSuffixOffset() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jlong ramBytesUsed() const;
            TermBytes reset(jint, const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(TermBytes);
          extern PyTypeObject *PY_TYPE(TermBytes);

          class t_TermBytes {
          public:
            PyObject_HEAD
            TermBytes object;
            static PyObject *wrap_Object(const TermBytes&);
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
