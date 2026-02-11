#ifndef org_apache_lucene_util_BytesRefHash$DirectBytesStartArray_H
#define org_apache_lucene_util_BytesRefHash$DirectBytesStartArray_H

#include "org/apache/lucene/util/BytesRefHash$BytesStartArray.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
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

        class BytesRefHash$DirectBytesStartArray : public ::org::apache::lucene::util::BytesRefHash$BytesStartArray {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_init$_d451dd3766489855,
            mid_bytesUsed_21db1181a3b74a6d,
            mid_clear_7880494ffe2d4089,
            mid_grow_7880494ffe2d4089,
            mid_init_7880494ffe2d4089,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefHash$DirectBytesStartArray(jobject obj) : ::org::apache::lucene::util::BytesRefHash$BytesStartArray(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefHash$DirectBytesStartArray(const BytesRefHash$DirectBytesStartArray& obj) : ::org::apache::lucene::util::BytesRefHash$BytesStartArray(obj) {}

          BytesRefHash$DirectBytesStartArray(jint);
          BytesRefHash$DirectBytesStartArray(jint, const ::org::apache::lucene::util::Counter &);

          ::org::apache::lucene::util::Counter bytesUsed() const;
          JArray< jint > clear() const;
          JArray< jint > grow() const;
          JArray< jint > init() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefHash$DirectBytesStartArray);
        extern PyTypeObject *PY_TYPE(BytesRefHash$DirectBytesStartArray);

        class t_BytesRefHash$DirectBytesStartArray {
        public:
          PyObject_HEAD
          BytesRefHash$DirectBytesStartArray object;
          static PyObject *wrap_Object(const BytesRefHash$DirectBytesStartArray&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
