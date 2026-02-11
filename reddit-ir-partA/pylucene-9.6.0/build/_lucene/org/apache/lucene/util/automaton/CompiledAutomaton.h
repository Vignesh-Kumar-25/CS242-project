#ifndef org_apache_lucene_util_automaton_CompiledAutomaton_H
#define org_apache_lucene_util_automaton_CompiledAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
        class Accountable;
        class BytesRef;
        namespace automaton {
          class ByteRunAutomaton;
          class CompiledAutomaton$AUTOMATON_TYPE;
          class Automaton;
        }
      }
      namespace search {
        class Query;
        class QueryVisitor;
      }
      namespace index {
        class TermsEnum;
        class Terms;
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
    class Boolean;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class CompiledAutomaton : public ::java::lang::Object {
           public:
            enum {
              mid_init$_57f677c6e6973f50,
              mid_init$_ed26a48bba71e39a,
              mid_init$_75cb6985c4f12ff3,
              mid_equals_6084f78e09b6c0c3,
              mid_floor_074db417c7ea4499,
              mid_getTermsEnum_c54c71b4dada81a0,
              mid_hashCode_15aa3d485e96b665,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_visit_5f43aed286db67b1,
              max_mid
            };

            enum {
              fid_automaton,
              fid_commonSuffixRef,
              fid_finite,
              fid_runAutomaton,
              fid_sinkState,
              fid_term,
              fid_type,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompiledAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompiledAutomaton(const CompiledAutomaton& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::automaton::Automaton _get_automaton() const;
            ::org::apache::lucene::util::BytesRef _get_commonSuffixRef() const;
            ::java::lang::Boolean _get_finite() const;
            ::org::apache::lucene::util::automaton::ByteRunAutomaton _get_runAutomaton() const;
            jint _get_sinkState() const;
            ::org::apache::lucene::util::BytesRef _get_term() const;
            ::org::apache::lucene::util::automaton::CompiledAutomaton$AUTOMATON_TYPE _get_type() const;

            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &);
            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::Boolean &, jboolean);
            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::Boolean &, jboolean, jint, jboolean);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef floor(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRefBuilder &) const;
            ::org::apache::lucene::index::TermsEnum getTermsEnum(const ::org::apache::lucene::index::Terms &) const;
            jint hashCode() const;
            jlong ramBytesUsed() const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(CompiledAutomaton);
          extern PyTypeObject *PY_TYPE(CompiledAutomaton);

          class t_CompiledAutomaton {
          public:
            PyObject_HEAD
            CompiledAutomaton object;
            static PyObject *wrap_Object(const CompiledAutomaton&);
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
