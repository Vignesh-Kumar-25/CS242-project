#ifndef org_apache_lucene_search_matchhighlight_MatchHighlighter$FieldValueHighlighter_H
#define org_apache_lucene_search_matchhighlight_MatchHighlighter$FieldValueHighlighter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class OffsetRange;
          class MatchHighlighter$QueryOffsetRange;
          class MatchHighlighter$FieldValueHighlighter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class MatchHighlighter$FieldValueHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_alwaysFetchedFields_b47b7eaa8124fb60,
              mid_format_12afa8e12af6645b,
              mid_isApplicable_04744867da1e25b4,
              mid_or_34a51ad1a8cdd480,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchHighlighter$FieldValueHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchHighlighter$FieldValueHighlighter(const MatchHighlighter$FieldValueHighlighter& obj) : ::java::lang::Object(obj) {}

            ::java::util::Collection alwaysFetchedFields() const;
            ::java::util::List format(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::java::lang::String &, const ::java::util::List &, const ::java::util::List &) const;
            jboolean isApplicable(const ::java::lang::String &, jboolean) const;
            MatchHighlighter$FieldValueHighlighter or$(const MatchHighlighter$FieldValueHighlighter &) const;
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
          extern PyType_Def PY_TYPE_DEF(MatchHighlighter$FieldValueHighlighter);
          extern PyTypeObject *PY_TYPE(MatchHighlighter$FieldValueHighlighter);

          class t_MatchHighlighter$FieldValueHighlighter {
          public:
            PyObject_HEAD
            MatchHighlighter$FieldValueHighlighter object;
            static PyObject *wrap_Object(const MatchHighlighter$FieldValueHighlighter&);
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
