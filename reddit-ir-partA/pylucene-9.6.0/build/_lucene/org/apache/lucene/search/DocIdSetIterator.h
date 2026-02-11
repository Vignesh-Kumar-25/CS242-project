#ifndef org_apache_lucene_search_DocIdSetIterator_H
#define org_apache_lucene_search_DocIdSetIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocIdSetIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_advance_58b165b57740feff,
            mid_all_d6c07b38a6ab6b9f,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_empty_4d173fc78d956ba9,
            mid_nextDoc_15aa3d485e96b665,
            mid_range_3aeb5a02fe51e2a0,
            mid_slowAdvance_58b165b57740feff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSetIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdSetIterator(const DocIdSetIterator& obj) : ::java::lang::Object(obj) {}

          static jint NO_MORE_DOCS;

          DocIdSetIterator();

          jint advance(jint) const;
          static DocIdSetIterator all(jint);
          jlong cost() const;
          jint docID() const;
          static DocIdSetIterator empty();
          jint nextDoc() const;
          static DocIdSetIterator range(jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(DocIdSetIterator);
        extern PyTypeObject *PY_TYPE(DocIdSetIterator);

        class t_DocIdSetIterator {
        public:
          PyObject_HEAD
          DocIdSetIterator object;
          static PyObject *wrap_Object(const DocIdSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
