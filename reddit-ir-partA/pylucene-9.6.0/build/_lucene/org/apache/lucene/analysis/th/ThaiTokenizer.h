#ifndef org_apache_lucene_analysis_th_ThaiTokenizer_H
#define org_apache_lucene_analysis_th_ThaiTokenizer_H

#include "org/apache/lucene/analysis/util/SegmentingTokenizerBase.h"

namespace java {
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
        namespace th {

          class ThaiTokenizer : public ::org::apache::lucene::analysis::util::SegmentingTokenizerBase {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_f38db80c57bf6528,
              mid_setNextSentence_078cef180abf5351,
              mid_incrementWord_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThaiTokenizer(jobject obj) : ::org::apache::lucene::analysis::util::SegmentingTokenizerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ThaiTokenizer(const ThaiTokenizer& obj) : ::org::apache::lucene::analysis::util::SegmentingTokenizerBase(obj) {}

            static jboolean DBBI_AVAILABLE;

            ThaiTokenizer();
            ThaiTokenizer(const ::org::apache::lucene::util::AttributeFactory &);
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
        namespace th {
          extern PyType_Def PY_TYPE_DEF(ThaiTokenizer);
          extern PyTypeObject *PY_TYPE(ThaiTokenizer);

          class t_ThaiTokenizer {
          public:
            PyObject_HEAD
            ThaiTokenizer object;
            static PyObject *wrap_Object(const ThaiTokenizer&);
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
