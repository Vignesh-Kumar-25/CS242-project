#ifndef org_apache_lucene_util_fst_Util_H
#define org_apache_lucene_util_fst_Util_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
        class BytesRef;
        namespace fst {
          class FST$BytesReader;
          class FST;
          class Util$TopResults;
          class FST$Arc;
        }
        class IntsRefBuilder;
        class IntsRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace io {
    class IOException;
    class Writer;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util : public ::java::lang::Object {
           public:
            enum {
              mid_get_9744d2a6fcf3fa2d,
              mid_get_ff54e797baef4f82,
              mid_readCeilArc_a715a7d3680ffa27,
              mid_shortestPaths_adc0a67894683edd,
              mid_toBytesRef_58109ed95dc9b750,
              mid_toDot_4216109ffbf2b8ae,
              mid_toIntsRef_ee8fbe28eeba16de,
              mid_toUTF16_7f5b8d8f81d6753a,
              mid_toUTF32_7f5b8d8f81d6753a,
              mid_toUTF32_6ca641bb814c0a55,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Util(const Util& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::Object get(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::BytesRef &);
            static ::java::lang::Object get(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::IntsRef &);
            static ::org::apache::lucene::util::fst::FST$Arc readCeilArc(jint, const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &);
            static ::org::apache::lucene::util::fst::Util$TopResults shortestPaths(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, const ::java::util::Comparator &, jint, jboolean);
            static ::org::apache::lucene::util::BytesRef toBytesRef(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::BytesRefBuilder &);
            static void toDot(const ::org::apache::lucene::util::fst::FST &, const ::java::io::Writer &, jboolean, jboolean);
            static ::org::apache::lucene::util::IntsRef toIntsRef(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF16(const ::java::lang::CharSequence &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF32(const ::java::lang::CharSequence &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF32(const JArray< jchar > &, jint, jint, const ::org::apache::lucene::util::IntsRefBuilder &);
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
          extern PyType_Def PY_TYPE_DEF(Util);
          extern PyTypeObject *PY_TYPE(Util);

          class t_Util {
          public:
            PyObject_HEAD
            Util object;
            static PyObject *wrap_Object(const Util&);
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
