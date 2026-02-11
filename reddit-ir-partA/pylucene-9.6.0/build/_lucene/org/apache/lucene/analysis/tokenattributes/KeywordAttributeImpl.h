#ifndef org_apache_lucene_analysis_tokenattributes_KeywordAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_KeywordAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class KeywordAttribute;
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

          class KeywordAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_clear_3353d9f14bbfd91a,
              mid_copyTo_0763465cd7a2713a,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_isKeyword_ee8b0a5fa521ddac,
              mid_reflectWith_6bfc1709573bfcf8,
              mid_setKeyword_4f96af910856b303,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeywordAttributeImpl(const KeywordAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            KeywordAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isKeyword() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setKeyword(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(KeywordAttributeImpl);
          extern PyTypeObject *PY_TYPE(KeywordAttributeImpl);

          class t_KeywordAttributeImpl {
          public:
            PyObject_HEAD
            KeywordAttributeImpl object;
            static PyObject *wrap_Object(const KeywordAttributeImpl&);
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
