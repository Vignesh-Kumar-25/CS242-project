#ifndef org_apache_lucene_util_AttributeSource_H
#define org_apache_lucene_util_AttributeSource_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
        class Attribute;
        class AttributeFactory;
        class AttributeImpl;
        class AttributeSource;
        class AttributeSource$State;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_f38db80c57bf6528,
            mid_addAttribute_6f478b8c73b1df46,
            mid_addAttributeImpl_0763465cd7a2713a,
            mid_captureState_5bf0ec3b166df8be,
            mid_clearAttributes_3353d9f14bbfd91a,
            mid_cloneAttributes_a6afc952c7a48446,
            mid_copyTo_d0d57c64eb05f049,
            mid_endAttributes_3353d9f14bbfd91a,
            mid_equals_6084f78e09b6c0c3,
            mid_getAttribute_6f478b8c73b1df46,
            mid_getAttributeClassesIterator_7c74834ad8788f5d,
            mid_getAttributeFactory_5142d2c53cb51df0,
            mid_getAttributeImplsIterator_7c74834ad8788f5d,
            mid_hasAttribute_b192f4d73bfa9825,
            mid_hasAttributes_ee8b0a5fa521ddac,
            mid_hashCode_15aa3d485e96b665,
            mid_reflectAsString_5a10629f333319c8,
            mid_reflectWith_6bfc1709573bfcf8,
            mid_removeAllAttributes_3353d9f14bbfd91a,
            mid_restoreState_e5981326e0bf6e82,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttributeSource(const AttributeSource& obj) : ::java::lang::Object(obj) {}

          AttributeSource();
          AttributeSource(const ::org::apache::lucene::util::AttributeFactory &);

          ::org::apache::lucene::util::Attribute addAttribute(const ::java::lang::Class &) const;
          void addAttributeImpl(const ::org::apache::lucene::util::AttributeImpl &) const;
          ::org::apache::lucene::util::AttributeSource$State captureState() const;
          void clearAttributes() const;
          AttributeSource cloneAttributes() const;
          void copyTo(const AttributeSource &) const;
          void endAttributes() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::Attribute getAttribute(const ::java::lang::Class &) const;
          ::java::util::Iterator getAttributeClassesIterator() const;
          ::org::apache::lucene::util::AttributeFactory getAttributeFactory() const;
          ::java::util::Iterator getAttributeImplsIterator() const;
          jboolean hasAttribute(const ::java::lang::Class &) const;
          jboolean hasAttributes() const;
          jint hashCode() const;
          ::java::lang::String reflectAsString(jboolean) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void removeAllAttributes() const;
          void restoreState(const ::org::apache::lucene::util::AttributeSource$State &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(AttributeSource);
        extern PyTypeObject *PY_TYPE(AttributeSource);

        class t_AttributeSource {
        public:
          PyObject_HEAD
          AttributeSource object;
          static PyObject *wrap_Object(const AttributeSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
