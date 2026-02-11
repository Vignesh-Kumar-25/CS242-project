#ifndef org_apache_lucene_util_PagedBytes$PagedBytesDataInput_H
#define org_apache_lucene_util_PagedBytes$PagedBytesDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes$PagedBytesDataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PagedBytes$PagedBytesDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_clone_fa27a15bafc1f8ad,
            mid_getPosition_058f5911dcf5d8a4,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readBytes_411019d3e65b5a2d,
            mid_setPosition_db2028ac45cd5b77,
            mid_skipBytes_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes$PagedBytesDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes$PagedBytesDataInput(const PagedBytes$PagedBytesDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          PagedBytes$PagedBytesDataInput clone() const;
          jlong getPosition() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void setPosition(jlong) const;
          void skipBytes(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PagedBytes$PagedBytesDataInput);
        extern PyTypeObject *PY_TYPE(PagedBytes$PagedBytesDataInput);

        class t_PagedBytes$PagedBytesDataInput {
        public:
          PyObject_HEAD
          PagedBytes$PagedBytesDataInput object;
          static PyObject *wrap_Object(const PagedBytes$PagedBytesDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
