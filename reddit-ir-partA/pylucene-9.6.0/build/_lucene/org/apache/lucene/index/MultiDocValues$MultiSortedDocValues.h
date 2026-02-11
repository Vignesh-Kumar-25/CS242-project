#ifndef org_apache_lucene_index_MultiDocValues$MultiSortedDocValues_H
#define org_apache_lucene_index_MultiDocValues$MultiSortedDocValues_H

#include "org/apache/lucene/index/SortedDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class OrdinalMap;
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
      namespace index {

        class MultiDocValues$MultiSortedDocValues : public ::org::apache::lucene::index::SortedDocValues {
         public:
          enum {
            mid_init$_338acd3d6f42c83b,
            mid_advance_58b165b57740feff,
            mid_advanceExact_92eccba87b045bbc,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_getValueCount_15aa3d485e96b665,
            mid_lookupOrd_1ad28ec3fc5251fa,
            mid_nextDoc_15aa3d485e96b665,
            mid_ordValue_15aa3d485e96b665,
            max_mid
          };

          enum {
            fid_docStarts,
            fid_mapping,
            fid_values,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocValues$MultiSortedDocValues(jobject obj) : ::org::apache::lucene::index::SortedDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues$MultiSortedDocValues(const MultiDocValues$MultiSortedDocValues& obj) : ::org::apache::lucene::index::SortedDocValues(obj) {}

          JArray< jint > _get_docStarts() const;
          ::org::apache::lucene::index::OrdinalMap _get_mapping() const;
          JArray< ::org::apache::lucene::index::SortedDocValues > _get_values() const;

          MultiDocValues$MultiSortedDocValues(const JArray< ::org::apache::lucene::index::SortedDocValues > &, const JArray< jint > &, const ::org::apache::lucene::index::OrdinalMap &, jlong);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint nextDoc() const;
          jint ordValue() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiDocValues$MultiSortedDocValues);
        extern PyTypeObject *PY_TYPE(MultiDocValues$MultiSortedDocValues);

        class t_MultiDocValues$MultiSortedDocValues {
        public:
          PyObject_HEAD
          MultiDocValues$MultiSortedDocValues object;
          static PyObject *wrap_Object(const MultiDocValues$MultiSortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
