#ifndef org_apache_lucene_search_spell_WordBreakSpellChecker_H
#define org_apache_lucene_search_spell_WordBreakSpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestWord;
          class WordBreakSpellChecker$BreakSuggestionSortMethod;
          class SuggestMode;
          class CombineSuggestion;
        }
      }
      namespace index {
        class Term;
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class WordBreakSpellChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_getMaxChanges_15aa3d485e96b665,
              mid_getMaxCombineWordLength_15aa3d485e96b665,
              mid_getMaxEvaluations_15aa3d485e96b665,
              mid_getMinBreakWordLength_15aa3d485e96b665,
              mid_getMinSuggestionFrequency_15aa3d485e96b665,
              mid_setMaxChanges_da425451c8de636b,
              mid_setMaxCombineWordLength_da425451c8de636b,
              mid_setMaxEvaluations_da425451c8de636b,
              mid_setMinBreakWordLength_da425451c8de636b,
              mid_setMinSuggestionFrequency_da425451c8de636b,
              mid_suggestWordBreaks_166194f261872f0f,
              mid_suggestWordCombinations_cada6b1cc9c40558,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordBreakSpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WordBreakSpellChecker(const WordBreakSpellChecker& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::index::Term *SEPARATOR_TERM;

            WordBreakSpellChecker();

            jint getMaxChanges() const;
            jint getMaxCombineWordLength() const;
            jint getMaxEvaluations() const;
            jint getMinBreakWordLength() const;
            jint getMinSuggestionFrequency() const;
            void setMaxChanges(jint) const;
            void setMaxCombineWordLength(jint) const;
            void setMaxEvaluations(jint) const;
            void setMinBreakWordLength(jint) const;
            void setMinSuggestionFrequency(jint) const;
            JArray< JArray< ::org::apache::lucene::search::spell::SuggestWord > > suggestWordBreaks(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &, const ::org::apache::lucene::search::spell::WordBreakSpellChecker$BreakSuggestionSortMethod &) const;
            JArray< ::org::apache::lucene::search::spell::CombineSuggestion > suggestWordCombinations(const JArray< ::org::apache::lucene::index::Term > &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
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
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(WordBreakSpellChecker);
          extern PyTypeObject *PY_TYPE(WordBreakSpellChecker);

          class t_WordBreakSpellChecker {
          public:
            PyObject_HEAD
            WordBreakSpellChecker object;
            static PyObject *wrap_Object(const WordBreakSpellChecker&);
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
