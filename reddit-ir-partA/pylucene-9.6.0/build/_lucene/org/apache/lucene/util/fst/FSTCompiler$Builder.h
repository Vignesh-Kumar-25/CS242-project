#ifndef org_apache_lucene_util_fst_FSTCompiler$Builder_H
#define org_apache_lucene_util_fst_FSTCompiler$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class Outputs;
          class FST$INPUT_TYPE;
          class FSTCompiler$Builder;
          class FSTCompiler;
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
      namespace util {
        namespace fst {

          class FSTCompiler$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b4ccc870c28bc78f,
              mid_allowFixedLengthArcs_a2be36c38bdc26e0,
              mid_build_e9ddff9b233ce676,
              mid_bytesPageBits_94c937c5d9a13b2f,
              mid_directAddressingMaxOversizingFactor_41d6012172233754,
              mid_minSuffixCount1_94c937c5d9a13b2f,
              mid_minSuffixCount2_94c937c5d9a13b2f,
              mid_shareMaxTailLength_94c937c5d9a13b2f,
              mid_shouldShareNonSingletonNodes_a2be36c38bdc26e0,
              mid_shouldShareSuffix_a2be36c38bdc26e0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTCompiler$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTCompiler$Builder(const FSTCompiler$Builder& obj) : ::java::lang::Object(obj) {}

            FSTCompiler$Builder(const ::org::apache::lucene::util::fst::FST$INPUT_TYPE &, const ::org::apache::lucene::util::fst::Outputs &);

            FSTCompiler$Builder allowFixedLengthArcs(jboolean) const;
            ::org::apache::lucene::util::fst::FSTCompiler build() const;
            FSTCompiler$Builder bytesPageBits(jint) const;
            FSTCompiler$Builder directAddressingMaxOversizingFactor(jfloat) const;
            FSTCompiler$Builder minSuffixCount1(jint) const;
            FSTCompiler$Builder minSuffixCount2(jint) const;
            FSTCompiler$Builder shareMaxTailLength(jint) const;
            FSTCompiler$Builder shouldShareNonSingletonNodes(jboolean) const;
            FSTCompiler$Builder shouldShareSuffix(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(FSTCompiler$Builder);
          extern PyTypeObject *PY_TYPE(FSTCompiler$Builder);

          class t_FSTCompiler$Builder {
          public:
            PyObject_HEAD
            FSTCompiler$Builder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTCompiler$Builder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTCompiler$Builder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTCompiler$Builder&, PyTypeObject *);
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
