#ifndef org_apache_lucene_codecs_uniformsplit_FieldMetadata_H
#define org_apache_lucene_codecs_uniformsplit_FieldMetadata_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class FixedBitSet;
      }
      namespace index {
        class FieldInfo;
      }
      namespace codecs {
        class BlockTermState;
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
      namespace codecs {
        namespace uniformsplit {

          class FieldMetadata : public ::java::lang::Object {
           public:
            enum {
              mid_init$_557a1c42e699541c,
              mid_init$_047a2a96a5126359,
              mid_getDictionaryStartFP_058f5911dcf5d8a4,
              mid_getDocCount_15aa3d485e96b665,
              mid_getDocsSeen_d54506e1caf3d4d4,
              mid_getFieldInfo_98c2f34682356a76,
              mid_getFirstBlockStartFP_058f5911dcf5d8a4,
              mid_getLastBlockStartFP_058f5911dcf5d8a4,
              mid_getLastTerm_e6961a1ebae5a29a,
              mid_getNumTerms_058f5911dcf5d8a4,
              mid_getSumDocFreq_058f5911dcf5d8a4,
              mid_getSumTotalTermFreq_058f5911dcf5d8a4,
              mid_setDictionaryStartFP_db2028ac45cd5b77,
              mid_setFirstBlockStartFP_db2028ac45cd5b77,
              mid_setLastBlockStartFP_db2028ac45cd5b77,
              mid_setLastTerm_46caeaebccf31ffe,
              mid_updateStats_df59836e1dc8869a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldMetadata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldMetadata(const FieldMetadata& obj) : ::java::lang::Object(obj) {}

            FieldMetadata(const ::org::apache::lucene::index::FieldInfo &, jint);
            FieldMetadata(jlong, jlong, jlong, const ::org::apache::lucene::util::BytesRef &);

            jlong getDictionaryStartFP() const;
            jint getDocCount() const;
            ::org::apache::lucene::util::FixedBitSet getDocsSeen() const;
            ::org::apache::lucene::index::FieldInfo getFieldInfo() const;
            jlong getFirstBlockStartFP() const;
            jlong getLastBlockStartFP() const;
            ::org::apache::lucene::util::BytesRef getLastTerm() const;
            jlong getNumTerms() const;
            jlong getSumDocFreq() const;
            jlong getSumTotalTermFreq() const;
            void setDictionaryStartFP(jlong) const;
            void setFirstBlockStartFP(jlong) const;
            void setLastBlockStartFP(jlong) const;
            void setLastTerm(const ::org::apache::lucene::util::BytesRef &) const;
            void updateStats(const ::org::apache::lucene::codecs::BlockTermState &) const;
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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(FieldMetadata);
          extern PyTypeObject *PY_TYPE(FieldMetadata);

          class t_FieldMetadata {
          public:
            PyObject_HEAD
            FieldMetadata object;
            static PyObject *wrap_Object(const FieldMetadata&);
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
