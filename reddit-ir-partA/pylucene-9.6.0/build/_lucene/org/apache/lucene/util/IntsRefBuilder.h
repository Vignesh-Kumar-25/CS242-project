#ifndef org_apache_lucene_util_IntsRefBuilder_H
#define org_apache_lucene_util_IntsRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class IntsRef;
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

        class IntsRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_append_da425451c8de636b,
            mid_clear_3353d9f14bbfd91a,
            mid_copyInts_f17c1e129b99147e,
            mid_copyInts_4aa7571f728d6752,
            mid_copyUTF8Bytes_46caeaebccf31ffe,
            mid_equals_6084f78e09b6c0c3,
            mid_get_7eb5056455b30fe6,
            mid_grow_da425451c8de636b,
            mid_hashCode_15aa3d485e96b665,
            mid_intAt_58b165b57740feff,
            mid_ints_7880494ffe2d4089,
            mid_length_15aa3d485e96b665,
            mid_setIntAt_078cef180abf5351,
            mid_setLength_da425451c8de636b,
            mid_toIntsRef_7eb5056455b30fe6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntsRefBuilder(const IntsRefBuilder& obj) : ::java::lang::Object(obj) {}

          IntsRefBuilder();

          void append(jint) const;
          void clear() const;
          void copyInts(const ::org::apache::lucene::util::IntsRef &) const;
          void copyInts(const JArray< jint > &, jint, jint) const;
          void copyUTF8Bytes(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::IntsRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint intAt(jint) const;
          JArray< jint > ints() const;
          jint length() const;
          void setIntAt(jint, jint) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::IntsRef toIntsRef() const;
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
        extern PyType_Def PY_TYPE_DEF(IntsRefBuilder);
        extern PyTypeObject *PY_TYPE(IntsRefBuilder);

        class t_IntsRefBuilder {
        public:
          PyObject_HEAD
          IntsRefBuilder object;
          static PyObject *wrap_Object(const IntsRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
