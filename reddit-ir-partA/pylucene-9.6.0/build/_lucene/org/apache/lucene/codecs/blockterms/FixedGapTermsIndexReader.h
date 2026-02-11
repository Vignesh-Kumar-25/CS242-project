#ifndef org_apache_lucene_codecs_blockterms_FixedGapTermsIndexReader_H
#define org_apache_lucene_codecs_blockterms_FixedGapTermsIndexReader_H

#include "org/apache/lucene/codecs/blockterms/TermsIndexReaderBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {
          class TermsIndexReaderBase$FieldIndexEnum;
        }
      }
      namespace util {
        class Accountable;
      }
      namespace index {
        class SegmentReadState;
        class FieldInfo;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
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
        namespace blockterms {

          class FixedGapTermsIndexReader : public ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase {
           public:
            enum {
              mid_init$_4d5e309329c9a9f9,
              mid_close_3353d9f14bbfd91a,
              mid_getChildResources_b47b7eaa8124fb60,
              mid_getFieldEnum_5d8bc1fb865839ff,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_supportsOrd_ee8b0a5fa521ddac,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FixedGapTermsIndexReader(jobject obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FixedGapTermsIndexReader(const FixedGapTermsIndexReader& obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase(obj) {}

            FixedGapTermsIndexReader(const ::org::apache::lucene::index::SegmentReadState &);

            void close() const;
            ::java::util::Collection getChildResources() const;
            ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase$FieldIndexEnum getFieldEnum(const ::org::apache::lucene::index::FieldInfo &) const;
            jlong ramBytesUsed() const;
            jboolean supportsOrd() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(FixedGapTermsIndexReader);
          extern PyTypeObject *PY_TYPE(FixedGapTermsIndexReader);

          class t_FixedGapTermsIndexReader {
          public:
            PyObject_HEAD
            FixedGapTermsIndexReader object;
            static PyObject *wrap_Object(const FixedGapTermsIndexReader&);
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
