#ifndef org_apache_lucene_codecs_memory_FSTTermsReader_H
#define org_apache_lucene_codecs_memory_FSTTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class Terms;
      }
      namespace codecs {
        class PostingsReaderBase;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace memory {

          class FSTTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
           public:
            enum {
              mid_init$_e9f3f4ef14a32375,
              mid_checkIntegrity_3353d9f14bbfd91a,
              mid_close_3353d9f14bbfd91a,
              mid_iterator_7c74834ad8788f5d,
              mid_size_15aa3d485e96b665,
              mid_terms_94c9097da6540ed1,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTTermsReader(const FSTTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            FSTTermsReader(const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::PostingsReaderBase &);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Iterator iterator() const;
            jint size() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        namespace memory {
          extern PyType_Def PY_TYPE_DEF(FSTTermsReader);
          extern PyTypeObject *PY_TYPE(FSTTermsReader);

          class t_FSTTermsReader {
          public:
            PyObject_HEAD
            FSTTermsReader object;
            static PyObject *wrap_Object(const FSTTermsReader&);
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
