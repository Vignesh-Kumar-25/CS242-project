#ifndef org_apache_pylucene_util_PythonAttributeImpl_H
#define org_apache_pylucene_util_PythonAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_clear_3353d9f14bbfd91a,
            mid_copyTo_0763465cd7a2713a,
            mid_equals_6084f78e09b6c0c3,
            mid_finalize_3353d9f14bbfd91a,
            mid_hashCode_15aa3d485e96b665,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            mid_reflectWith_6bfc1709573bfcf8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAttributeImpl(const PythonAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          PythonAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void finalize() const;
          jint hashCode() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PythonAttributeImpl);
        extern PyTypeObject *PY_TYPE(PythonAttributeImpl);

        class t_PythonAttributeImpl {
        public:
          PyObject_HEAD
          PythonAttributeImpl object;
          static PyObject *wrap_Object(const PythonAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
