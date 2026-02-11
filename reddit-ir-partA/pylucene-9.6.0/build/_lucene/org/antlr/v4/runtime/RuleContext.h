#ifndef org_antlr_v4_runtime_RuleContext_H
#define org_antlr_v4_runtime_RuleContext_H

#include "java/lang/Object.h"

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
        class Recognizer;
        class Parser;
        class RuleContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class RuleContext : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_f7dd4d41e96458f2,
            mid_depth_15aa3d485e96b665,
            mid_getAltNumber_15aa3d485e96b665,
            mid_getChildCount_15aa3d485e96b665,
            mid_getParent_68c729eea21b6873,
            mid_getPayload_68c729eea21b6873,
            mid_getRuleContext_68c729eea21b6873,
            mid_getRuleIndex_15aa3d485e96b665,
            mid_getText_dc633f13a47328a8,
            mid_isEmpty_ee8b0a5fa521ddac,
            mid_setAltNumber_da425451c8de636b,
            mid_setParent_4dc1a06ae86e04e5,
            mid_toString_dc633f13a47328a8,
            mid_toString_37328b5cabb6fb6e,
            mid_toString_6a6377ce48a9b594,
            mid_toString_ec96beb60f9f13f1,
            mid_toString_cb57364f5aef34b7,
            mid_toStringTree_dc633f13a47328a8,
            mid_toStringTree_2ed1d40078e9e904,
            mid_toStringTree_6a6377ce48a9b594,
            max_mid
          };

          enum {
            fid_invokingState,
            fid_parent,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuleContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuleContext(const RuleContext& obj) : ::java::lang::Object(obj) {}

          jint _get_invokingState() const;
          void _set_invokingState(jint) const;
          RuleContext _get_parent() const;
          void _set_parent(const RuleContext &) const;

          RuleContext();
          RuleContext(const RuleContext &, jint);

          jint depth() const;
          jint getAltNumber() const;
          jint getChildCount() const;
          RuleContext getParent() const;
          RuleContext getPayload() const;
          RuleContext getRuleContext() const;
          jint getRuleIndex() const;
          ::java::lang::String getText() const;
          jboolean isEmpty() const;
          void setAltNumber(jint) const;
          void setParent(const RuleContext &) const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &) const;
          ::java::lang::String toString(const ::java::util::List &) const;
          ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &, const RuleContext &) const;
          ::java::lang::String toString(const ::java::util::List &, const RuleContext &) const;
          ::java::lang::String toStringTree() const;
          ::java::lang::String toStringTree(const ::org::antlr::v4::runtime::Parser &) const;
          ::java::lang::String toStringTree(const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(RuleContext);
        extern PyTypeObject *PY_TYPE(RuleContext);

        class t_RuleContext {
        public:
          PyObject_HEAD
          RuleContext object;
          static PyObject *wrap_Object(const RuleContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
