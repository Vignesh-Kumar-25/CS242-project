#ifndef org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilter_H
#define org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilter_H

#include "org/apache/lucene/analysis/compound/CompoundWordTokenFilterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace compound {
          namespace hyphenation {
            class HyphenationTree;
          }
        }
        class CharArraySet;
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
        namespace compound {

          class HyphenationCompoundWordTokenFilter : public ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase {
           public:
            enum {
              mid_init$_11f2e35d996886d4,
              mid_init$_683289d6a59b5d67,
              mid_init$_470de8b0701066c4,
              mid_init$_82cf4c0756c723b1,
              mid_getHyphenationTree_57e8f13ce3f08aae,
              mid_decompose_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HyphenationCompoundWordTokenFilter(jobject obj) : ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HyphenationCompoundWordTokenFilter(const HyphenationCompoundWordTokenFilter& obj) : ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase(obj) {}

            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::CharArraySet &);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, jint, jint, jint);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::CharArraySet &, jint, jint, jint, jboolean);

            static ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree getHyphenationTree(const ::java::lang::String &);
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
        namespace compound {
          extern PyType_Def PY_TYPE_DEF(HyphenationCompoundWordTokenFilter);
          extern PyTypeObject *PY_TYPE(HyphenationCompoundWordTokenFilter);

          class t_HyphenationCompoundWordTokenFilter {
          public:
            PyObject_HEAD
            HyphenationCompoundWordTokenFilter object;
            static PyObject *wrap_Object(const HyphenationCompoundWordTokenFilter&);
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
