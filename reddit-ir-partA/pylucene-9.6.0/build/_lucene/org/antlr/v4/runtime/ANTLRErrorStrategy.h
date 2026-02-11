#ifndef org_antlr_v4_runtime_ANTLRErrorStrategy_H
#define org_antlr_v4_runtime_ANTLRErrorStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Parser;
        class Token;
        class RecognitionException;
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
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class ANTLRErrorStrategy : public ::java::lang::Object {
         public:
          enum {
            mid_inErrorRecoveryMode_e4e96f480cc0400d,
            mid_recover_77733a444b902e7c,
            mid_recoverInline_0e2f6633288c6789,
            mid_reportError_77733a444b902e7c,
            mid_reportMatch_eb174f8005b15951,
            mid_reset_eb174f8005b15951,
            mid_sync_eb174f8005b15951,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ANTLRErrorStrategy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ANTLRErrorStrategy(const ANTLRErrorStrategy& obj) : ::java::lang::Object(obj) {}

          jboolean inErrorRecoveryMode(const ::org::antlr::v4::runtime::Parser &) const;
          void recover(const ::org::antlr::v4::runtime::Parser &, const ::org::antlr::v4::runtime::RecognitionException &) const;
          ::org::antlr::v4::runtime::Token recoverInline(const ::org::antlr::v4::runtime::Parser &) const;
          void reportError(const ::org::antlr::v4::runtime::Parser &, const ::org::antlr::v4::runtime::RecognitionException &) const;
          void reportMatch(const ::org::antlr::v4::runtime::Parser &) const;
          void reset(const ::org::antlr::v4::runtime::Parser &) const;
          void sync(const ::org::antlr::v4::runtime::Parser &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(ANTLRErrorStrategy);
        extern PyTypeObject *PY_TYPE(ANTLRErrorStrategy);

        class t_ANTLRErrorStrategy {
        public:
          PyObject_HEAD
          ANTLRErrorStrategy object;
          static PyObject *wrap_Object(const ANTLRErrorStrategy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
