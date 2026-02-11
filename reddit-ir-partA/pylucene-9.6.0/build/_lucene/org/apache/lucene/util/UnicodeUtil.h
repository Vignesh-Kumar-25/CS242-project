#ifndef org_apache_lucene_util_UnicodeUtil_H
#define org_apache_lucene_util_UnicodeUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class UnicodeUtil : public ::java::lang::Object {
         public:
          enum {
            mid_UTF16toUTF8_f6a5f5c6badc9c7a,
            mid_UTF16toUTF8_4575e156ae232165,
            mid_UTF16toUTF8_77f14562dc2be1cf,
            mid_UTF8toUTF16_10162198e9bd79f2,
            mid_UTF8toUTF16_0094e6772835d7ab,
            mid_UTF8toUTF32_0887aac9001ac88f,
            mid_calcUTF16toUTF8Length_0c061f26a4db1fd6,
            mid_codePointCount_7e43af883cb79fc2,
            mid_maxUTF8Length_58b165b57740feff,
            mid_newString_ce5a0d720b722ab5,
            mid_toHexString_04612c8360f09496,
            mid_validUTF16String_f6ed35df00b05129,
            mid_validUTF16String_233ad466442953a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnicodeUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnicodeUtil(const UnicodeUtil& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::util::BytesRef *BIG_TERM;
          static jint MAX_UTF8_BYTES_PER_CHAR;
          static jint UNI_REPLACEMENT_CHAR;
          static jint UNI_SUR_HIGH_END;
          static jint UNI_SUR_HIGH_START;
          static jint UNI_SUR_LOW_END;
          static jint UNI_SUR_LOW_START;

          static jint UTF16toUTF8(const JArray< jchar > &, jint, jint, const JArray< jbyte > &);
          static jint UTF16toUTF8(const ::java::lang::CharSequence &, jint, jint, const JArray< jbyte > &);
          static jint UTF16toUTF8(const ::java::lang::CharSequence &, jint, jint, const JArray< jbyte > &, jint);
          static jint UTF8toUTF16(const ::org::apache::lucene::util::BytesRef &, const JArray< jchar > &);
          static jint UTF8toUTF16(const JArray< jbyte > &, jint, jint, const JArray< jchar > &);
          static jint UTF8toUTF32(const ::org::apache::lucene::util::BytesRef &, const JArray< jint > &);
          static jint calcUTF16toUTF8Length(const ::java::lang::CharSequence &, jint, jint);
          static jint codePointCount(const ::org::apache::lucene::util::BytesRef &);
          static jint maxUTF8Length(jint);
          static ::java::lang::String newString(const JArray< jint > &, jint, jint);
          static ::java::lang::String toHexString(const ::java::lang::String &);
          static jboolean validUTF16String(const ::java::lang::CharSequence &);
          static jboolean validUTF16String(const JArray< jchar > &, jint);
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
        extern PyType_Def PY_TYPE_DEF(UnicodeUtil);
        extern PyTypeObject *PY_TYPE(UnicodeUtil);

        class t_UnicodeUtil {
        public:
          PyObject_HEAD
          UnicodeUtil object;
          static PyObject *wrap_Object(const UnicodeUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
