#ifndef org_apache_lucene_search_uhighlight_UHComponents_H
#define org_apache_lucene_search_uhighlight_UHComponents_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
        namespace uhighlight {
          class PhraseHelper;
          class LabelledCharArrayMatcher;
          class UnifiedHighlighter$HighlightFlag;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class Set;
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
        namespace uhighlight {

          class UHComponents : public ::java::lang::Object {
           public:
            enum {
              mid_init$_bc22ce004bd8cac7,
              mid_getAutomata_8830accc20f94b96,
              mid_getField_dc633f13a47328a8,
              mid_getFieldMatcher_06391ce5746b4cf7,
              mid_getHighlightFlags_9a625d56b67c7390,
              mid_getPhraseHelper_be823a8fe2b91f14,
              mid_getQuery_0b32ec998a0c18fa,
              mid_getTerms_e092e9d7d863fa74,
              mid_hasUnrecognizedQueryPart_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UHComponents(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UHComponents(const UHComponents& obj) : ::java::lang::Object(obj) {}

            UHComponents(const ::java::lang::String &, const ::java::util::function::Predicate &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::util::BytesRef > &, const ::org::apache::lucene::search::uhighlight::PhraseHelper &, const JArray< ::org::apache::lucene::search::uhighlight::LabelledCharArrayMatcher > &, jboolean, const ::java::util::Set &);

            JArray< ::org::apache::lucene::search::uhighlight::LabelledCharArrayMatcher > getAutomata() const;
            ::java::lang::String getField() const;
            ::java::util::function::Predicate getFieldMatcher() const;
            ::java::util::Set getHighlightFlags() const;
            ::org::apache::lucene::search::uhighlight::PhraseHelper getPhraseHelper() const;
            ::org::apache::lucene::search::Query getQuery() const;
            JArray< ::org::apache::lucene::util::BytesRef > getTerms() const;
            jboolean hasUnrecognizedQueryPart() const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(UHComponents);
          extern PyTypeObject *PY_TYPE(UHComponents);

          class t_UHComponents {
          public:
            PyObject_HEAD
            UHComponents object;
            static PyObject *wrap_Object(const UHComponents&);
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
