#ifndef org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H

#include "org/apache/lucene/analysis/tokenattributes/CharTermAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
        class AttributeImpl;
      }
      namespace analysis {
        namespace tokenattributes {
          class PackedTokenAttributeImpl;
          class OffsetAttribute;
          class TermFrequencyAttribute;
          class PositionLengthAttribute;
          class TypeAttribute;
          class PositionIncrementAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class PackedTokenAttributeImpl : public ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_clear_3353d9f14bbfd91a,
              mid_clone_4f2412d9c4102596,
              mid_copyTo_0763465cd7a2713a,
              mid_end_3353d9f14bbfd91a,
              mid_endOffset_15aa3d485e96b665,
              mid_equals_6084f78e09b6c0c3,
              mid_getPositionIncrement_15aa3d485e96b665,
              mid_getPositionLength_15aa3d485e96b665,
              mid_getTermFrequency_15aa3d485e96b665,
              mid_hashCode_15aa3d485e96b665,
              mid_reflectWith_6bfc1709573bfcf8,
              mid_setOffset_078cef180abf5351,
              mid_setPositionIncrement_da425451c8de636b,
              mid_setPositionLength_da425451c8de636b,
              mid_setTermFrequency_da425451c8de636b,
              mid_setType_4a883f7810d2effa,
              mid_startOffset_15aa3d485e96b665,
              mid_type_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedTokenAttributeImpl(jobject obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedTokenAttributeImpl(const PackedTokenAttributeImpl& obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {}

            PackedTokenAttributeImpl();

            void clear() const;
            PackedTokenAttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            void end() const;
            jint endOffset() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getPositionIncrement() const;
            jint getPositionLength() const;
            jint getTermFrequency() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setOffset(jint, jint) const;
            void setPositionIncrement(jint) const;
            void setPositionLength(jint) const;
            void setTermFrequency(jint) const;
            void setType(const ::java::lang::String &) const;
            jint startOffset() const;
            ::java::lang::String type() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedTokenAttributeImpl);
          extern PyTypeObject *PY_TYPE(PackedTokenAttributeImpl);

          class t_PackedTokenAttributeImpl {
          public:
            PyObject_HEAD
            PackedTokenAttributeImpl object;
            static PyObject *wrap_Object(const PackedTokenAttributeImpl&);
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
