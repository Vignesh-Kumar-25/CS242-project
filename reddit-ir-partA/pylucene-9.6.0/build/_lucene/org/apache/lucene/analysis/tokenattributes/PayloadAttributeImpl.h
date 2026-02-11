#ifndef org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class PayloadAttributeImpl;
          class PayloadAttribute;
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

          class PayloadAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_46caeaebccf31ffe,
              mid_clear_3353d9f14bbfd91a,
              mid_clone_f5dc3b45fec3b16a,
              mid_copyTo_0763465cd7a2713a,
              mid_equals_6084f78e09b6c0c3,
              mid_getPayload_e6961a1ebae5a29a,
              mid_hashCode_15aa3d485e96b665,
              mid_reflectWith_6bfc1709573bfcf8,
              mid_setPayload_46caeaebccf31ffe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadAttributeImpl(const PayloadAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            PayloadAttributeImpl();
            PayloadAttributeImpl(const ::org::apache::lucene::util::BytesRef &);

            void clear() const;
            PayloadAttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getPayload() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setPayload(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(PayloadAttributeImpl);
          extern PyTypeObject *PY_TYPE(PayloadAttributeImpl);

          class t_PayloadAttributeImpl {
          public:
            PyObject_HEAD
            PayloadAttributeImpl object;
            static PyObject *wrap_Object(const PayloadAttributeImpl&);
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
