#ifndef org_apache_lucene_util_BitDocIdSet_H
#define org_apache_lucene_util_BitDocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
      namespace util {
        class BitSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BitDocIdSet : public ::org::apache::lucene::search::DocIdSet {
         public:
          enum {
            mid_init$_10138574ac5f24f1,
            mid_init$_11163d3fb1a3d63a,
            mid_bits_02207d5189d32143,
            mid_iterator_4d173fc78d956ba9,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitDocIdSet(const BitDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          BitDocIdSet(const ::org::apache::lucene::util::BitSet &);
          BitDocIdSet(const ::org::apache::lucene::util::BitSet &, jlong);

          ::org::apache::lucene::util::BitSet bits() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jlong ramBytesUsed() const;
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
      namespace util {
        extern PyType_Def PY_TYPE_DEF(BitDocIdSet);
        extern PyTypeObject *PY_TYPE(BitDocIdSet);

        class t_BitDocIdSet {
        public:
          PyObject_HEAD
          BitDocIdSet object;
          static PyObject *wrap_Object(const BitDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
