#ifndef org_apache_lucene_index_TermStates_H
#define org_apache_lucene_index_TermStates_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReaderContext;
        class TermStates;
        class Term;
        class LeafReaderContext;
        class TermState;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class TermStates : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a0b82ef08f61928c,
            mid_init$_b37626ea90b5710e,
            mid_accumulateStatistics_6d2742abed5d70c9,
            mid_build_a3941f5ddb0f167c,
            mid_clear_3353d9f14bbfd91a,
            mid_docFreq_15aa3d485e96b665,
            mid_get_447114ef9b05045f,
            mid_register_12289fde36087c71,
            mid_register_ae1c94e91b685a03,
            mid_toString_dc633f13a47328a8,
            mid_totalTermFreq_058f5911dcf5d8a4,
            mid_wasBuiltFor_316f02c0b24111c4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStates(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermStates(const TermStates& obj) : ::java::lang::Object(obj) {}

          TermStates(const ::org::apache::lucene::index::IndexReaderContext &);
          TermStates(const ::org::apache::lucene::index::IndexReaderContext &, const ::org::apache::lucene::index::TermState &, jint, jint, jlong);

          void accumulateStatistics(jint, jlong) const;
          static TermStates build(const ::org::apache::lucene::index::IndexReaderContext &, const ::org::apache::lucene::index::Term &, jboolean);
          void clear() const;
          jint docFreq() const;
          ::org::apache::lucene::index::TermState get(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint, jint, jlong) const;
          ::java::lang::String toString() const;
          jlong totalTermFreq() const;
          jboolean wasBuiltFor(const ::org::apache::lucene::index::IndexReaderContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(TermStates);
        extern PyTypeObject *PY_TYPE(TermStates);

        class t_TermStates {
        public:
          PyObject_HEAD
          TermStates object;
          static PyObject *wrap_Object(const TermStates&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
