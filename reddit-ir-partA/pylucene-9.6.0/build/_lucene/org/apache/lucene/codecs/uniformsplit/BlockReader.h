#ifndef org_apache_lucene_codecs_uniformsplit_BlockReader_H
#define org_apache_lucene_codecs_uniformsplit_BlockReader_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
      }
      namespace index {
        class ImpactsEnum;
        class TermState;
        class PostingsEnum;
        class TermsEnum$SeekStatus;
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

          class BlockReader : public ::org::apache::lucene::index::BaseTermsEnum {
           public:
            enum {
              mid_docFreq_15aa3d485e96b665,
              mid_impacts_a7911ea7f066095b,
              mid_next_e6961a1ebae5a29a,
              mid_ord_058f5911dcf5d8a4,
              mid_postings_5169b11dd2a92cbd,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_seekCeil_9eba252e35b6bc50,
              mid_seekExact_d146ede34c2ecacf,
              mid_seekExact_db2028ac45cd5b77,
              mid_seekExact_e2a49f0a9649fd0e,
              mid_term_e6961a1ebae5a29a,
              mid_termState_5d53046b0d72b0fe,
              mid_totalTermFreq_058f5911dcf5d8a4,
              mid_nextTerm_e6961a1ebae5a29a,
              mid_isCurrentTerm_d146ede34c2ecacf,
              mid_seekInBlock_9eba252e35b6bc50,
              mid_seekInBlock_e5a7208d55876c7b,
              mid_compareToMiddleAndJump_7e43af883cb79fc2,
              mid_readLineInBlock_7ee5ee2c93735fab,
              mid_initializeHeader_9b421e4b3cf5edb5,
              mid_initializeBlockReadLazily_3353d9f14bbfd91a,
              mid_createBlockHeaderSerializer_ae5be108bde90bad,
              mid_createDeltaBaseTermStateSerializer_ee5d30c7a3dcdb35,
              mid_decodeBlockBytesIfNeeded_1ad28ec3fc5251fa,
              mid_getOrCreateDictionaryBrowser_d660057c812031b5,
              mid_clearTermState_3353d9f14bbfd91a,
              mid_newCorruptIndexException_39fc6fc9adea0784,
              mid_readTermStateIfNotRead_8cad9828b6957984,
              mid_isBeyondLastTerm_6e673c57056b20d3,
              mid_createBlockLineSerializer_61008d2de0c834c2,
              mid_readTermState_8cad9828b6957984,
              mid_readHeader_f97895b283656737,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockReader(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockReader(const BlockReader& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

            jint docFreq() const;
            ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
            ::org::apache::lucene::util::BytesRef next() const;
            jlong ord() const;
            ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
            jlong ramBytesUsed() const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
            ::org::apache::lucene::util::BytesRef term() const;
            ::org::apache::lucene::index::TermState termState() const;
            jlong totalTermFreq() const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(BlockReader);
          extern PyTypeObject *PY_TYPE(BlockReader);

          class t_BlockReader {
          public:
            PyObject_HEAD
            BlockReader object;
            static PyObject *wrap_Object(const BlockReader&);
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
