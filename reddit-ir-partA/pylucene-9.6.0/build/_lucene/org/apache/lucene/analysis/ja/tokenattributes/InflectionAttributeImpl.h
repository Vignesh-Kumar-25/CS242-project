#ifndef org_apache_lucene_analysis_ja_tokenattributes_InflectionAttributeImpl_H
#define org_apache_lucene_analysis_ja_tokenattributes_InflectionAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
      namespace analysis {
        namespace ja {
          namespace tokenattributes {
            class InflectionAttribute;
          }
          class Token;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace tokenattributes {

            class InflectionAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_clear_3353d9f14bbfd91a,
                mid_copyTo_0763465cd7a2713a,
                mid_getInflectionForm_dc633f13a47328a8,
                mid_getInflectionType_dc633f13a47328a8,
                mid_reflectWith_6bfc1709573bfcf8,
                mid_setToken_7f5f44237f19efa9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit InflectionAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              InflectionAttributeImpl(const InflectionAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

              InflectionAttributeImpl();

              void clear() const;
              void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
              ::java::lang::String getInflectionForm() const;
              ::java::lang::String getInflectionType() const;
              void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
              void setToken(const ::org::apache::lucene::analysis::ja::Token &) const;
            };
          }
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
        namespace ja {
          namespace tokenattributes {
            extern PyType_Def PY_TYPE_DEF(InflectionAttributeImpl);
            extern PyTypeObject *PY_TYPE(InflectionAttributeImpl);

            class t_InflectionAttributeImpl {
            public:
              PyObject_HEAD
              InflectionAttributeImpl object;
              static PyObject *wrap_Object(const InflectionAttributeImpl&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
