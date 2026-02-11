#ifndef org_apache_lucene_analysis_ko_KoreanTokenizer_H
#define org_apache_lucene_analysis_ko_KoreanTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class KoreanTokenizer$DecompoundMode;
          namespace dict {
            class UnknownDictionary;
            class TokenInfoDictionary;
            class UserDictionary;
            class ConnectionCosts;
          }
          class GraphvizFormatter;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class KoreanTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_31089f661fd42745,
              mid_init$_9fc75b8b134e39df,
              mid_init$_28a28da1d24fef50,
              mid_close_3353d9f14bbfd91a,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              mid_setGraphvizFormatter_b56e959299685bd7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanTokenizer(const KoreanTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode *DEFAULT_DECOMPOUND;

            KoreanTokenizer();
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean);
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean, jboolean);
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::TokenInfoDictionary &, const ::org::apache::lucene::analysis::ko::dict::UnknownDictionary &, const ::org::apache::lucene::analysis::ko::dict::ConnectionCosts &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean, jboolean);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setGraphvizFormatter(const ::org::apache::lucene::analysis::ko::GraphvizFormatter &) const;
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanTokenizer);
          extern PyTypeObject *PY_TYPE(KoreanTokenizer);

          class t_KoreanTokenizer {
          public:
            PyObject_HEAD
            KoreanTokenizer object;
            static PyObject *wrap_Object(const KoreanTokenizer&);
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
