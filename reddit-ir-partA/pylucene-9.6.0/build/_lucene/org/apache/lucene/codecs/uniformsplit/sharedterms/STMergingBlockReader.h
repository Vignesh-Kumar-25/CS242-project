#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STMergingBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STMergingBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STBlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class BlockTermState;
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
        class TermState;
        class FieldInfos;
        class PostingsEnum;
        class TermsEnum$SeekStatus;
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STMergingBlockReader : public ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader {
             public:
              enum {
                mid_init$_7b1e6a06dce3f8b8,
                mid_next_e6961a1ebae5a29a,
                mid_postings_3303a1098e093111,
                mid_readFieldTermStatesMap_62c0fdc62292ffbf,
                mid_seekCeil_9eba252e35b6bc50,
                mid_seekExact_d146ede34c2ecacf,
                mid_seekExact_db2028ac45cd5b77,
                mid_seekExact_e2a49f0a9649fd0e,
                mid_readTermStateIfNotRead_8cad9828b6957984,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STMergingBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STMergingBlockReader(const STMergingBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader(obj) {}

              STMergingBlockReader(const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$BrowserSupplier &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, const ::org::apache::lucene::index::FieldInfos &);

              ::org::apache::lucene::util::BytesRef next() const;
              ::org::apache::lucene::index::PostingsEnum postings(const ::java::lang::String &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::index::PostingsEnum &, jint) const;
              void readFieldTermStatesMap(const ::java::util::Map &) const;
              ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
              jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
              void seekExact(jlong) const;
              void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
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
            extern PyType_Def PY_TYPE_DEF(STMergingBlockReader);
            extern PyTypeObject *PY_TYPE(STMergingBlockReader);

            class t_STMergingBlockReader {
            public:
              PyObject_HEAD
              STMergingBlockReader object;
              static PyObject *wrap_Object(const STMergingBlockReader&);
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
