#ifndef org_apache_lucene_util_automaton_Operations_H
#define org_apache_lucene_util_automaton_Operations_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
        class IntsRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
    class Set;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Operations : public ::java::lang::Object {
           public:
            enum {
              mid_complement_c9f4092610805a3d,
              mid_concatenate_476964cc7a3ce08c,
              mid_concatenate_53e07c43d7b653e0,
              mid_determinize_c9f4092610805a3d,
              mid_getCommonPrefix_4cbd8161a58784a2,
              mid_getCommonPrefixBytesRef_1c3cec0cc329bb64,
              mid_getCommonSuffixBytesRef_1c3cec0cc329bb64,
              mid_getSingleton_2b67988d316dc092,
              mid_hasDeadStates_330857c68b5eb49a,
              mid_hasDeadStatesFromInitial_330857c68b5eb49a,
              mid_hasDeadStatesToAccept_330857c68b5eb49a,
              mid_intersection_53e07c43d7b653e0,
              mid_isEmpty_330857c68b5eb49a,
              mid_isFinite_330857c68b5eb49a,
              mid_isTotal_330857c68b5eb49a,
              mid_isTotal_b7b9cca9fed5f984,
              mid_minus_d33a5a905b23de9d,
              mid_optional_af82b1f8b04e817d,
              mid_removeDeadStates_af82b1f8b04e817d,
              mid_repeat_af82b1f8b04e817d,
              mid_repeat_c9f4092610805a3d,
              mid_repeat_aa88ec9143989366,
              mid_reverse_af82b1f8b04e817d,
              mid_reverse_e4f17b38a38ca0c1,
              mid_run_89edfdf36972318f,
              mid_run_dd3eaf7440b69bd7,
              mid_sameLanguage_9983b8f6f3e5514e,
              mid_subsetOf_9983b8f6f3e5514e,
              mid_topoSortStates_6e1e5d9b683ec9d2,
              mid_union_2243079f888a1552,
              mid_union_53e07c43d7b653e0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Operations(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Operations(const Operations& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_DETERMINIZE_WORK_LIMIT;
            static jint MAX_RECURSION_LEVEL;

            static ::org::apache::lucene::util::automaton::Automaton complement(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::java::util::List &);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton determinize(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::java::lang::String getCommonPrefix(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonPrefixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonSuffixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::IntsRef getSingleton(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStatesFromInitial(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStatesToAccept(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton intersection(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isEmpty(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isFinite(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isTotal(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isTotal(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton minus(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton optional(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton removeDeadStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton reverse(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton reverse(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::util::Set &);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::String &);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::IntsRef &);
            static jboolean sameLanguage(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean subsetOf(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static JArray< jint > topoSortStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::java::util::Collection &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
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
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(Operations);
          extern PyTypeObject *PY_TYPE(Operations);

          class t_Operations {
          public:
            PyObject_HEAD
            Operations object;
            static PyObject *wrap_Object(const Operations&);
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
