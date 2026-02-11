#ifndef org_apache_lucene_index_CheckIndex$VerifyPointsVisitor_H
#define org_apache_lucene_index_CheckIndex$VerifyPointsVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
        class PointValues;
        class PointValues$Relation;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$VerifyPointsVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4a22888667278a1b,
            mid_compare_e7d38685f4af829c,
            mid_getDocCountSeen_058f5911dcf5d8a4,
            mid_getPointCountSeen_058f5911dcf5d8a4,
            mid_visit_da425451c8de636b,
            mid_visit_3a1419ee5dee65ff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$VerifyPointsVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$VerifyPointsVisitor(const CheckIndex$VerifyPointsVisitor& obj) : ::java::lang::Object(obj) {}

          CheckIndex$VerifyPointsVisitor(const ::java::lang::String &, jint, const ::org::apache::lucene::index::PointValues &);

          ::org::apache::lucene::index::PointValues$Relation compare(const JArray< jbyte > &, const JArray< jbyte > &) const;
          jlong getDocCountSeen() const;
          jlong getPointCountSeen() const;
          void visit(jint) const;
          void visit(jint, const JArray< jbyte > &) const;
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex$VerifyPointsVisitor);
        extern PyTypeObject *PY_TYPE(CheckIndex$VerifyPointsVisitor);

        class t_CheckIndex$VerifyPointsVisitor {
        public:
          PyObject_HEAD
          CheckIndex$VerifyPointsVisitor object;
          static PyObject *wrap_Object(const CheckIndex$VerifyPointsVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
