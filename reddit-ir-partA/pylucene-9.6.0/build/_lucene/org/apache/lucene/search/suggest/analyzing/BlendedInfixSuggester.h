#ifndef org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingInfixSuggester.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class BooleanClause$Occur;
        class BooleanQuery;
        namespace suggest {
          namespace analyzing {
            class BlendedInfixSuggester$BlenderType;
          }
          class Lookup$LookupResult;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Map;
    class Set;
  }
  namespace lang {
    class CharSequence;
    class Double;
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
      namespace search {
        namespace suggest {
          namespace analyzing {

            class BlendedInfixSuggester : public ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester {
             public:
              enum {
                mid_init$_a33281d9f57b3320,
                mid_init$_63badeee153ca7d1,
                mid_init$_5a4dbcef916b38d9,
                mid_lookup_b26a235278b56084,
                mid_lookup_ed2be19985bc8b21,
                mid_lookup_4ba8b7f59e2f317c,
                mid_lookup_39870c8d7f2f9743,
                mid_getTextFieldType_aa2922b4abccdfc8,
                mid_createResults_d4f940a836cf36dd,
                mid_calculateCoefficient_1b05331da910c88e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BlendedInfixSuggester(jobject obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BlendedInfixSuggester(const BlendedInfixSuggester& obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester(obj) {}

              static jint DEFAULT_NUM_FACTOR;

              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &);
              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, const ::org::apache::lucene::search::suggest::analyzing::BlendedInfixSuggester$BlenderType &, jint, jboolean);
              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, const ::org::apache::lucene::search::suggest::analyzing::BlendedInfixSuggester$BlenderType &, jint, const ::java::lang::Double &, jboolean, jboolean, jboolean);

              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Map &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint, jboolean, jboolean) const;
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
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(BlendedInfixSuggester);
            extern PyTypeObject *PY_TYPE(BlendedInfixSuggester);

            class t_BlendedInfixSuggester {
            public:
              PyObject_HEAD
              BlendedInfixSuggester object;
              static PyObject *wrap_Object(const BlendedInfixSuggester&);
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
