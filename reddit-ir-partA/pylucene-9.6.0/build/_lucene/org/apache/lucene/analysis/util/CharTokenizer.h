#ifndef org_apache_lucene_analysis_util_CharTokenizer_H
#define org_apache_lucene_analysis_util_CharTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace util {
    namespace function {
      class IntPredicate;
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
      namespace analysis {
        namespace util {
          class CharTokenizer;
        }
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

          class CharTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_f38db80c57bf6528,
              mid_init$_709c5ea8e5f7271f,
              mid_end_3353d9f14bbfd91a,
              mid_fromSeparatorCharPredicate_315ac9b34b4a3155,
              mid_fromSeparatorCharPredicate_c06e6821868e2d39,
              mid_fromTokenCharPredicate_315ac9b34b4a3155,
              mid_fromTokenCharPredicate_c06e6821868e2d39,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              mid_isTokenChar_92eccba87b045bbc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTokenizer(const CharTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_MAX_WORD_LEN;

            CharTokenizer();
            CharTokenizer(const ::org::apache::lucene::util::AttributeFactory &);
            CharTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint);

            void end() const;
            static CharTokenizer fromSeparatorCharPredicate(const ::java::util::function::IntPredicate &);
            static CharTokenizer fromSeparatorCharPredicate(const ::org::apache::lucene::util::AttributeFactory &, const ::java::util::function::IntPredicate &);
            static CharTokenizer fromTokenCharPredicate(const ::java::util::function::IntPredicate &);
            static CharTokenizer fromTokenCharPredicate(const ::org::apache::lucene::util::AttributeFactory &, const ::java::util::function::IntPredicate &);
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
          extern PyType_Def PY_TYPE_DEF(CharTokenizer);
          extern PyTypeObject *PY_TYPE(CharTokenizer);

          class t_CharTokenizer {
          public:
            PyObject_HEAD
            CharTokenizer object;
            static PyObject *wrap_Object(const CharTokenizer&);
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
