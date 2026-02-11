#ifndef org_apache_pylucene_queryparser_classic_PythonMultiFieldQueryParser_H
#define org_apache_pylucene_queryparser_classic_PythonMultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/MultiFieldQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause;
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
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {

          class PythonMultiFieldQueryParser : public ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser {
           public:
            enum {
              mid_init$_ce80d701ce522127,
              mid_finalize_3353d9f14bbfd91a,
              mid_getBooleanQuery_b531d56b1197b40a,
              mid_getFieldQuery_91f72ed1bdd76185,
              mid_getFieldQuery_fbf95c8fba42206c,
              mid_getFieldQuery_quoted_91f72ed1bdd76185,
              mid_getFieldQuery_quoted_super_91f72ed1bdd76185,
              mid_getFieldQuery_slop_fbf95c8fba42206c,
              mid_getFieldQuery_slop_super_fbf95c8fba42206c,
              mid_getFuzzyQuery_1e1d94ae57c788e4,
              mid_getPrefixQuery_8b970d057e017e30,
              mid_getRangeQuery_5e298fd9aeaf12ea,
              mid_getWildcardQuery_8b970d057e017e30,
              mid_pythonDecRef_3353d9f14bbfd91a,
              mid_pythonExtension_058f5911dcf5d8a4,
              mid_pythonExtension_db2028ac45cd5b77,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMultiFieldQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonMultiFieldQueryParser(const PythonMultiFieldQueryParser& obj) : ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser(obj) {}

            PythonMultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);

            void finalize() const;
            ::org::apache::lucene::search::Query getBooleanQuery(const ::java::util::List &) const;
            ::org::apache::lucene::search::Query getFieldQuery(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFieldQuery_quoted(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery_quoted_super(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery_slop(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFieldQuery_slop_super(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFuzzyQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat) const;
            ::org::apache::lucene::search::Query getPrefixQuery(const ::java::lang::String &, const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query getRangeQuery(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
            ::org::apache::lucene::search::Query getWildcardQuery(const ::java::lang::String &, const ::java::lang::String &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(PythonMultiFieldQueryParser);
          extern PyTypeObject *PY_TYPE(PythonMultiFieldQueryParser);

          class t_PythonMultiFieldQueryParser {
          public:
            PyObject_HEAD
            PythonMultiFieldQueryParser object;
            static PyObject *wrap_Object(const PythonMultiFieldQueryParser&);
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
