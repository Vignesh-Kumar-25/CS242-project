#ifndef org_apache_lucene_search_uhighlight_PhraseHelper_H
#define org_apache_lucene_search_uhighlight_PhraseHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace uhighlight {
          class PhraseHelper;
          class OffsetsEnum;
        }
      }
      namespace util {
        class BytesRef;
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    namespace function {
      class Predicate;
      class Function;
    }
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class Boolean;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class PhraseHelper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fe61a8c036dfc4bf,
              mid_createOffsetsEnumsForSpans_8935816fbd6eb595,
              mid_getAllPositionInsensitiveTerms_e092e9d7d863fa74,
              mid_getSpanQueries_9a625d56b67c7390,
              mid_hasPositionSensitivity_ee8b0a5fa521ddac,
              mid_willRewrite_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhraseHelper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhraseHelper(const PhraseHelper& obj) : ::java::lang::Object(obj) {}

            static PhraseHelper *NONE;

            PhraseHelper(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::function::Predicate &, const ::java::util::function::Function &, const ::java::util::function::Function &, jboolean);

            void createOffsetsEnumsForSpans(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::util::List &) const;
            JArray< ::org::apache::lucene::util::BytesRef > getAllPositionInsensitiveTerms() const;
            ::java::util::Set getSpanQueries() const;
            jboolean hasPositionSensitivity() const;
            jboolean willRewrite() const;
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
          extern PyType_Def PY_TYPE_DEF(PhraseHelper);
          extern PyTypeObject *PY_TYPE(PhraseHelper);

          class t_PhraseHelper {
          public:
            PyObject_HEAD
            PhraseHelper object;
            static PyObject *wrap_Object(const PhraseHelper&);
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
