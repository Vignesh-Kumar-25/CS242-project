#ifndef org_apache_lucene_analysis_compound_hyphenation_PatternParser_H
#define org_apache_lucene_analysis_compound_hyphenation_PatternParser_H

#include "org/xml/sax/helpers/DefaultHandler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class PatternConsumer;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class PatternParser : public ::org::xml::sax::helpers::DefaultHandler {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_6af97602e50bda48,
                mid_characters_9df2689bc3d19600,
                mid_endElement_e9bc0b4173a3531d,
                mid_parse_4a883f7810d2effa,
                mid_setConsumer_6af97602e50bda48,
                mid_getPattern_04612c8360f09496,
                mid_readToken_37f17296c518ade0,
                mid_normalizeException_9891dbc767a2606f,
                mid_getExceptionWord_8d3aaacdfb33602b,
                mid_getInterletterValues_04612c8360f09496,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PatternParser(jobject obj) : ::org::xml::sax::helpers::DefaultHandler(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PatternParser(const PatternParser& obj) : ::org::xml::sax::helpers::DefaultHandler(obj) {}

              PatternParser();
              PatternParser(const ::org::apache::lucene::analysis::compound::hyphenation::PatternConsumer &);

              void characters(const JArray< jchar > &, jint, jint) const;
              void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
              void parse(const ::java::lang::String &) const;
              void setConsumer(const ::org::apache::lucene::analysis::compound::hyphenation::PatternConsumer &) const;
            };
          }
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
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(PatternParser);
            extern PyTypeObject *PY_TYPE(PatternParser);

            class t_PatternParser {
            public:
              PyObject_HEAD
              PatternParser object;
              static PyObject *wrap_Object(const PatternParser&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
