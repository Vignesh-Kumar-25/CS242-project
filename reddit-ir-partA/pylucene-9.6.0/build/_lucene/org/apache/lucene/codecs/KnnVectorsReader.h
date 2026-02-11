#ifndef org_apache_lucene_codecs_KnnVectorsReader_H
#define org_apache_lucene_codecs_KnnVectorsReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
      }
      namespace util {
        class Accountable;
        class Bits;
      }
      namespace index {
        class ByteVectorValues;
        class FloatVectorValues;
      }
      namespace codecs {
        class KnnVectorsReader;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
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

        class KnnVectorsReader : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_getByteVectorValues_2de47235ea37839f,
            mid_getFloatVectorValues_0281d62202ab2972,
            mid_getMergeInstance_63265411cf1dfbf7,
            mid_search_d7281208578d6bcd,
            mid_search_3890e20c604b35ba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorsReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorsReader(const KnnVectorsReader& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          KnnVectorsReader getMergeInstance() const;
          ::org::apache::lucene::search::TopDocs search(const ::java::lang::String &, const JArray< jbyte > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::search::TopDocs search(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(KnnVectorsReader);
        extern PyTypeObject *PY_TYPE(KnnVectorsReader);

        class t_KnnVectorsReader {
        public:
          PyObject_HEAD
          KnnVectorsReader object;
          static PyObject *wrap_Object(const KnnVectorsReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
