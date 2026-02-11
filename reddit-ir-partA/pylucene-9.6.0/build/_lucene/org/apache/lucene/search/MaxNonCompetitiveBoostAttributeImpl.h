#ifndef org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H
#define org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace search {
        class MaxNonCompetitiveBoostAttribute;
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

        class MaxNonCompetitiveBoostAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_clear_3353d9f14bbfd91a,
            mid_copyTo_0763465cd7a2713a,
            mid_getCompetitiveTerm_e6961a1ebae5a29a,
            mid_getMaxNonCompetitiveBoost_15cd8574741b1394,
            mid_reflectWith_6bfc1709573bfcf8,
            mid_setCompetitiveTerm_46caeaebccf31ffe,
            mid_setMaxNonCompetitiveBoost_354c036766ff84b4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MaxNonCompetitiveBoostAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MaxNonCompetitiveBoostAttributeImpl(const MaxNonCompetitiveBoostAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          MaxNonCompetitiveBoostAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          ::org::apache::lucene::util::BytesRef getCompetitiveTerm() const;
          jfloat getMaxNonCompetitiveBoost() const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void setCompetitiveTerm(const ::org::apache::lucene::util::BytesRef &) const;
          void setMaxNonCompetitiveBoost(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(MaxNonCompetitiveBoostAttributeImpl);
        extern PyTypeObject *PY_TYPE(MaxNonCompetitiveBoostAttributeImpl);

        class t_MaxNonCompetitiveBoostAttributeImpl {
        public:
          PyObject_HEAD
          MaxNonCompetitiveBoostAttributeImpl object;
          static PyObject *wrap_Object(const MaxNonCompetitiveBoostAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
