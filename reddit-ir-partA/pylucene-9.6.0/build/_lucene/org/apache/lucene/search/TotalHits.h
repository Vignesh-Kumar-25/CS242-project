#ifndef org_apache_lucene_search_TotalHits_H
#define org_apache_lucene_search_TotalHits_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TotalHits$Relation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TotalHits : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f6f5bd7fad8cc9df,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_relation,
            fid_value,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHits(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHits(const TotalHits& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::TotalHits$Relation _get_relation() const;
          jlong _get_value() const;

          TotalHits(jlong, const ::org::apache::lucene::search::TotalHits$Relation &);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TotalHits);
        extern PyTypeObject *PY_TYPE(TotalHits);

        class t_TotalHits {
        public:
          PyObject_HEAD
          TotalHits object;
          static PyObject *wrap_Object(const TotalHits&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
