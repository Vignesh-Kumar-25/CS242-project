#ifndef org_apache_lucene_analysis_tokenattributes_TermFrequencyAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_TermFrequencyAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class TermFrequencyAttribute;
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

          class TermFrequencyAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_clear_3353d9f14bbfd91a,
              mid_copyTo_0763465cd7a2713a,
              mid_end_3353d9f14bbfd91a,
              mid_equals_6084f78e09b6c0c3,
              mid_getTermFrequency_15aa3d485e96b665,
              mid_hashCode_15aa3d485e96b665,
              mid_reflectWith_6bfc1709573bfcf8,
              mid_setTermFrequency_da425451c8de636b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermFrequencyAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermFrequencyAttributeImpl(const TermFrequencyAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            TermFrequencyAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            void end() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getTermFrequency() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setTermFrequency(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(TermFrequencyAttributeImpl);
          extern PyTypeObject *PY_TYPE(TermFrequencyAttributeImpl);

          class t_TermFrequencyAttributeImpl {
          public:
            PyObject_HEAD
            TermFrequencyAttributeImpl object;
            static PyObject *wrap_Object(const TermFrequencyAttributeImpl&);
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
