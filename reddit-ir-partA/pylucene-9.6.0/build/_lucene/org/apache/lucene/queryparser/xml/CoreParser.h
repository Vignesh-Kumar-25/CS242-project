#ifndef org_apache_lucene_queryparser_xml_CoreParser_H
#define org_apache_lucene_queryparser_xml_CoreParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class ParserException;
          class QueryBuilder;
          namespace builders {
            class SpanQueryBuilder;
          }
        }
        namespace classic {
          class QueryParser;
        }
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
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
      namespace queryparser {
        namespace xml {

          class CoreParser : public ::java::lang::Object {
           public:
            enum {
              mid_init$_793ca9527de15d14,
              mid_init$_2dc91590b2674915,
              mid_addQueryBuilder_499f9d754f12c3b1,
              mid_addSpanBuilder_9170458b5c6eeff8,
              mid_addSpanQueryBuilder_9170458b5c6eeff8,
              mid_parse_0372982278960d06,
              mid_getEntityResolver_a261353af3b64726,
              mid_getErrorHandler_4f8f7905cc8518cb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CoreParser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CoreParser(const CoreParser& obj) : ::java::lang::Object(obj) {}

            CoreParser(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::classic::QueryParser &);
            CoreParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            void addQueryBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::QueryBuilder &) const;
            void addSpanBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &) const;
            void addSpanQueryBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &) const;
            ::org::apache::lucene::search::Query parse(const ::java::io::InputStream &) const;
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
        namespace xml {
          extern PyType_Def PY_TYPE_DEF(CoreParser);
          extern PyTypeObject *PY_TYPE(CoreParser);

          class t_CoreParser {
          public:
            PyObject_HEAD
            CoreParser object;
            static PyObject *wrap_Object(const CoreParser&);
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
