#ifndef org_apache_lucene_index_FilterLeafReader$FilterPostingsEnum_H
#define org_apache_lucene_index_FilterLeafReader$FilterPostingsEnum_H

#include "org/apache/lucene/index/PostingsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Unwrappable;
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

        class FilterLeafReader$FilterPostingsEnum : public ::org::apache::lucene::index::PostingsEnum {
         public:
          enum {
            mid_advance_58b165b57740feff,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_endOffset_15aa3d485e96b665,
            mid_freq_15aa3d485e96b665,
            mid_getPayload_e6961a1ebae5a29a,
            mid_nextDoc_15aa3d485e96b665,
            mid_nextPosition_15aa3d485e96b665,
            mid_startOffset_15aa3d485e96b665,
            mid_unwrap_8fa3c095726b079c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafReader$FilterPostingsEnum(jobject obj) : ::org::apache::lucene::index::PostingsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafReader$FilterPostingsEnum(const FilterLeafReader$FilterPostingsEnum& obj) : ::org::apache::lucene::index::PostingsEnum(obj) {}

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextDoc() const;
          jint nextPosition() const;
          jint startOffset() const;
          ::org::apache::lucene::index::PostingsEnum unwrap() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterLeafReader$FilterPostingsEnum);
        extern PyTypeObject *PY_TYPE(FilterLeafReader$FilterPostingsEnum);

        class t_FilterLeafReader$FilterPostingsEnum {
        public:
          PyObject_HEAD
          FilterLeafReader$FilterPostingsEnum object;
          static PyObject *wrap_Object(const FilterLeafReader$FilterPostingsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
