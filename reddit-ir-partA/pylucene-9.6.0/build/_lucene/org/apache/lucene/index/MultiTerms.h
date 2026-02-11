#ifndef org_apache_lucene_index_MultiTerms_H
#define org_apache_lucene_index_MultiTerms_H

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
        class ReaderSlice;
        class IndexReader;
        class PostingsEnum;
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

        class MultiTerms : public ::org::apache::lucene::index::Terms {
         public:
          enum {
            mid_init$_a0def0e847fc9c91,
            mid_getDocCount_15aa3d485e96b665,
            mid_getMax_e6961a1ebae5a29a,
            mid_getMin_e6961a1ebae5a29a,
            mid_getSubSlices_604f1c76d1eaa224,
            mid_getSubTerms_0f3eebf00a3968d3,
            mid_getSumDocFreq_058f5911dcf5d8a4,
            mid_getSumTotalTermFreq_058f5911dcf5d8a4,
            mid_getTermPostingsEnum_7564e222473be90e,
            mid_getTermPostingsEnum_5ee8e75c723e7df7,
            mid_getTerms_98d27372bf94b35c,
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

          explicit MultiTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTerms(const MultiTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

          MultiTerms(const JArray< ::org::apache::lucene::index::Terms > &, const JArray< ::org::apache::lucene::index::ReaderSlice > &);

          jint getDocCount() const;
          ::org::apache::lucene::util::BytesRef getMax() const;
          ::org::apache::lucene::util::BytesRef getMin() const;
          JArray< ::org::apache::lucene::index::ReaderSlice > getSubSlices() const;
          JArray< ::org::apache::lucene::index::Terms > getSubTerms() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          static ::org::apache::lucene::index::PostingsEnum getTermPostingsEnum(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::index::PostingsEnum getTermPostingsEnum(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jint);
          static ::org::apache::lucene::index::Terms getTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(MultiTerms);
        extern PyTypeObject *PY_TYPE(MultiTerms);

        class t_MultiTerms {
        public:
          PyObject_HEAD
          MultiTerms object;
          static PyObject *wrap_Object(const MultiTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
