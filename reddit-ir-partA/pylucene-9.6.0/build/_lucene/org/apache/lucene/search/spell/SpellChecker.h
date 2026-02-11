#ifndef org_apache_lucene_search_spell_SpellChecker_H
#define org_apache_lucene_search_spell_SpellChecker_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace io {
    class IOException;
    class Closeable;
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
        namespace spell {
          class SuggestWord;
          class Dictionary;
          class StringDistance;
          class SuggestMode;
        }
      }
      namespace index {
        class IndexReader;
        class IndexWriterConfig;
      }
      namespace store {
        class Directory;
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

          class SpellChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_31453c15367f1d64,
              mid_init$_6edd1affef3bf8c5,
              mid_init$_e195562fdd8f4fd2,
              mid_clearIndex_3353d9f14bbfd91a,
              mid_close_3353d9f14bbfd91a,
              mid_exist_77e0b5c3eb1962ba,
              mid_getAccuracy_15cd8574741b1394,
              mid_getComparator_bfaba219acee2aff,
              mid_getStringDistance_f1af72c98a3e103b,
              mid_indexDictionary_5c00597a479df89e,
              mid_setAccuracy_354c036766ff84b4,
              mid_setComparator_8c65a0cb749b75d3,
              mid_setSpellIndex_31453c15367f1d64,
              mid_setStringDistance_1c014a0c88a4dcdb,
              mid_suggestSimilar_fd11a4f8b9efb6ae,
              mid_suggestSimilar_44b49248dfe4945f,
              mid_suggestSimilar_0b83ec889f3505ba,
              mid_suggestSimilar_d8ff24d6873d931d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpellChecker(const SpellChecker& obj) : ::java::lang::Object(obj) {}

            static jfloat DEFAULT_ACCURACY;
            static ::java::lang::String *F_WORD;

            SpellChecker(const ::org::apache::lucene::store::Directory &);
            SpellChecker(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::spell::StringDistance &);
            SpellChecker(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::spell::StringDistance &, const ::java::util::Comparator &);

            void clearIndex() const;
            void close() const;
            jboolean exist(const ::java::lang::String &) const;
            jfloat getAccuracy() const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::search::spell::StringDistance getStringDistance() const;
            void indexDictionary(const ::org::apache::lucene::search::spell::Dictionary &, const ::org::apache::lucene::index::IndexWriterConfig &, jboolean) const;
            void setAccuracy(jfloat) const;
            void setComparator(const ::java::util::Comparator &) const;
            void setSpellIndex(const ::org::apache::lucene::store::Directory &) const;
            void setStringDistance(const ::org::apache::lucene::search::spell::StringDistance &) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, jfloat) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::spell::SuggestMode &, jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(SpellChecker);
          extern PyTypeObject *PY_TYPE(SpellChecker);

          class t_SpellChecker {
          public:
            PyObject_HEAD
            SpellChecker object;
            static PyObject *wrap_Object(const SpellChecker&);
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
