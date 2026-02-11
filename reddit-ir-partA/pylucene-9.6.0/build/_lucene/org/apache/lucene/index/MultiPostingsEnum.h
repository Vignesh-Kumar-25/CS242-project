#ifndef org_apache_lucene_index_MultiPostingsEnum_H
#define org_apache_lucene_index_MultiPostingsEnum_H

#include "org/apache/lucene/index/PostingsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class MultiPostingsEnum;
        class MultiTermsEnum;
        class MultiPostingsEnum$EnumWithSlice;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiPostingsEnum : public ::org::apache::lucene::index::PostingsEnum {
         public:
          enum {
            mid_init$_b5de3236df48b4e2,
            mid_advance_58b165b57740feff,
            mid_canReuse_487b639e8be02956,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_endOffset_15aa3d485e96b665,
            mid_freq_15aa3d485e96b665,
            mid_getNumSubs_15aa3d485e96b665,
            mid_getPayload_e6961a1ebae5a29a,
            mid_getSubs_5968de7a4d0265f5,
            mid_nextDoc_15aa3d485e96b665,
            mid_nextPosition_15aa3d485e96b665,
            mid_reset_5a811cc7042a18bd,
            mid_startOffset_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPostingsEnum(jobject obj) : ::org::apache::lucene::index::PostingsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPostingsEnum(const MultiPostingsEnum& obj) : ::org::apache::lucene::index::PostingsEnum(obj) {}

          MultiPostingsEnum(const ::org::apache::lucene::index::MultiTermsEnum &, jint);

          jint advance(jint) const;
          jboolean canReuse(const ::org::apache::lucene::index::MultiTermsEnum &) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          jint getNumSubs() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          JArray< ::org::apache::lucene::index::MultiPostingsEnum$EnumWithSlice > getSubs() const;
          jint nextDoc() const;
          jint nextPosition() const;
          MultiPostingsEnum reset(const JArray< ::org::apache::lucene::index::MultiPostingsEnum$EnumWithSlice > &, jint) const;
          jint startOffset() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiPostingsEnum);
        extern PyTypeObject *PY_TYPE(MultiPostingsEnum);

        class t_MultiPostingsEnum {
        public:
          PyObject_HEAD
          MultiPostingsEnum object;
          static PyObject *wrap_Object(const MultiPostingsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
