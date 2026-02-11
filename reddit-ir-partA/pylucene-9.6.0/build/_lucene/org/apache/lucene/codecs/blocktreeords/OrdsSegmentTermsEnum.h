#ifndef org_apache_lucene_codecs_blocktreeords_OrdsSegmentTermsEnum_H
#define org_apache_lucene_codecs_blocktreeords_OrdsSegmentTermsEnum_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class ImpactsEnum;
        class TermState;
        class PostingsEnum;
        class TermsEnum$SeekStatus;
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
      namespace codecs {
        namespace blocktreeords {

          class OrdsSegmentTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
           public:
            enum {
              mid_docFreq_15aa3d485e96b665,
              mid_impacts_a7911ea7f066095b,
              mid_next_e6961a1ebae5a29a,
              mid_ord_058f5911dcf5d8a4,
              mid_postings_5169b11dd2a92cbd,
              mid_seekCeil_9eba252e35b6bc50,
              mid_seekExact_d146ede34c2ecacf,
              mid_seekExact_db2028ac45cd5b77,
              mid_seekExact_e2a49f0a9649fd0e,
              mid_term_e6961a1ebae5a29a,
              mid_termState_5d53046b0d72b0fe,
              mid_toString_dc633f13a47328a8,
              mid_totalTermFreq_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdsSegmentTermsEnum(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdsSegmentTermsEnum(const OrdsSegmentTermsEnum& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

            jint docFreq() const;
            ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
            ::org::apache::lucene::util::BytesRef next() const;
            jlong ord() const;
            ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
            ::org::apache::lucene::util::BytesRef term() const;
            ::org::apache::lucene::index::TermState termState() const;
            ::java::lang::String toString() const;
            jlong totalTermFreq() const;
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
        namespace blocktreeords {
          extern PyType_Def PY_TYPE_DEF(OrdsSegmentTermsEnum);
          extern PyTypeObject *PY_TYPE(OrdsSegmentTermsEnum);

          class t_OrdsSegmentTermsEnum {
          public:
            PyObject_HEAD
            OrdsSegmentTermsEnum object;
            static PyObject *wrap_Object(const OrdsSegmentTermsEnum&);
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
