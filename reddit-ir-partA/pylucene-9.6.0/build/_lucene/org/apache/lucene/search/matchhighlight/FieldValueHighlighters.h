#ifndef org_apache_lucene_search_matchhighlight_FieldValueHighlighters_H
#define org_apache_lucene_search_matchhighlight_FieldValueHighlighters_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class PassageSelector;
          class PassageFormatter;
          class MatchHighlighter$FieldValueHighlighter;
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
        namespace matchhighlight {

          class FieldValueHighlighters : public ::java::lang::Object {
           public:
            enum {
              mid_defaultPassageSelector_0a3df0e2272bbaae,
              mid_highlighted_c7f7822d85e40b82,
              mid_maxLeadingCharacters_f982b73b282943c3,
              mid_skipRemaining_164653174301a510,
              mid_verbatimValue_39940bb901a12ba0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldValueHighlighters(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldValueHighlighters(const FieldValueHighlighters& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::matchhighlight::PassageSelector defaultPassageSelector();
            static ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter highlighted(jint, jint, const ::org::apache::lucene::search::matchhighlight::PassageFormatter &, const ::java::util::function::Predicate &);
            static ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter maxLeadingCharacters(jint, const ::java::lang::String &, const ::java::util::Set &);
            static ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter skipRemaining();
            static ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter verbatimValue(const ::java::lang::String &, const JArray< ::java::lang::String > &);
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldValueHighlighters);
          extern PyTypeObject *PY_TYPE(FieldValueHighlighters);

          class t_FieldValueHighlighters {
          public:
            PyObject_HEAD
            FieldValueHighlighters object;
            static PyObject *wrap_Object(const FieldValueHighlighters&);
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
