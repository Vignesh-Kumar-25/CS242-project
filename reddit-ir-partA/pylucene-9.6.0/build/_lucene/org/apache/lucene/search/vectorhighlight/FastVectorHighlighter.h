#ifndef org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H
#define org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace vectorhighlight {
          class FragmentsBuilder;
          class FieldQuery;
          class FragListBuilder;
        }
        namespace highlight {
          class Encoder;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
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
        namespace vectorhighlight {

          class FastVectorHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_d8388b1e026b6cdb,
              mid_init$_4fdf7b9d789b77e4,
              mid_getBestFragment_494c60b517d083ee,
              mid_getBestFragment_d9438d80466fa9d8,
              mid_getBestFragments_d8d28055a2e5cca6,
              mid_getBestFragments_af1a53f34d9de1fa,
              mid_getBestFragments_a81da00f940b76f9,
              mid_getFieldQuery_6c37afe73afb7d80,
              mid_getFieldQuery_c490dc239b5a0a6f,
              mid_getPhraseLimit_15aa3d485e96b665,
              mid_isFieldMatch_ee8b0a5fa521ddac,
              mid_isPhraseHighlight_ee8b0a5fa521ddac,
              mid_setPhraseLimit_da425451c8de636b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastVectorHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastVectorHighlighter(const FastVectorHighlighter& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_FIELD_MATCH;
            static jboolean DEFAULT_PHRASE_HIGHLIGHT;

            FastVectorHighlighter();
            FastVectorHighlighter(jboolean, jboolean);
            FastVectorHighlighter(jboolean, jboolean, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::java::util::Set &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &) const;
            jint getPhraseLimit() const;
            jboolean isFieldMatch() const;
            jboolean isPhraseHighlight() const;
            void setPhraseLimit(jint) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FastVectorHighlighter);
          extern PyTypeObject *PY_TYPE(FastVectorHighlighter);

          class t_FastVectorHighlighter {
          public:
            PyObject_HEAD
            FastVectorHighlighter object;
            static PyObject *wrap_Object(const FastVectorHighlighter&);
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
