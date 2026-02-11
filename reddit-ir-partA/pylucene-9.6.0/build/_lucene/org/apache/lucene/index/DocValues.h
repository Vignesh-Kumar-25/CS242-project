#ifndef org_apache_lucene_index_DocValues_H
#define org_apache_lucene_index_DocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class NumericDocValues;
        class SortedDocValues;
        class LeafReader;
        class BinaryDocValues;
        class LeafReaderContext;
        class SortedSetDocValues;
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
      namespace index {

        class DocValues : public ::java::lang::Object {
         public:
          enum {
            mid_emptyBinary_93a45cfa2060a8f7,
            mid_emptyNumeric_7bd2f13cc6be8fad,
            mid_emptySorted_f65935949340a720,
            mid_emptySortedNumeric_933497a394887423,
            mid_emptySortedSet_21b0ddd4f006c817,
            mid_getBinary_bd7f1f1cfb863ec1,
            mid_getNumeric_66fcd84cd615818e,
            mid_getSorted_3ba536cb6df48605,
            mid_getSortedNumeric_f78df55badecca3f,
            mid_getSortedSet_97edcf0686debfa3,
            mid_isCacheable_8d691b76995c53d2,
            mid_singleton_f341175f8d4e0ad0,
            mid_singleton_272fd53326b68f15,
            mid_unwrapSingleton_69541d795e62b188,
            mid_unwrapSingleton_77c810358b9ba370,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValues(const DocValues& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::index::BinaryDocValues emptyBinary();
          static ::org::apache::lucene::index::NumericDocValues emptyNumeric();
          static ::org::apache::lucene::index::SortedDocValues emptySorted();
          static ::org::apache::lucene::index::SortedNumericDocValues emptySortedNumeric();
          static ::org::apache::lucene::index::SortedSetDocValues emptySortedSet();
          static ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &, const JArray< ::java::lang::String > &);
          static ::org::apache::lucene::index::SortedNumericDocValues singleton(const ::org::apache::lucene::index::NumericDocValues &);
          static ::org::apache::lucene::index::SortedSetDocValues singleton(const ::org::apache::lucene::index::SortedDocValues &);
          static ::org::apache::lucene::index::NumericDocValues unwrapSingleton(const ::org::apache::lucene::index::SortedNumericDocValues &);
          static ::org::apache::lucene::index::SortedDocValues unwrapSingleton(const ::org::apache::lucene::index::SortedSetDocValues &);
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
        extern PyType_Def PY_TYPE_DEF(DocValues);
        extern PyTypeObject *PY_TYPE(DocValues);

        class t_DocValues {
        public:
          PyObject_HEAD
          DocValues object;
          static PyObject *wrap_Object(const DocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
