#ifndef org_apache_lucene_search_BlockMaxDISI_H
#define org_apache_lucene_search_BlockMaxDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
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
      namespace search {

        class BlockMaxDISI : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_18ebc3d7c1033a6e,
            mid_advance_58b165b57740feff,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_nextDoc_15aa3d485e96b665,
            mid_setMinCompetitiveScore_354c036766ff84b4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BlockMaxDISI(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlockMaxDISI(const BlockMaxDISI& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          BlockMaxDISI(const ::org::apache::lucene::search::DocIdSetIterator &, const ::org::apache::lucene::search::Scorer &);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          jint nextDoc() const;
          void setMinCompetitiveScore(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(BlockMaxDISI);
        extern PyTypeObject *PY_TYPE(BlockMaxDISI);

        class t_BlockMaxDISI {
        public:
          PyObject_HEAD
          BlockMaxDISI object;
          static PyObject *wrap_Object(const BlockMaxDISI&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
