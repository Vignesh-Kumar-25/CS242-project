#ifndef org_apache_lucene_search_Scorable_H
#define org_apache_lucene_search_Scorable_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable$ChildScorable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Scorable : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_docID_15aa3d485e96b665,
            mid_getChildren_b47b7eaa8124fb60,
            mid_score_15cd8574741b1394,
            mid_setMinCompetitiveScore_354c036766ff84b4,
            mid_smoothingScore_cc3c9b7e666e88d5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Scorable(const Scorable& obj) : ::java::lang::Object(obj) {}

          Scorable();

          jint docID() const;
          ::java::util::Collection getChildren() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          jfloat smoothingScore(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(Scorable);
        extern PyTypeObject *PY_TYPE(Scorable);

        class t_Scorable {
        public:
          PyObject_HEAD
          Scorable object;
          static PyObject *wrap_Object(const Scorable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
