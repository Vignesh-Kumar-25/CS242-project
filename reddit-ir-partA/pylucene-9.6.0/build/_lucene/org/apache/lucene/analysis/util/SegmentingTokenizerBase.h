#ifndef org_apache_lucene_analysis_util_SegmentingTokenizerBase_H
#define org_apache_lucene_analysis_util_SegmentingTokenizerBase_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace text {
    class BreakIterator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class SegmentingTokenizerBase : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_30742cc4dbfb0d6e,
              mid_init$_2f640854a5f60fc6,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              mid_isSafeEnd_7bae3cc4661f3586,
              mid_setNextSentence_078cef180abf5351,
              mid_incrementWord_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SegmentingTokenizerBase(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SegmentingTokenizerBase(const SegmentingTokenizerBase& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            SegmentingTokenizerBase(const ::java::text::BreakIterator &);
            SegmentingTokenizerBase(const ::org::apache::lucene::util::AttributeFactory &, const ::java::text::BreakIterator &);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(SegmentingTokenizerBase);
          extern PyTypeObject *PY_TYPE(SegmentingTokenizerBase);

          class t_SegmentingTokenizerBase {
          public:
            PyObject_HEAD
            SegmentingTokenizerBase object;
            static PyObject *wrap_Object(const SegmentingTokenizerBase&);
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
