#ifndef org_apache_lucene_index_PointValues$PointTree_H
#define org_apache_lucene_index_PointValues$PointTree_H

#include "java/lang/Cloneable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
        class PointValues$PointTree;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PointValues$PointTree : public ::java::lang::Cloneable {
         public:
          enum {
            mid_clone_cdd39143a1361e72,
            mid_getMaxPackedValue_f4d7c022fb7af16d,
            mid_getMinPackedValue_f4d7c022fb7af16d,
            mid_moveToChild_ee8b0a5fa521ddac,
            mid_moveToParent_ee8b0a5fa521ddac,
            mid_moveToSibling_ee8b0a5fa521ddac,
            mid_size_058f5911dcf5d8a4,
            mid_visitDocIDs_bda1c31002f1eb9d,
            mid_visitDocValues_bda1c31002f1eb9d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointValues$PointTree(jobject obj) : ::java::lang::Cloneable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointValues$PointTree(const PointValues$PointTree& obj) : ::java::lang::Cloneable(obj) {}

          PointValues$PointTree clone() const;
          JArray< jbyte > getMaxPackedValue() const;
          JArray< jbyte > getMinPackedValue() const;
          jboolean moveToChild() const;
          jboolean moveToParent() const;
          jboolean moveToSibling() const;
          jlong size() const;
          void visitDocIDs(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          void visitDocValues(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PointValues$PointTree);
        extern PyTypeObject *PY_TYPE(PointValues$PointTree);

        class t_PointValues$PointTree {
        public:
          PyObject_HEAD
          PointValues$PointTree object;
          static PyObject *wrap_Object(const PointValues$PointTree&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
