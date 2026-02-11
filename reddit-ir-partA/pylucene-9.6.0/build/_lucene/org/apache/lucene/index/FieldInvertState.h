#ifndef org_apache_lucene_index_FieldInvertState_H
#define org_apache_lucene_index_FieldInvertState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexOptions;
      }
      namespace util {
        class AttributeSource;
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
      namespace index {

        class FieldInvertState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4f06acf9406555fd,
            mid_init$_260e878b02ab907a,
            mid_getAttributeSource_a6afc952c7a48446,
            mid_getIndexCreatedVersionMajor_15aa3d485e96b665,
            mid_getIndexOptions_0a49376ab791dba8,
            mid_getLength_15aa3d485e96b665,
            mid_getMaxTermFrequency_15aa3d485e96b665,
            mid_getName_dc633f13a47328a8,
            mid_getNumOverlap_15aa3d485e96b665,
            mid_getOffset_15aa3d485e96b665,
            mid_getPosition_15aa3d485e96b665,
            mid_getUniqueTermCount_15aa3d485e96b665,
            mid_setLength_da425451c8de636b,
            mid_setNumOverlap_da425451c8de636b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInvertState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInvertState(const FieldInvertState& obj) : ::java::lang::Object(obj) {}

          FieldInvertState(jint, const ::java::lang::String &, const ::org::apache::lucene::index::IndexOptions &);
          FieldInvertState(jint, const ::java::lang::String &, const ::org::apache::lucene::index::IndexOptions &, jint, jint, jint, jint, jint, jint);

          ::org::apache::lucene::util::AttributeSource getAttributeSource() const;
          jint getIndexCreatedVersionMajor() const;
          ::org::apache::lucene::index::IndexOptions getIndexOptions() const;
          jint getLength() const;
          jint getMaxTermFrequency() const;
          ::java::lang::String getName() const;
          jint getNumOverlap() const;
          jint getOffset() const;
          jint getPosition() const;
          jint getUniqueTermCount() const;
          void setLength(jint) const;
          void setNumOverlap(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldInvertState);
        extern PyTypeObject *PY_TYPE(FieldInvertState);

        class t_FieldInvertState {
        public:
          PyObject_HEAD
          FieldInvertState object;
          static PyObject *wrap_Object(const FieldInvertState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
