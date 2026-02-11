#ifndef org_apache_lucene_codecs_MutablePointTree_H
#define org_apache_lucene_codecs_MutablePointTree_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class PointValues$IntersectVisitor;
        class PointValues$PointTree;
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
      namespace codecs {

        class MutablePointTree : public ::java::lang::Object {
         public:
          enum {
            mid_clone_cdd39143a1361e72,
            mid_getByteAt_51eaa3f1035bcd59,
            mid_getDocID_58b165b57740feff,
            mid_getMaxPackedValue_f4d7c022fb7af16d,
            mid_getMinPackedValue_f4d7c022fb7af16d,
            mid_getValue_0918cf67b8215564,
            mid_moveToChild_ee8b0a5fa521ddac,
            mid_moveToParent_ee8b0a5fa521ddac,
            mid_moveToSibling_ee8b0a5fa521ddac,
            mid_restore_078cef180abf5351,
            mid_save_078cef180abf5351,
            mid_swap_078cef180abf5351,
            mid_visitDocIDs_bda1c31002f1eb9d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MutablePointTree(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MutablePointTree(const MutablePointTree& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::PointValues$PointTree clone() const;
          jbyte getByteAt(jint, jint) const;
          jint getDocID(jint) const;
          JArray< jbyte > getMaxPackedValue() const;
          JArray< jbyte > getMinPackedValue() const;
          void getValue(jint, const ::org::apache::lucene::util::BytesRef &) const;
          jboolean moveToChild() const;
          jboolean moveToParent() const;
          jboolean moveToSibling() const;
          void restore(jint, jint) const;
          void save(jint, jint) const;
          void swap(jint, jint) const;
          void visitDocIDs(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(MutablePointTree);
        extern PyTypeObject *PY_TYPE(MutablePointTree);

        class t_MutablePointTree {
        public:
          PyObject_HEAD
          MutablePointTree object;
          static PyObject *wrap_Object(const MutablePointTree&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
