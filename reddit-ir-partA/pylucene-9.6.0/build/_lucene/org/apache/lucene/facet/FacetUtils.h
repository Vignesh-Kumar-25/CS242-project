#ifndef org_apache_lucene_facet_FacetUtils_H
#define org_apache_lucene_facet_FacetUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Bits;
        class IntsRef;
      }
      namespace index {
        class SortedNumericDocValues;
        class LeafReader;
      }
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    namespace function {
      class BiConsumer;
    }
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
      namespace facet {

        class FacetUtils : public ::java::lang::Object {
         public:
          enum {
            mid_liveDocsDISI_c3b249dc2baab846,
            mid_loadOrdinalValues_f78df55badecca3f,
            mid_loadOrdinalValues_3a3cb9f8add33259,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetUtils(const FacetUtils& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::search::DocIdSetIterator liveDocsDISI(const ::org::apache::lucene::search::DocIdSetIterator &, const ::org::apache::lucene::util::Bits &);
          static ::org::apache::lucene::index::SortedNumericDocValues loadOrdinalValues(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedNumericDocValues loadOrdinalValues(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &, const ::java::util::function::BiConsumer &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetUtils);
        extern PyTypeObject *PY_TYPE(FacetUtils);

        class t_FacetUtils {
        public:
          PyObject_HEAD
          FacetUtils object;
          static PyObject *wrap_Object(const FacetUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
