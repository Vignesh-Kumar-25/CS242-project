#ifndef org_apache_lucene_index_IndexSorter$StringSorter_H
#define org_apache_lucene_index_IndexSorter$StringSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexSorter$DocComparator;
        class IndexSorter$ComparableProvider;
        class IndexSorter$SortedDocValuesProvider;
        class LeafReader;
        class IndexSorter;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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

        class IndexSorter$StringSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d62770a4a9111b71,
            mid_getComparableProviders_daa42b12dd1fb725,
            mid_getDocComparator_1ba21b734d7cace4,
            mid_getProviderName_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$StringSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$StringSorter(const IndexSorter$StringSorter& obj) : ::java::lang::Object(obj) {}

          IndexSorter$StringSorter(const ::java::lang::String &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::index::IndexSorter$SortedDocValuesProvider &);

          JArray< ::org::apache::lucene::index::IndexSorter$ComparableProvider > getComparableProviders(const ::java::util::List &) const;
          ::org::apache::lucene::index::IndexSorter$DocComparator getDocComparator(const ::org::apache::lucene::index::LeafReader &, jint) const;
          ::java::lang::String getProviderName() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$StringSorter);
        extern PyTypeObject *PY_TYPE(IndexSorter$StringSorter);

        class t_IndexSorter$StringSorter {
        public:
          PyObject_HEAD
          IndexSorter$StringSorter object;
          static PyObject *wrap_Object(const IndexSorter$StringSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
