#ifndef org_apache_lucene_util_bkd_BKDConfig_H
#define org_apache_lucene_util_bkd_BKDConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDConfig : public ::java::lang::Object {
           public:
            enum {
              mid_init$_dfabecda8fb9b5ea,
              max_mid
            };

            enum {
              fid_bytesPerDim,
              fid_bytesPerDoc,
              fid_maxPointsInLeafNode,
              fid_numDims,
              fid_numIndexDims,
              fid_packedBytesLength,
              fid_packedIndexBytesLength,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDConfig(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDConfig(const BKDConfig& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_POINTS_IN_LEAF_NODE;
            static jint MAX_DIMS;
            static jint MAX_INDEX_DIMS;

            jint _get_bytesPerDim() const;
            jint _get_bytesPerDoc() const;
            jint _get_maxPointsInLeafNode() const;
            jint _get_numDims() const;
            jint _get_numIndexDims() const;
            jint _get_packedBytesLength() const;
            jint _get_packedIndexBytesLength() const;

            BKDConfig(jint, jint, jint, jint);
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
          extern PyType_Def PY_TYPE_DEF(BKDConfig);
          extern PyTypeObject *PY_TYPE(BKDConfig);

          class t_BKDConfig {
          public:
            PyObject_HEAD
            BKDConfig object;
            static PyObject *wrap_Object(const BKDConfig&);
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
