#ifndef org_apache_lucene_index_DocsWithFieldSet_H
#define org_apache_lucene_index_DocsWithFieldSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace java {
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
      namespace index {

        class DocsWithFieldSet : public ::org::apache::lucene::search::DocIdSet {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_da425451c8de636b,
            mid_cardinality_15aa3d485e96b665,
            mid_iterator_4d173fc78d956ba9,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocsWithFieldSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocsWithFieldSet(const DocsWithFieldSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          DocsWithFieldSet();

          void add(jint) const;
          jint cardinality() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(DocsWithFieldSet);
        extern PyTypeObject *PY_TYPE(DocsWithFieldSet);

        class t_DocsWithFieldSet {
        public:
          PyObject_HEAD
          DocsWithFieldSet object;
          static PyObject *wrap_Object(const DocsWithFieldSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
