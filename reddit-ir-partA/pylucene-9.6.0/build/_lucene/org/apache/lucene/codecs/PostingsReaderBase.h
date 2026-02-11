#ifndef org_apache_lucene_codecs_PostingsReaderBase_H
#define org_apache_lucene_codecs_PostingsReaderBase_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ImpactsEnum;
        class SegmentReadState;
        class FieldInfo;
        class PostingsEnum;
      }
      namespace store {
        class DataInput;
        class IndexInput;
      }
      namespace codecs {
        class BlockTermState;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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

        class PostingsReaderBase : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_close_3353d9f14bbfd91a,
            mid_decodeTerm_3d17962961485831,
            mid_impacts_dd25f6616620bc1d,
            mid_init_1bdca0a529b02eb2,
            mid_newTermState_8cad9828b6957984,
            mid_postings_2cbc4ca85f50ea07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsReaderBase(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsReaderBase(const PostingsReaderBase& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          void close() const;
          void decodeTerm(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
          ::org::apache::lucene::index::ImpactsEnum impacts(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jint) const;
          void init(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::index::SegmentReadState &) const;
          ::org::apache::lucene::codecs::BlockTermState newTermState() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::index::PostingsEnum &, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(PostingsReaderBase);
        extern PyTypeObject *PY_TYPE(PostingsReaderBase);

        class t_PostingsReaderBase {
        public:
          PyObject_HEAD
          PostingsReaderBase object;
          static PyObject *wrap_Object(const PostingsReaderBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
