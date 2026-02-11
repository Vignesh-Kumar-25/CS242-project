#ifndef org_antlr_v4_runtime_atn_ATNConfigSet_H
#define org_antlr_v4_runtime_atn_ATNConfigSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class ArrayList;
    class List;
    class Collection;
    class BitSet;
    class Set;
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
        namespace atn {
          class ATNSimulator;
          class ATNState;
          class SemanticContext;
          class ATNConfigSet$AbstractConfigHashSet;
          class ATNConfig;
        }
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

          class ATNConfigSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_4f96af910856b303,
              mid_add_4e1e0f1b0fa7c91e,
              mid_addAll_919ee2b3f5bcb8c4,
              mid_clear_3353d9f14bbfd91a,
              mid_contains_6084f78e09b6c0c3,
              mid_containsAll_919ee2b3f5bcb8c4,
              mid_containsFast_4e1e0f1b0fa7c91e,
              mid_elements_0bc66e960964b70a,
              mid_equals_6084f78e09b6c0c3,
              mid_get_85d5070d27a614e8,
              mid_getAlts_4d7a5956602f7bbb,
              mid_getPredicates_0bc66e960964b70a,
              mid_getStates_9a625d56b67c7390,
              mid_hashCode_15aa3d485e96b665,
              mid_isEmpty_ee8b0a5fa521ddac,
              mid_isReadonly_ee8b0a5fa521ddac,
              mid_iterator_7c74834ad8788f5d,
              mid_optimizeConfigs_dc9ed29111aa4baa,
              mid_remove_6084f78e09b6c0c3,
              mid_removeAll_919ee2b3f5bcb8c4,
              mid_retainAll_919ee2b3f5bcb8c4,
              mid_setReadonly_4f96af910856b303,
              mid_size_15aa3d485e96b665,
              mid_toArray_54b8eed782c002e6,
              mid_toArray_a53302d2d48784e1,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_configLookup,
              fid_configs,
              fid_dipsIntoOuterContext,
              fid_fullCtx,
              fid_hasSemanticContext,
              fid_uniqueAlt,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNConfigSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNConfigSet(const ATNConfigSet& obj) : ::java::lang::Object(obj) {}

            ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet _get_configLookup() const;
            void _set_configLookup(const ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet &) const;
            ::java::util::ArrayList _get_configs() const;
            jboolean _get_dipsIntoOuterContext() const;
            void _set_dipsIntoOuterContext(jboolean) const;
            jboolean _get_fullCtx() const;
            jboolean _get_hasSemanticContext() const;
            void _set_hasSemanticContext(jboolean) const;
            jint _get_uniqueAlt() const;
            void _set_uniqueAlt(jint) const;

            ATNConfigSet();
            ATNConfigSet(jboolean);

            jboolean add(const ::org::antlr::v4::runtime::atn::ATNConfig &) const;
            jboolean addAll(const ::java::util::Collection &) const;
            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            jboolean containsAll(const ::java::util::Collection &) const;
            jboolean containsFast(const ::org::antlr::v4::runtime::atn::ATNConfig &) const;
            ::java::util::List elements() const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::antlr::v4::runtime::atn::ATNConfig get(jint) const;
            ::java::util::BitSet getAlts() const;
            ::java::util::List getPredicates() const;
            ::java::util::Set getStates() const;
            jint hashCode() const;
            jboolean isEmpty() const;
            jboolean isReadonly() const;
            ::java::util::Iterator iterator() const;
            void optimizeConfigs(const ::org::antlr::v4::runtime::atn::ATNSimulator &) const;
            jboolean remove(const ::java::lang::Object &) const;
            jboolean removeAll(const ::java::util::Collection &) const;
            jboolean retainAll(const ::java::util::Collection &) const;
            void setReadonly(jboolean) const;
            jint size() const;
            JArray< ::org::antlr::v4::runtime::atn::ATNConfig > toArray() const;
            JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(ATNConfigSet);
          extern PyTypeObject *PY_TYPE(ATNConfigSet);

          class t_ATNConfigSet {
          public:
            PyObject_HEAD
            ATNConfigSet object;
            static PyObject *wrap_Object(const ATNConfigSet&);
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
