#ifndef org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H
#define org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause$Occur;
      }
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Float;
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class MultiFieldQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_ce80d701ce522127,
              mid_init$_0c61e2794f010839,
              mid_parse_db417e816d16022a,
              mid_parse_baa1e84ae3229f47,
              mid_parse_1865700c12eb2f03,
              mid_getFuzzyQuery_1e1d94ae57c788e4,
              mid_getPrefixQuery_8b970d057e017e30,
              mid_getRangeQuery_5e298fd9aeaf12ea,
              mid_getWildcardQuery_8b970d057e017e30,
              mid_getFieldQuery_fbf95c8fba42206c,
              mid_getFieldQuery_91f72ed1bdd76185,
              mid_getRegexpQuery_8b970d057e017e30,
              mid_getMultiFieldQuery_b531d56b1197b40a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiFieldQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiFieldQueryParser(const MultiFieldQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            MultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
            MultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);

            static ::org::apache::lucene::search::Query parse(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::Query parse(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::Query parse(const ::java::lang::String &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
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
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(MultiFieldQueryParser);
          extern PyTypeObject *PY_TYPE(MultiFieldQueryParser);

          class t_MultiFieldQueryParser {
          public:
            PyObject_HEAD
            MultiFieldQueryParser object;
            static PyObject *wrap_Object(const MultiFieldQueryParser&);
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
