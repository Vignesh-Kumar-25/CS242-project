#ifndef org_apache_lucene_index_TermsEnum_H
#define org_apache_lucene_index_TermsEnum_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeSource;
        class BytesRefIterator;
      }
      namespace index {
        class ImpactsEnum;
        class TermState;
        class TermsEnum;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class TermsEnum : public ::java::lang::Object {
         public:
          enum {
            mid_attributes_a6afc952c7a48446,
            mid_docFreq_15aa3d485e96b665,
            mid_impacts_a7911ea7f066095b,
            mid_ord_058f5911dcf5d8a4,
            mid_postings_8056daf67945e8d8,
            mid_postings_5169b11dd2a92cbd,
            mid_seekCeil_9eba252e35b6bc50,
            mid_seekExact_d146ede34c2ecacf,
            mid_seekExact_db2028ac45cd5b77,
            mid_seekExact_e2a49f0a9649fd0e,
            mid_term_e6961a1ebae5a29a,
            mid_termState_5d53046b0d72b0fe,
            mid_totalTermFreq_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermsEnum(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermsEnum(const TermsEnum& obj) : ::java::lang::Object(obj) {}

          static TermsEnum *EMPTY;

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint docFreq() const;
          ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
          jlong ord() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::org::apache::lucene::index::TermState termState() const;
          jlong totalTermFreq() const;
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
        extern PyType_Def PY_TYPE_DEF(TermsEnum);
        extern PyTypeObject *PY_TYPE(TermsEnum);

        class t_TermsEnum {
        public:
          PyObject_HEAD
          TermsEnum object;
          static PyObject *wrap_Object(const TermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
