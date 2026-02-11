#ifndef org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl_H
#define org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
        class BytesRef;
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class TermToBytesRefAttribute;
        }
        namespace miscellaneous {
          class ConcatenateGraphFilter$BytesRefBuilderTermAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_builder_f10c6668a5068e96,
              mid_clear_3353d9f14bbfd91a,
              mid_clone_6202fed200996fbb,
              mid_copyTo_0763465cd7a2713a,
              mid_getBytesRef_e6961a1ebae5a29a,
              mid_reflectWith_6bfc1709573bfcf8,
              mid_toUTF16_1487175e1bd58fa5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl(const ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl();

            ::org::apache::lucene::util::BytesRefBuilder builder() const;
            void clear() const;
            ::org::apache::lucene::util::AttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            ::java::lang::CharSequence toUTF16() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl);

          class t_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl {
          public:
            PyObject_HEAD
            ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl object;
            static PyObject *wrap_Object(const ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl&);
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
