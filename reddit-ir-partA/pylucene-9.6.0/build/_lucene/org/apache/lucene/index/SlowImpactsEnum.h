#ifndef org_apache_lucene_index_SlowImpactsEnum_H
#define org_apache_lucene_index_SlowImpactsEnum_H

#include "org/apache/lucene/index/ImpactsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class Impacts;
        class PostingsEnum;
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

        class SlowImpactsEnum : public ::org::apache::lucene::index::ImpactsEnum {
         public:
          enum {
            mid_init$_7007fcb0e9a6da03,
            mid_advance_58b165b57740feff,
            mid_advanceShallow_da425451c8de636b,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_endOffset_15aa3d485e96b665,
            mid_freq_15aa3d485e96b665,
            mid_getImpacts_39ad9ab89fc90505,
            mid_getPayload_e6961a1ebae5a29a,
            mid_nextDoc_15aa3d485e96b665,
            mid_nextPosition_15aa3d485e96b665,
            mid_startOffset_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SlowImpactsEnum(jobject obj) : ::org::apache::lucene::index::ImpactsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SlowImpactsEnum(const SlowImpactsEnum& obj) : ::org::apache::lucene::index::ImpactsEnum(obj) {}

          SlowImpactsEnum(const ::org::apache::lucene::index::PostingsEnum &);

          jint advance(jint) const;
          void advanceShallow(jint) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          ::org::apache::lucene::index::Impacts getImpacts() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextDoc() const;
          jint nextPosition() const;
          jint startOffset() const;
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
        extern PyType_Def PY_TYPE_DEF(SlowImpactsEnum);
        extern PyTypeObject *PY_TYPE(SlowImpactsEnum);

        class t_SlowImpactsEnum {
        public:
          PyObject_HEAD
          SlowImpactsEnum object;
          static PyObject *wrap_Object(const SlowImpactsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
