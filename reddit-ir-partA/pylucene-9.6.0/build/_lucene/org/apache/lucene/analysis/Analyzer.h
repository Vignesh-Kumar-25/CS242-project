#ifndef org_apache_lucene_analysis_Analyzer_H
#define org_apache_lucene_analysis_Analyzer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer$ReuseStrategy;
      }
    }
  }
}
namespace java {
  namespace io {
    class Reader;
    class Closeable;
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

        class Analyzer : public ::java::lang::Object {
         public:
          enum {
            mid_close_3353d9f14bbfd91a,
            mid_getOffsetGap_08c5dabd7f8f1590,
            mid_getPositionIncrementGap_08c5dabd7f8f1590,
            mid_getReuseStrategy_ff1a72a8c72d548c,
            mid_normalize_68c0f93368f29437,
            mid_tokenStream_e468b72e30d36286,
            mid_tokenStream_5032133ccb6be11a,
            mid_createComponents_ecc168e883a13e3a,
            mid_initReader_40892a63dfcc19ab,
            mid_initReaderForNormalization_40892a63dfcc19ab,
            mid_attributeFactory_8aca54b1004f1d7f,
            mid_normalize_36f7d93b7e95e69a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Analyzer(const Analyzer& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::analysis::Analyzer$ReuseStrategy *GLOBAL_REUSE_STRATEGY;
          static ::org::apache::lucene::analysis::Analyzer$ReuseStrategy *PER_FIELD_REUSE_STRATEGY;

          void close() const;
          jint getOffsetGap(const ::java::lang::String &) const;
          jint getPositionIncrementGap(const ::java::lang::String &) const;
          ::org::apache::lucene::analysis::Analyzer$ReuseStrategy getReuseStrategy() const;
          ::org::apache::lucene::util::BytesRef normalize(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::java::lang::String &, const ::java::io::Reader &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(Analyzer);
        extern PyTypeObject *PY_TYPE(Analyzer);

        class t_Analyzer {
        public:
          PyObject_HEAD
          Analyzer object;
          static PyObject *wrap_Object(const Analyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
