#ifndef org_apache_lucene_analysis_ja_JapaneseTokenizer_H
#define org_apache_lucene_analysis_ja_JapaneseTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class UserDictionary;
            class TokenInfoDictionary;
            class UnknownDictionary;
            class ConnectionCosts;
          }
          class GraphvizFormatter;
          class JapaneseTokenizer$Mode;
        }
      }
      namespace util {
        class AttributeFactory;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_484c513cf998dd9c,
              mid_init$_4698734c872a07de,
              mid_init$_50e95c4c5b13faea,
              mid_init$_32ee3eedbc4e8aeb,
              mid_init$_e79e9f49d6734f8e,
              mid_calcNBestCost_08c5dabd7f8f1590,
              mid_close_3353d9f14bbfd91a,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              mid_setGraphvizFormatter_a27e568b9f79d30b,
              mid_setNBestCost_da425451c8de636b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseTokenizer(const JapaneseTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode *DEFAULT_MODE;

            JapaneseTokenizer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::TokenInfoDictionary &, const ::org::apache::lucene::analysis::ja::dict::UnknownDictionary &, const ::org::apache::lucene::analysis::ja::dict::ConnectionCosts &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);

            jint calcNBestCost(const ::java::lang::String &) const;
            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setGraphvizFormatter(const ::org::apache::lucene::analysis::ja::GraphvizFormatter &) const;
            void setNBestCost(jint) const;
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
      namespace analysis {
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseTokenizer);
          extern PyTypeObject *PY_TYPE(JapaneseTokenizer);

          class t_JapaneseTokenizer {
          public:
            PyObject_HEAD
            JapaneseTokenizer object;
            static PyObject *wrap_Object(const JapaneseTokenizer&);
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
