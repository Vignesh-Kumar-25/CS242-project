#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTerms_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTerms_H

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
      namespace index {
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class UniformSplitTerms : public ::org::apache::lucene::index::Terms {
           public:
            enum {
              mid_getDocCount_15aa3d485e96b665,
              mid_getMax_e6961a1ebae5a29a,
              mid_getSumDocFreq_058f5911dcf5d8a4,
              mid_getSumTotalTermFreq_058f5911dcf5d8a4,
              mid_hasFreqs_ee8b0a5fa521ddac,
              mid_hasOffsets_ee8b0a5fa521ddac,
              mid_hasPayloads_ee8b0a5fa521ddac,
              mid_hasPositions_ee8b0a5fa521ddac,
              mid_intersect_a757e191868ae759,
              mid_iterator_b2ad4a24df27c060,
              mid_size_058f5911dcf5d8a4,
              mid_checkIntersectAutomatonType_baf066f936694372,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTerms(const UniformSplitTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

            jint getDocCount() const;
            ::org::apache::lucene::util::BytesRef getMax() const;
            jlong getSumDocFreq() const;
            jlong getSumTotalTermFreq() const;
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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(UniformSplitTerms);
          extern PyTypeObject *PY_TYPE(UniformSplitTerms);

          class t_UniformSplitTerms {
          public:
            PyObject_HEAD
            UniformSplitTerms object;
            static PyObject *wrap_Object(const UniformSplitTerms&);
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
