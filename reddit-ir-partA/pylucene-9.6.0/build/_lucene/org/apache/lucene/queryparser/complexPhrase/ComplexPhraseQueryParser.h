#ifndef org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H
#define org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
      }
      namespace search {
        class Query;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace complexPhrase {

          class ComplexPhraseQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_2dc91590b2674915,
              mid_parse_940b9f2f8aee0aaa,
              mid_setInOrder_4f96af910856b303,
              mid_newRangeQuery_5e298fd9aeaf12ea,
              mid_getFuzzyQuery_1e1d94ae57c788e4,
              mid_getRangeQuery_5e298fd9aeaf12ea,
              mid_getWildcardQuery_8b970d057e017e30,
              mid_getFieldQuery_fbf95c8fba42206c,
              mid_newTermQuery_1ed2f45c8f0b43bd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComplexPhraseQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComplexPhraseQueryParser(const ComplexPhraseQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            ComplexPhraseQueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setInOrder(jboolean) const;
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
      namespace queryparser {
        namespace complexPhrase {
          extern PyType_Def PY_TYPE_DEF(ComplexPhraseQueryParser);
          extern PyTypeObject *PY_TYPE(ComplexPhraseQueryParser);

          class t_ComplexPhraseQueryParser {
          public:
            PyObject_HEAD
            ComplexPhraseQueryParser object;
            static PyObject *wrap_Object(const ComplexPhraseQueryParser&);
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
