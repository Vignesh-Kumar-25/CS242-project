#ifndef org_apache_lucene_index_Terms_H
#define org_apache_lucene_index_Terms_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace index {
        class TermsEnum;
        class LeafReader;
        class Terms;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Terms : public ::java::lang::Object {
         public:
          enum {
            mid_getDocCount_15aa3d485e96b665,
            mid_getMax_e6961a1ebae5a29a,
            mid_getMin_e6961a1ebae5a29a,
            mid_getStats_bdd51648087bae52,
            mid_getSumDocFreq_058f5911dcf5d8a4,
            mid_getSumTotalTermFreq_058f5911dcf5d8a4,
            mid_getTerms_a03bae2e690c3cd3,
            mid_hasFreqs_ee8b0a5fa521ddac,
            mid_hasOffsets_ee8b0a5fa521ddac,
            mid_hasPayloads_ee8b0a5fa521ddac,
            mid_hasPositions_ee8b0a5fa521ddac,
            mid_intersect_a757e191868ae759,
            mid_iterator_b2ad4a24df27c060,
            mid_size_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Terms(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Terms(const Terms& obj) : ::java::lang::Object(obj) {}

          static JArray< Terms > *EMPTY_ARRAY;

          jint getDocCount() const;
          ::org::apache::lucene::util::BytesRef getMax() const;
          ::org::apache::lucene::util::BytesRef getMin() const;
          ::java::lang::Object getStats() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          static Terms getTerms(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          jboolean hasFreqs() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPositions() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::index::TermsEnum iterator() const;
          jlong size() const;
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
        extern PyType_Def PY_TYPE_DEF(Terms);
        extern PyTypeObject *PY_TYPE(Terms);

        class t_Terms {
        public:
          PyObject_HEAD
          Terms object;
          static PyObject *wrap_Object(const Terms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
