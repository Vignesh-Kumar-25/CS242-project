#ifndef org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizer_H
#define org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
        class AttributeFactory;
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
      namespace analysis {
        namespace pattern {

          class SimplePatternSplitTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_4a883f7810d2effa,
              mid_init$_57f677c6e6973f50,
              mid_init$_c79bf1846dbf9f1e,
              mid_init$_84459b501b70e05b,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimplePatternSplitTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimplePatternSplitTokenizer(const SimplePatternSplitTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            SimplePatternSplitTokenizer(const ::java::lang::String &);
            SimplePatternSplitTokenizer(const ::org::apache::lucene::util::automaton::Automaton &);
            SimplePatternSplitTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::util::automaton::Automaton &);
            SimplePatternSplitTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::lang::String &, jint);

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
          extern PyType_Def PY_TYPE_DEF(SimplePatternSplitTokenizer);
          extern PyTypeObject *PY_TYPE(SimplePatternSplitTokenizer);

          class t_SimplePatternSplitTokenizer {
          public:
            PyObject_HEAD
            SimplePatternSplitTokenizer object;
            static PyObject *wrap_Object(const SimplePatternSplitTokenizer&);
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
