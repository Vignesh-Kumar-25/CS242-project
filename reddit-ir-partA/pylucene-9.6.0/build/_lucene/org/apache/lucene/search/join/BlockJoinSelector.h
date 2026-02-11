#ifndef org_apache_lucene_search_join_BlockJoinSelector_H
#define org_apache_lucene_search_join_BlockJoinSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class NumericDocValues;
        class SortedDocValues;
        class SortedSetDocValues;
      }
      namespace search {
        namespace join {
          class BlockJoinSelector$Type;
        }
        class DocIdSetIterator;
      }
      namespace util {
        class Bits;
        class BitSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class BlockJoinSelector : public ::java::lang::Object {
           public:
            enum {
              mid_wrap_990fb89709266e8a,
              mid_wrap_0d985a021c8e9ab2,
              mid_wrap_252c87ce4dc80aee,
              mid_wrap_fc0c9e0f9ec38a3e,
              mid_wrap_40f25e721c1f2495,
              mid_wrap_806a41649a9832e9,
              mid_wrap_a9ac6a53c1f8a54e,
              mid_wrap_39209d192b1fb39c,
              mid_toIter_f2876b25a97d0b76,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockJoinSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockJoinSelector(const BlockJoinSelector& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::util::Bits wrap(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::NumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedSetDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::NumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::SortedNumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::SortedNumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {
          extern PyType_Def PY_TYPE_DEF(BlockJoinSelector);
          extern PyTypeObject *PY_TYPE(BlockJoinSelector);

          class t_BlockJoinSelector {
          public:
            PyObject_HEAD
            BlockJoinSelector object;
            static PyObject *wrap_Object(const BlockJoinSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
