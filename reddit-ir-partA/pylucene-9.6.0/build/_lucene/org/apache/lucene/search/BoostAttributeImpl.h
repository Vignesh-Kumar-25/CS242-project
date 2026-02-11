#ifndef org_apache_lucene_search_BoostAttributeImpl_H
#define org_apache_lucene_search_BoostAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
      namespace search {
        class BoostAttribute;
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
      namespace search {

        class BoostAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_clear_3353d9f14bbfd91a,
            mid_copyTo_0763465cd7a2713a,
            mid_getBoost_15cd8574741b1394,
            mid_reflectWith_6bfc1709573bfcf8,
            mid_setBoost_354c036766ff84b4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoostAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BoostAttributeImpl(const BoostAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          BoostAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          jfloat getBoost() const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void setBoost(jfloat) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(BoostAttributeImpl);
        extern PyTypeObject *PY_TYPE(BoostAttributeImpl);

        class t_BoostAttributeImpl {
        public:
          PyObject_HEAD
          BoostAttributeImpl object;
          static PyObject *wrap_Object(const BoostAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
