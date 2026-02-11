#ifndef org_apache_lucene_search_uhighlight_FieldHighlighter_H
#define org_apache_lucene_search_uhighlight_FieldHighlighter_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class BreakIterator;
  }
  namespace io {
    class IOException;
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
        namespace uhighlight {
          class UnifiedHighlighter$OffsetSource;
          class PassageFormatter;
          class PassageScorer;
          class FieldOffsetStrategy;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class FieldHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_893be01370310280,
              mid_getField_dc633f13a47328a8,
              mid_getOffsetSource_6759e56838c802c3,
              mid_highlightFieldForDoc_9c023eaab54e1877,
              mid_getSummaryPassagesNoHighlight_a20b88bb22da636a,
              mid_highlightOffsetsEnums_98d4ce46c1301d34,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldHighlighter(const FieldHighlighter& obj) : ::java::lang::Object(obj) {}

            FieldHighlighter(const ::java::lang::String &, const ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy &, const ::java::text::BreakIterator &, const ::org::apache::lucene::search::uhighlight::PassageScorer &, jint, jint, const ::org::apache::lucene::search::uhighlight::PassageFormatter &);

            ::java::lang::String getField() const;
            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$OffsetSource getOffsetSource() const;
            ::java::lang::Object highlightFieldForDoc(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldHighlighter);
          extern PyTypeObject *PY_TYPE(FieldHighlighter);

          class t_FieldHighlighter {
          public:
            PyObject_HEAD
            FieldHighlighter object;
            static PyObject *wrap_Object(const FieldHighlighter&);
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
