#ifndef org_apache_lucene_util_DocIdSetBuilder_H
#define org_apache_lucene_util_DocIdSetBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSet;
        class DocIdSetIterator;
      }
      namespace index {
        class PointValues;
        class Terms;
      }
      namespace util {
        class DocIdSetBuilder$BulkAdder;
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
      namespace util {

        class DocIdSetBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_init$_c145415927f4c025,
            mid_init$_f081c20ce5f1de21,
            mid_add_2564d731e9721b2c,
            mid_build_8255fe93b7aaddde,
            mid_grow_7bcad1f6210b8f29,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSetBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdSetBuilder(const DocIdSetBuilder& obj) : ::java::lang::Object(obj) {}

          DocIdSetBuilder(jint);
          DocIdSetBuilder(jint, const ::org::apache::lucene::index::Terms &);
          DocIdSetBuilder(jint, const ::org::apache::lucene::index::PointValues &, const ::java::lang::String &);

          void add(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          ::org::apache::lucene::search::DocIdSet build() const;
          ::org::apache::lucene::util::DocIdSetBuilder$BulkAdder grow(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(DocIdSetBuilder);
        extern PyTypeObject *PY_TYPE(DocIdSetBuilder);

        class t_DocIdSetBuilder {
        public:
          PyObject_HEAD
          DocIdSetBuilder object;
          static PyObject *wrap_Object(const DocIdSetBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
