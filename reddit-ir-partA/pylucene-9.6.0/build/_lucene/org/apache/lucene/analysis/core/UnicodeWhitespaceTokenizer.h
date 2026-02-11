#ifndef org_apache_lucene_analysis_core_UnicodeWhitespaceTokenizer_H
#define org_apache_lucene_analysis_core_UnicodeWhitespaceTokenizer_H

#include "org/apache/lucene/analysis/util/CharTokenizer.h"

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
        namespace core {

          class UnicodeWhitespaceTokenizer : public ::org::apache::lucene::analysis::util::CharTokenizer {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_f38db80c57bf6528,
              mid_init$_709c5ea8e5f7271f,
              mid_isTokenChar_92eccba87b045bbc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnicodeWhitespaceTokenizer(jobject obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnicodeWhitespaceTokenizer(const UnicodeWhitespaceTokenizer& obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {}

            UnicodeWhitespaceTokenizer();
            UnicodeWhitespaceTokenizer(const ::org::apache::lucene::util::AttributeFactory &);
            UnicodeWhitespaceTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint);
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(UnicodeWhitespaceTokenizer);
          extern PyTypeObject *PY_TYPE(UnicodeWhitespaceTokenizer);

          class t_UnicodeWhitespaceTokenizer {
          public:
            PyObject_HEAD
            UnicodeWhitespaceTokenizer object;
            static PyObject *wrap_Object(const UnicodeWhitespaceTokenizer&);
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
