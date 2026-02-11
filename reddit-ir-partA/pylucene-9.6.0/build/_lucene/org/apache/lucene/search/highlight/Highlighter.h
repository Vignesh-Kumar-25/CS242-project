#ifndef org_apache_lucene_search_highlight_Highlighter_H
#define org_apache_lucene_search_highlight_Highlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Scorer;
          class Encoder;
          class Fragmenter;
          class Formatter;
          class TextFragment;
          class InvalidTokenOffsetsException;
        }
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
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
      namespace search {
        namespace highlight {

          class Highlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3d7f6fdf43a0b6f9,
              mid_init$_e60c8c6c4ad3f9b6,
              mid_init$_90170ae87358e6d6,
              mid_getBestFragment_c292ca5fef712071,
              mid_getBestFragment_d5c715713fa7469b,
              mid_getBestFragments_14a1a984f0267290,
              mid_getBestFragments_1c2d8f54e8664459,
              mid_getBestFragments_ef7695be7c398291,
              mid_getBestTextFragments_62e3f84637a3c289,
              mid_getEncoder_94278ca590d9f908,
              mid_getFragmentScorer_74b269927d197168,
              mid_getMaxDocCharsToAnalyze_15aa3d485e96b665,
              mid_getTextFragmenter_cfec804fdf742f13,
              mid_setEncoder_6fbbe0e3e565ba0a,
              mid_setFragmentScorer_3d7f6fdf43a0b6f9,
              mid_setMaxDocCharsToAnalyze_da425451c8de636b,
              mid_setTextFragmenter_2f8bd5258d5d8266,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Highlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Highlighter(const Highlighter& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_CHARS_TO_ANALYZE;

            Highlighter(const ::org::apache::lucene::search::highlight::Scorer &);
            Highlighter(const ::org::apache::lucene::search::highlight::Formatter &, const ::org::apache::lucene::search::highlight::Scorer &);
            Highlighter(const ::org::apache::lucene::search::highlight::Formatter &, const ::org::apache::lucene::search::highlight::Encoder &, const ::org::apache::lucene::search::highlight::Scorer &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::java::lang::String &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint, const ::java::lang::String &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::java::lang::String &, jint) const;
            JArray< ::org::apache::lucene::search::highlight::TextFragment > getBestTextFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jboolean, jint) const;
            ::org::apache::lucene::search::highlight::Encoder getEncoder() const;
            ::org::apache::lucene::search::highlight::Scorer getFragmentScorer() const;
            jint getMaxDocCharsToAnalyze() const;
            ::org::apache::lucene::search::highlight::Fragmenter getTextFragmenter() const;
            void setEncoder(const ::org::apache::lucene::search::highlight::Encoder &) const;
            void setFragmentScorer(const ::org::apache::lucene::search::highlight::Scorer &) const;
            void setMaxDocCharsToAnalyze(jint) const;
            void setTextFragmenter(const ::org::apache::lucene::search::highlight::Fragmenter &) const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(Highlighter);
          extern PyTypeObject *PY_TYPE(Highlighter);

          class t_Highlighter {
          public:
            PyObject_HEAD
            Highlighter object;
            static PyObject *wrap_Object(const Highlighter&);
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
