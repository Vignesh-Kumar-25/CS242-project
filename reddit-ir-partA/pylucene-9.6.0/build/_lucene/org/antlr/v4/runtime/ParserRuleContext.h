#ifndef org_antlr_v4_runtime_ParserRuleContext_H
#define org_antlr_v4_runtime_ParserRuleContext_H

#include "org/antlr/v4/runtime/RuleContext.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class ParserRuleContext;
        class Token;
        class RecognitionException;
        class Parser;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class ParserRuleContext : public ::org::antlr::v4::runtime::RuleContext {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_d0066efe68d72c4e,
            mid_addChild_0e6f5e60c79fa3e0,
            mid_copyFrom_35cefd2c23cb237b,
            mid_getChildCount_15aa3d485e96b665,
            mid_getParent_c4dfaea579a318cd,
            mid_getRuleContext_5b6c08e71ec391da,
            mid_getRuleContexts_66e26e5d2ccbc25e,
            mid_getStart_5310b3c531063604,
            mid_getStop_5310b3c531063604,
            mid_removeLastChild_3353d9f14bbfd91a,
            mid_toInfoString_2ed1d40078e9e904,
            max_mid
          };

          enum {
            fid_exception,
            fid_start,
            fid_stop,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParserRuleContext(jobject obj) : ::org::antlr::v4::runtime::RuleContext(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParserRuleContext(const ParserRuleContext& obj) : ::org::antlr::v4::runtime::RuleContext(obj) {}

          static ParserRuleContext *EMPTY;

          ::org::antlr::v4::runtime::RecognitionException _get_exception() const;
          void _set_exception(const ::org::antlr::v4::runtime::RecognitionException &) const;
          ::org::antlr::v4::runtime::Token _get_start() const;
          void _set_start(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::Token _get_stop() const;
          void _set_stop(const ::org::antlr::v4::runtime::Token &) const;

          ParserRuleContext();
          ParserRuleContext(const ParserRuleContext &, jint);

          ::org::antlr::v4::runtime::RuleContext addChild(const ::org::antlr::v4::runtime::RuleContext &) const;
          void copyFrom(const ParserRuleContext &) const;
          jint getChildCount() const;
          ParserRuleContext getParent() const;
          ParserRuleContext getRuleContext(const ::java::lang::Class &, jint) const;
          ::java::util::List getRuleContexts(const ::java::lang::Class &) const;
          ::org::antlr::v4::runtime::Token getStart() const;
          ::org::antlr::v4::runtime::Token getStop() const;
          void removeLastChild() const;
          ::java::lang::String toInfoString(const ::org::antlr::v4::runtime::Parser &) const;
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
        extern PyType_Def PY_TYPE_DEF(ParserRuleContext);
        extern PyTypeObject *PY_TYPE(ParserRuleContext);

        class t_ParserRuleContext {
        public:
          PyObject_HEAD
          ParserRuleContext object;
          static PyObject *wrap_Object(const ParserRuleContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
