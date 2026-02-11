#ifndef org_apache_lucene_analysis_pattern_PatternTokenizer_H
#define org_apache_lucene_analysis_pattern_PatternTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
  namespace io {
    class IOException;
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
        namespace pattern {

          class PatternTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_cbcd927c41d96140,
              mid_init$_ab3ab7c80d645cb8,
              mid_close_3353d9f14bbfd91a,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternTokenizer(const PatternTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            PatternTokenizer(const ::java::util::regex::Pattern &, jint);
            PatternTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::util::regex::Pattern &, jint);

            void close() const;
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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternTokenizer);
          extern PyTypeObject *PY_TYPE(PatternTokenizer);

          class t_PatternTokenizer {
          public:
            PyObject_HEAD
            PatternTokenizer object;
            static PyObject *wrap_Object(const PatternTokenizer&);
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
