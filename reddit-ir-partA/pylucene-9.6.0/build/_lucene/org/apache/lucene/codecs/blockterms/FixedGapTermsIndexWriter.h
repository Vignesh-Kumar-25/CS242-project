#ifndef org_apache_lucene_codecs_blockterms_FixedGapTermsIndexWriter_H
#define org_apache_lucene_codecs_blockterms_FixedGapTermsIndexWriter_H

#include "org/apache/lucene/codecs/blockterms/TermsIndexWriterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentWriteState;
        class FieldInfo;
      }
      namespace codecs {
        namespace blockterms {
          class TermsIndexWriterBase$FieldWriter;
        }
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
        namespace blockterms {

          class FixedGapTermsIndexWriter : public ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase {
           public:
            enum {
              mid_init$_cde348df1e26e832,
              mid_init$_6f69b8dd791af394,
              mid_addField_03d7a3d88cdf4d75,
              mid_close_3353d9f14bbfd91a,
              mid_indexedTermPrefixLength_2043ccb7f68fbcb7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FixedGapTermsIndexWriter(jobject obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FixedGapTermsIndexWriter(const FixedGapTermsIndexWriter& obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase(obj) {}

            static jint DEFAULT_TERM_INDEX_INTERVAL;

            FixedGapTermsIndexWriter(const ::org::apache::lucene::index::SegmentWriteState &);
            FixedGapTermsIndexWriter(const ::org::apache::lucene::index::SegmentWriteState &, jint);

            ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase$FieldWriter addField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
            void close() const;
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
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(FixedGapTermsIndexWriter);
          extern PyTypeObject *PY_TYPE(FixedGapTermsIndexWriter);

          class t_FixedGapTermsIndexWriter {
          public:
            PyObject_HEAD
            FixedGapTermsIndexWriter object;
            static PyObject *wrap_Object(const FixedGapTermsIndexWriter&);
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
