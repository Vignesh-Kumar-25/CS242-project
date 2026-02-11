#ifndef org_apache_lucene_util_BytesRefHash_H
#define org_apache_lucene_util_BytesRefHash_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
        class ByteBlockPool;
        class BytesRefHash$BytesStartArray;
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

        class BytesRefHash : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_05bb78814b830922,
            mid_init$_2c93451951641f32,
            mid_add_7e43af883cb79fc2,
            mid_addByPoolOffset_58b165b57740feff,
            mid_byteStart_58b165b57740feff,
            mid_clear_3353d9f14bbfd91a,
            mid_clear_4f96af910856b303,
            mid_close_3353d9f14bbfd91a,
            mid_compact_7880494ffe2d4089,
            mid_find_7e43af883cb79fc2,
            mid_get_e1fcfee32e240f60,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_reinit_3353d9f14bbfd91a,
            mid_size_15aa3d485e96b665,
            mid_sort_7880494ffe2d4089,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefHash(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefHash(const BytesRefHash& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_CAPACITY;

          BytesRefHash();
          BytesRefHash(const ::org::apache::lucene::util::ByteBlockPool &);
          BytesRefHash(const ::org::apache::lucene::util::ByteBlockPool &, jint, const ::org::apache::lucene::util::BytesRefHash$BytesStartArray &);

          jint add(const ::org::apache::lucene::util::BytesRef &) const;
          jint addByPoolOffset(jint) const;
          jint byteStart(jint) const;
          void clear() const;
          void clear(jboolean) const;
          void close() const;
          JArray< jint > compact() const;
          jint find(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::BytesRef get(jint, const ::org::apache::lucene::util::BytesRef &) const;
          jlong ramBytesUsed() const;
          void reinit() const;
          jint size() const;
          JArray< jint > sort() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefHash);
        extern PyTypeObject *PY_TYPE(BytesRefHash);

        class t_BytesRefHash {
        public:
          PyObject_HEAD
          BytesRefHash object;
          static PyObject *wrap_Object(const BytesRefHash&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
