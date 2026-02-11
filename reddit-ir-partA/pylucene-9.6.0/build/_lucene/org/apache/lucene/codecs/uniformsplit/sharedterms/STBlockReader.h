#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$BrowserSupplier;
          class BlockDecoder;
          class FieldMetadata;
        }
        class PostingsReaderBase;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfos;
        class TermsEnum$SeekStatus;
      }
      namespace store {
        class IndexInput;
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STBlockReader : public ::org::apache::lucene::codecs::uniformsplit::BlockReader {
             public:
              enum {
                mid_init$_7b1e6a06dce3f8b8,
                mid_next_e6961a1ebae5a29a,
                mid_seekCeil_9eba252e35b6bc50,
                mid_seekExact_d146ede34c2ecacf,
                mid_nextTerm_e6961a1ebae5a29a,
                mid_isBeyondLastTerm_6e673c57056b20d3,
                mid_createBlockLineSerializer_674e10897438bc75,
                mid_readTermState_8cad9828b6957984,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STBlockReader(const STBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {}

              STBlockReader(const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$BrowserSupplier &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, const ::org::apache::lucene::index::FieldInfos &);

              ::org::apache::lucene::util::BytesRef next() const;
              ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
              jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STBlockReader);
            extern PyTypeObject *PY_TYPE(STBlockReader);

            class t_STBlockReader {
            public:
              PyObject_HEAD
              STBlockReader object;
              static PyObject *wrap_Object(const STBlockReader&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
