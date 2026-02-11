#ifndef org_apache_lucene_backward_codecs_store_EndiannessReverserUtil_H
#define org_apache_lucene_backward_codecs_store_EndiannessReverserUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
        class IOContext;
        class IndexOutput;
        class ChecksumIndexInput;
        class IndexInput;
        class Directory;
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
      namespace backward_codecs {
        namespace store {

          class EndiannessReverserUtil : public ::java::lang::Object {
           public:
            enum {
              mid_createOutput_0f4e7fd2cc851650,
              mid_createTempOutput_d74a96bb2df4b3f0,
              mid_openChecksumInput_fbe9ec84a3cf6796,
              mid_openInput_58cd1118730da75c,
              mid_wrapDataInput_52de44d0336b10b7,
              mid_wrapDataOutput_1710b294094c8e85,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EndiannessReverserUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EndiannessReverserUtil(const EndiannessReverserUtil& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::store::IndexOutput createOutput(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
            static ::org::apache::lucene::store::IndexOutput createTempOutput(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
            static ::org::apache::lucene::store::ChecksumIndexInput openChecksumInput(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
            static ::org::apache::lucene::store::IndexInput openInput(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
            static ::org::apache::lucene::store::DataInput wrapDataInput(const ::org::apache::lucene::store::DataInput &);
            static ::org::apache::lucene::store::DataOutput wrapDataOutput(const ::org::apache::lucene::store::DataOutput &);
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
      namespace backward_codecs {
        namespace store {
          extern PyType_Def PY_TYPE_DEF(EndiannessReverserUtil);
          extern PyTypeObject *PY_TYPE(EndiannessReverserUtil);

          class t_EndiannessReverserUtil {
          public:
            PyObject_HEAD
            EndiannessReverserUtil object;
            static PyObject *wrap_Object(const EndiannessReverserUtil&);
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
