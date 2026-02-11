#ifndef org_apache_lucene_codecs_lucene90_IndexedDISI_H
#define org_apache_lucene_codecs_lucene90_IndexedDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
        class IndexOutput;
        class IndexInput;
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
      namespace codecs {
        namespace lucene90 {

          class IndexedDISI : public ::org::apache::lucene::search::DocIdSetIterator {
           public:
            enum {
              mid_init$_af518eaf3b354c51,
              mid_advance_58b165b57740feff,
              mid_advanceExact_92eccba87b045bbc,
              mid_cost_058f5911dcf5d8a4,
              mid_createBlockSlice_351d5a8c7b1ae33e,
              mid_createJumpTable_190c8d781432766a,
              mid_docID_15aa3d485e96b665,
              mid_index_15aa3d485e96b665,
              mid_nextDoc_15aa3d485e96b665,
              mid_writeBitSet_1b383e4cdd17a0e6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexedDISI(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexedDISI(const IndexedDISI& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

            static jbyte DEFAULT_DENSE_RANK_POWER;

            IndexedDISI(const ::org::apache::lucene::store::IndexInput &, jlong, jlong, jint, jbyte, jlong);

            jint advance(jint) const;
            jboolean advanceExact(jint) const;
            jlong cost() const;
            static ::org::apache::lucene::store::IndexInput createBlockSlice(const ::org::apache::lucene::store::IndexInput &, const ::java::lang::String &, jlong, jlong, jint);
            static ::org::apache::lucene::store::RandomAccessInput createJumpTable(const ::org::apache::lucene::store::IndexInput &, jlong, jlong, jint);
            jint docID() const;
            jint index() const;
            jint nextDoc() const;
            static jshort writeBitSet(const ::org::apache::lucene::search::DocIdSetIterator &, const ::org::apache::lucene::store::IndexOutput &, jbyte);
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
      namespace codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(IndexedDISI);
          extern PyTypeObject *PY_TYPE(IndexedDISI);

          class t_IndexedDISI {
          public:
            PyObject_HEAD
            IndexedDISI object;
            static PyObject *wrap_Object(const IndexedDISI&);
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
