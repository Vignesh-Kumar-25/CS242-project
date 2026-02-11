#ifndef org_antlr_v4_runtime_atn_PredictionContext_H
#define org_antlr_v4_runtime_atn_PredictionContext_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class IdentityHashMap;
    class List;
    class Map;
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
        namespace atn {
          class PredictionContextCache;
          class SingletonPredictionContext;
          class ArrayPredictionContext;
          class PredictionContext;
          class ATN;
        }
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
        namespace atn {

          class PredictionContext : public ::java::lang::Object {
           public:
            enum {
              mid_equals_6084f78e09b6c0c3,
              mid_fromRuleContext_bbb9d42a917847d0,
              mid_getAllContextNodes_8b9874c1d0c0542f,
              mid_getAllContextNodes__1ba3052a07eee88a,
              mid_getCachedContext_aa6ef664a78eba3b,
              mid_getParent_04fc33d03a91bd04,
              mid_getReturnState_58b165b57740feff,
              mid_hasEmptyPath_ee8b0a5fa521ddac,
              mid_hashCode_15aa3d485e96b665,
              mid_isEmpty_ee8b0a5fa521ddac,
              mid_mergeRoot_bdd7d98ef89cd345,
              mid_size_15aa3d485e96b665,
              mid_toDOTString_c8516bbb8a6ef928,
              mid_toString_37328b5cabb6fb6e,
              mid_toStrings_a7900e55416a870b,
              mid_toStrings_a4cbc8f5175bf790,
              mid_calculateEmptyHashCode_15aa3d485e96b665,
              mid_combineCommonParents_65e43d357448d34a,
              mid_calculateHashCode_78abbbb6df526485,
              mid_calculateHashCode_84db2fb205c2497d,
              max_mid
            };

            enum {
              fid_cachedHashCode,
              fid_id,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PredictionContext(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PredictionContext(const PredictionContext& obj) : ::java::lang::Object(obj) {}

            static jint EMPTY_RETURN_STATE;

            jint _get_cachedHashCode() const;
            jint _get_id() const;

            jboolean equals(const ::java::lang::Object &) const;
            static PredictionContext fromRuleContext(const ::org::antlr::v4::runtime::atn::ATN &, const ::org::antlr::v4::runtime::RuleContext &);
            static ::java::util::List getAllContextNodes(const PredictionContext &);
            static void getAllContextNodes_(const PredictionContext &, const ::java::util::List &, const ::java::util::Map &);
            static PredictionContext getCachedContext(const PredictionContext &, const ::org::antlr::v4::runtime::atn::PredictionContextCache &, const ::java::util::IdentityHashMap &);
            PredictionContext getParent(jint) const;
            jint getReturnState(jint) const;
            jboolean hasEmptyPath() const;
            jint hashCode() const;
            jboolean isEmpty() const;
            static PredictionContext mergeRoot(const ::org::antlr::v4::runtime::atn::SingletonPredictionContext &, const ::org::antlr::v4::runtime::atn::SingletonPredictionContext &, jboolean);
            jint size() const;
            static ::java::lang::String toDOTString(const PredictionContext &);
            ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &) const;
            JArray< ::java::lang::String > toStrings(const ::org::antlr::v4::runtime::Recognizer &, jint) const;
            JArray< ::java::lang::String > toStrings(const ::org::antlr::v4::runtime::Recognizer &, const PredictionContext &, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(PredictionContext);
          extern PyTypeObject *PY_TYPE(PredictionContext);

          class t_PredictionContext {
          public:
            PyObject_HEAD
            PredictionContext object;
            static PyObject *wrap_Object(const PredictionContext&);
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
