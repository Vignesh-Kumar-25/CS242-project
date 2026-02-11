#ifndef org_apache_lucene_search_FuzzyTermsEnum_H
#define org_apache_lucene_search_FuzzyTermsEnum_H

#include "org/apache/lucene/index/TermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeSource;
      }
      namespace index {
        class ImpactsEnum;
        class TermState;
        class Term;
        class PostingsEnum;
        class TermsEnum$SeekStatus;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FuzzyTermsEnum : public ::org::apache::lucene::index::TermsEnum {
         public:
          enum {
            mid_init$_c2f371c76872aec1,
            mid_attributes_a6afc952c7a48446,
            mid_docFreq_15aa3d485e96b665,
            mid_getBoost_15cd8574741b1394,
            mid_impacts_a7911ea7f066095b,
            mid_next_e6961a1ebae5a29a,
            mid_ord_058f5911dcf5d8a4,
            mid_postings_5169b11dd2a92cbd,
            mid_seekCeil_9eba252e35b6bc50,
            mid_seekExact_d146ede34c2ecacf,
            mid_seekExact_db2028ac45cd5b77,
            mid_seekExact_e2a49f0a9649fd0e,
            mid_setMaxNonCompetitiveBoost_354c036766ff84b4,
            mid_term_e6961a1ebae5a29a,
            mid_termState_5d53046b0d72b0fe,
            mid_totalTermFreq_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyTermsEnum(jobject obj) : ::org::apache::lucene::index::TermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FuzzyTermsEnum(const FuzzyTermsEnum& obj) : ::org::apache::lucene::index::TermsEnum(obj) {}

          FuzzyTermsEnum(const ::org::apache::lucene::index::Terms &, const ::org::apache::lucene::index::Term &, jint, jint, jboolean);

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint docFreq() const;
          jfloat getBoost() const;
          ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
          ::org::apache::lucene::util::BytesRef next() const;
          jlong ord() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
          void setMaxNonCompetitiveBoost(jfloat) const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FuzzyTermsEnum);
        extern PyTypeObject *PY_TYPE(FuzzyTermsEnum);

        class t_FuzzyTermsEnum {
        public:
          PyObject_HEAD
          FuzzyTermsEnum object;
          static PyObject *wrap_Object(const FuzzyTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
