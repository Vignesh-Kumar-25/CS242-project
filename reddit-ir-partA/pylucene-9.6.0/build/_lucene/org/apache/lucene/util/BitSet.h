#ifndef org_apache_lucene_util_BitSet_H
#define org_apache_lucene_util_BitSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class Bits;
        class BitSet;
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BitSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_approximateCardinality_15aa3d485e96b665,
            mid_cardinality_15aa3d485e96b665,
            mid_clear_da425451c8de636b,
            mid_clear_078cef180abf5351,
            mid_getAndSet_92eccba87b045bbc,
            mid_nextSetBit_58b165b57740feff,
            mid_of_1c06bcc86127460b,
            mid_or_2564d731e9721b2c,
            mid_prevSetBit_58b165b57740feff,
            mid_set_da425451c8de636b,
            mid_checkUnpositioned_2564d731e9721b2c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitSet(const BitSet& obj) : ::java::lang::Object(obj) {}

          BitSet();

          jint approximateCardinality() const;
          jint cardinality() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          jboolean getAndSet(jint) const;
          jint nextSetBit(jint) const;
          static BitSet of(const ::org::apache::lucene::search::DocIdSetIterator &, jint);
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          void set(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BitSet);
        extern PyTypeObject *PY_TYPE(BitSet);

        class t_BitSet {
        public:
          PyObject_HEAD
          BitSet object;
          static PyObject *wrap_Object(const BitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
