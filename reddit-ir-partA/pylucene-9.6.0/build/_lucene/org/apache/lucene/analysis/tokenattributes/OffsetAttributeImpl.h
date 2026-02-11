#ifndef org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class OffsetAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class OffsetAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_clear_3353d9f14bbfd91a,
              mid_copyTo_0763465cd7a2713a,
              mid_endOffset_15aa3d485e96b665,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_reflectWith_6bfc1709573bfcf8,
              mid_setOffset_078cef180abf5351,
              mid_startOffset_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetAttributeImpl(const OffsetAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            OffsetAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jint endOffset() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setOffset(jint, jint) const;
            jint startOffset() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetAttributeImpl);
          extern PyTypeObject *PY_TYPE(OffsetAttributeImpl);

          class t_OffsetAttributeImpl {
          public:
            PyObject_HEAD
            OffsetAttributeImpl object;
            static PyObject *wrap_Object(const OffsetAttributeImpl&);
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
