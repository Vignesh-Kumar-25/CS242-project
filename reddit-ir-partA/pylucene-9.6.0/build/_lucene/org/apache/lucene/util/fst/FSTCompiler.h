#ifndef org_apache_lucene_util_fst_FSTCompiler_H
#define org_apache_lucene_util_fst_FSTCompiler_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class Outputs;
          class FST$INPUT_TYPE;
          class FST;
        }
        class IntsRef;
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
      namespace util {
        namespace fst {

          class FSTCompiler : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b4ccc870c28bc78f,
              mid_add_9944d9f980214b4f,
              mid_compile_3f23d2c37a2ec57e,
              mid_fstRamBytesUsed_058f5911dcf5d8a4,
              mid_getArcCount_058f5911dcf5d8a4,
              mid_getDirectAddressingMaxOversizingFactor_15cd8574741b1394,
              mid_getMappedStateCount_058f5911dcf5d8a4,
              mid_getNodeCount_058f5911dcf5d8a4,
              mid_getTermCount_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTCompiler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTCompiler(const FSTCompiler& obj) : ::java::lang::Object(obj) {}

            FSTCompiler(const ::org::apache::lucene::util::fst::FST$INPUT_TYPE &, const ::org::apache::lucene::util::fst::Outputs &);

            void add(const ::org::apache::lucene::util::IntsRef &, const ::java::lang::Object &) const;
            ::org::apache::lucene::util::fst::FST compile() const;
            jlong fstRamBytesUsed() const;
            jlong getArcCount() const;
            jfloat getDirectAddressingMaxOversizingFactor() const;
            jlong getMappedStateCount() const;
            jlong getNodeCount() const;
            jlong getTermCount() const;
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
          extern PyType_Def PY_TYPE_DEF(FSTCompiler);
          extern PyTypeObject *PY_TYPE(FSTCompiler);

          class t_FSTCompiler {
          public:
            PyObject_HEAD
            FSTCompiler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTCompiler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTCompiler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTCompiler&, PyTypeObject *);
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
