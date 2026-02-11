#ifndef org_apache_lucene_backward_codecs_lucene40_blocktree_FieldReader_H
#define org_apache_lucene_backward_codecs_lucene40_blocktree_FieldReader_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace backward_codecs {
        namespace lucene40 {
          namespace blocktree {
            class Stats;
          }
        }
      }
      namespace index {
        class TermsEnum;
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
      namespace backward_codecs {
        namespace lucene40 {
          namespace blocktree {

            class FieldReader : public ::org::apache::lucene::index::Terms {
             public:
              enum {
                mid_getDocCount_15aa3d485e96b665,
                mid_getMax_e6961a1ebae5a29a,
                mid_getMin_e6961a1ebae5a29a,
                mid_getStats_d45431e16fcdeb28,
                mid_getSumDocFreq_058f5911dcf5d8a4,
                mid_getSumTotalTermFreq_058f5911dcf5d8a4,
                mid_hasFreqs_ee8b0a5fa521ddac,
                mid_hasOffsets_ee8b0a5fa521ddac,
                mid_hasPayloads_ee8b0a5fa521ddac,
                mid_hasPositions_ee8b0a5fa521ddac,
                mid_intersect_a757e191868ae759,
                mid_iterator_b2ad4a24df27c060,
                mid_size_058f5911dcf5d8a4,
                mid_toString_dc633f13a47328a8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldReader(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldReader(const FieldReader& obj) : ::org::apache::lucene::index::Terms(obj) {}

              jint getDocCount() const;
              ::org::apache::lucene::util::BytesRef getMax() const;
              ::org::apache::lucene::util::BytesRef getMin() const;
              ::org::apache::lucene::backward_codecs::lucene40::blocktree::Stats getStats() const;
              jlong getSumDocFreq() const;
              jlong getSumTotalTermFreq() const;
              jboolean hasFreqs() const;
              jboolean hasOffsets() const;
              jboolean hasPayloads() const;
              jboolean hasPositions() const;
              ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
              ::org::apache::lucene::index::TermsEnum iterator() const;
              jlong size() const;
              ::java::lang::String toString() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene40 {
          namespace blocktree {
            extern PyType_Def PY_TYPE_DEF(FieldReader);
            extern PyTypeObject *PY_TYPE(FieldReader);

            class t_FieldReader {
            public:
              PyObject_HEAD
              FieldReader object;
              static PyObject *wrap_Object(const FieldReader&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
