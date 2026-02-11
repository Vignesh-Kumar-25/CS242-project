#ifndef org_apache_lucene_search_spell_DirectSpellChecker_H
#define org_apache_lucene_search_spell_DirectSpellChecker_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestWord;
          class StringDistance;
          class SuggestMode;
        }
      }
      namespace index {
        class Term;
        class IndexReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class DirectSpellChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_getAccuracy_15cd8574741b1394,
              mid_getComparator_bfaba219acee2aff,
              mid_getDistance_f1af72c98a3e103b,
              mid_getLowerCaseTerms_ee8b0a5fa521ddac,
              mid_getMaxEdits_15aa3d485e96b665,
              mid_getMaxInspections_15aa3d485e96b665,
              mid_getMaxQueryFrequency_15cd8574741b1394,
              mid_getMaxQueryLength_15aa3d485e96b665,
              mid_getMinPrefix_15aa3d485e96b665,
              mid_getMinQueryLength_15aa3d485e96b665,
              mid_getThresholdFrequency_15cd8574741b1394,
              mid_setAccuracy_354c036766ff84b4,
              mid_setComparator_8c65a0cb749b75d3,
              mid_setDistance_1c014a0c88a4dcdb,
              mid_setLowerCaseTerms_4f96af910856b303,
              mid_setMaxEdits_da425451c8de636b,
              mid_setMaxInspections_da425451c8de636b,
              mid_setMaxQueryFrequency_354c036766ff84b4,
              mid_setMaxQueryLength_da425451c8de636b,
              mid_setMinPrefix_da425451c8de636b,
              mid_setMinQueryLength_da425451c8de636b,
              mid_setThresholdFrequency_354c036766ff84b4,
              mid_suggestSimilar_6af936b455b4a02b,
              mid_suggestSimilar_f6a5873abbb85121,
              mid_suggestSimilar_cebf1a290a284f8c,
              mid_suggestSimilar_e1e8fdce2b45c484,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectSpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectSpellChecker(const DirectSpellChecker& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::spell::StringDistance *INTERNAL_LEVENSHTEIN;

            DirectSpellChecker();

            jfloat getAccuracy() const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::search::spell::StringDistance getDistance() const;
            jboolean getLowerCaseTerms() const;
            jint getMaxEdits() const;
            jint getMaxInspections() const;
            jfloat getMaxQueryFrequency() const;
            jint getMaxQueryLength() const;
            jint getMinPrefix() const;
            jint getMinQueryLength() const;
            jfloat getThresholdFrequency() const;
            void setAccuracy(jfloat) const;
            void setComparator(const ::java::util::Comparator &) const;
            void setDistance(const ::org::apache::lucene::search::spell::StringDistance &) const;
            void setLowerCaseTerms(jboolean) const;
            void setMaxEdits(jint) const;
            void setMaxInspections(jint) const;
            void setMaxQueryFrequency(jfloat) const;
            void setMaxQueryLength(jint) const;
            void setMinPrefix(jint) const;
            void setMinQueryLength(jint) const;
            void setThresholdFrequency(jfloat) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &, jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(DirectSpellChecker);
          extern PyTypeObject *PY_TYPE(DirectSpellChecker);

          class t_DirectSpellChecker {
          public:
            PyObject_HEAD
            DirectSpellChecker object;
            static PyObject *wrap_Object(const DirectSpellChecker&);
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
