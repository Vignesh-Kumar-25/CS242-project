#ifndef org_apache_lucene_util_bkd_BKDReader_H
#define org_apache_lucene_util_bkd_BKDReader_H

#include "org/apache/lucene/index/PointValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
      namespace index {
        class PointValues$PointTree;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDReader : public ::org::apache::lucene::index::PointValues {
           public:
            enum {
              mid_init$_5bb0dec8de1bca84,
              mid_getBytesPerDimension_15aa3d485e96b665,
              mid_getDocCount_15aa3d485e96b665,
              mid_getMaxPackedValue_f4d7c022fb7af16d,
              mid_getMinPackedValue_f4d7c022fb7af16d,
              mid_getNumDimensions_15aa3d485e96b665,
              mid_getNumIndexDimensions_15aa3d485e96b665,
              mid_getPointTree_cdd39143a1361e72,
              mid_size_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDReader(jobject obj) : ::org::apache::lucene::index::PointValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDReader(const BKDReader& obj) : ::org::apache::lucene::index::PointValues(obj) {}

            BKDReader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::IndexInput &);

            jint getBytesPerDimension() const;
            jint getDocCount() const;
            JArray< jbyte > getMaxPackedValue() const;
            JArray< jbyte > getMinPackedValue() const;
            jint getNumDimensions() const;
            jint getNumIndexDimensions() const;
            ::org::apache::lucene::index::PointValues$PointTree getPointTree() const;
            jlong size() const;
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
      namespace util {
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(BKDReader);
          extern PyTypeObject *PY_TYPE(BKDReader);

          class t_BKDReader {
          public:
            PyObject_HEAD
            BKDReader object;
            static PyObject *wrap_Object(const BKDReader&);
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
