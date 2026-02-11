#ifndef org_apache_lucene_index_MultiReader_H
#define org_apache_lucene_index_MultiReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace java {
  namespace util {
    class Comparator;
  }
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
      namespace index {
        class IndexReader$CacheHelper;
        class IndexReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_init$_4506413f88a402c8,
            mid_init$_e9aa5f6f96ee97b6,
            mid_init$_2991dd2b0dcac173,
            mid_getReaderCacheHelper_b29ffc613bdce50b,
            mid_doClose_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiReader(const MultiReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &);
          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &, jboolean);
          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &, const ::java::util::Comparator &, jboolean);

          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiReader);
        extern PyTypeObject *PY_TYPE(MultiReader);

        class t_MultiReader {
        public:
          PyObject_HEAD
          MultiReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
