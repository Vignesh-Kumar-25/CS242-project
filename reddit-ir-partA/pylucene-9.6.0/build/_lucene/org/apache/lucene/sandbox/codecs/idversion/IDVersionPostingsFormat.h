#ifndef org_apache_lucene_sandbox_codecs_idversion_IDVersionPostingsFormat_H
#define org_apache_lucene_sandbox_codecs_idversion_IDVersionPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class SegmentWriteState;
        class SegmentReadState;
      }
      namespace codecs {
        class FieldsConsumer;
        class FieldsProducer;
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
      namespace sandbox {
        namespace codecs {
          namespace idversion {

            class IDVersionPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_078cef180abf5351,
                mid_bytesToLong_cac4add48ae85e95,
                mid_fieldsConsumer_95207e04328b6d61,
                mid_fieldsProducer_1e9598eade8d7936,
                mid_longToBytes_815c5c55948773de,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IDVersionPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IDVersionPostingsFormat(const IDVersionPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

              static jlong MAX_VERSION;
              static jlong MIN_VERSION;

              IDVersionPostingsFormat();
              IDVersionPostingsFormat(jint, jint);

              static jlong bytesToLong(const ::org::apache::lucene::util::BytesRef &);
              ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
              ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
              static void longToBytes(jlong, const ::org::apache::lucene::util::BytesRef &);
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
      namespace sandbox {
        namespace codecs {
          namespace idversion {
            extern PyType_Def PY_TYPE_DEF(IDVersionPostingsFormat);
            extern PyTypeObject *PY_TYPE(IDVersionPostingsFormat);

            class t_IDVersionPostingsFormat {
            public:
              PyObject_HEAD
              IDVersionPostingsFormat object;
              static PyObject *wrap_Object(const IDVersionPostingsFormat&);
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
