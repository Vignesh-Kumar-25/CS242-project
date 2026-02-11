#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class CharSequence;
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
          class TermToBytesRefAttribute;
          class CharTermAttributeImpl;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class CharTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_append_262e0b463c416b2a,
              mid_append_956612a0b8b66709,
              mid_append_b0c6c2ad314a784e,
              mid_append_b1404e8ac3694cd7,
              mid_append_f9434ca2f2ec9eb2,
              mid_append_968758447c827be0,
              mid_buffer_44e5186a889ad767,
              mid_charAt_c36d5d142dcfe0b2,
              mid_clear_3353d9f14bbfd91a,
              mid_clone_e034177cf226e249,
              mid_copyBuffer_9df2689bc3d19600,
              mid_copyTo_0763465cd7a2713a,
              mid_equals_6084f78e09b6c0c3,
              mid_getBytesRef_e6961a1ebae5a29a,
              mid_hashCode_15aa3d485e96b665,
              mid_length_15aa3d485e96b665,
              mid_reflectWith_6bfc1709573bfcf8,
              mid_resizeBuffer_d9d508f40fc379ff,
              mid_setEmpty_ad42848721fa1b99,
              mid_setLength_08f6c04b1f54f3a3,
              mid_subSequence_d258919c83060ac0,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTermAttributeImpl(const CharTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            CharTermAttributeImpl();

            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::StringBuilder &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(jchar) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::CharSequence &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::CharSequence &, jint, jint) const;
            JArray< jchar > buffer() const;
            jchar charAt(jint) const;
            void clear() const;
            CharTermAttributeImpl clone() const;
            void copyBuffer(const JArray< jchar > &, jint, jint) const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            jint hashCode() const;
            jint length() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            JArray< jchar > resizeBuffer(jint) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute setEmpty() const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute setLength(jint) const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
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
      namespace analysis {
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(CharTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(CharTermAttributeImpl);

          class t_CharTermAttributeImpl {
          public:
            PyObject_HEAD
            CharTermAttributeImpl object;
            static PyObject *wrap_Object(const CharTermAttributeImpl&);
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
