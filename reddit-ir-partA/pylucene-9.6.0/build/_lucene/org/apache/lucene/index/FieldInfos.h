#ifndef org_apache_lucene_index_FieldInfos_H
#define org_apache_lucene_index_FieldInfos_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfos;
        class FieldInfo;
        class IndexReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInfos : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b1dccdbb99969c35,
            mid_fieldInfo_20f875c4c9ece1cd,
            mid_fieldInfo_88699b5c817933f2,
            mid_getIndexedFields_3633e6be17f2771f,
            mid_getMergedFieldInfos_4853407a180cde62,
            mid_getSoftDeletesField_dc633f13a47328a8,
            mid_hasDocValues_ee8b0a5fa521ddac,
            mid_hasFreq_ee8b0a5fa521ddac,
            mid_hasNorms_ee8b0a5fa521ddac,
            mid_hasOffsets_ee8b0a5fa521ddac,
            mid_hasPayloads_ee8b0a5fa521ddac,
            mid_hasPointValues_ee8b0a5fa521ddac,
            mid_hasPostings_ee8b0a5fa521ddac,
            mid_hasProx_ee8b0a5fa521ddac,
            mid_hasVectorValues_ee8b0a5fa521ddac,
            mid_hasVectors_ee8b0a5fa521ddac,
            mid_iterator_7c74834ad8788f5d,
            mid_size_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfos(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInfos(const FieldInfos& obj) : ::java::lang::Object(obj) {}

          static FieldInfos *EMPTY;

          FieldInfos(const JArray< ::org::apache::lucene::index::FieldInfo > &);

          ::org::apache::lucene::index::FieldInfo fieldInfo(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfo fieldInfo(jint) const;
          static ::java::util::Collection getIndexedFields(const ::org::apache::lucene::index::IndexReader &);
          static FieldInfos getMergedFieldInfos(const ::org::apache::lucene::index::IndexReader &);
          ::java::lang::String getSoftDeletesField() const;
          jboolean hasDocValues() const;
          jboolean hasFreq() const;
          jboolean hasNorms() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPointValues() const;
          jboolean hasPostings() const;
          jboolean hasProx() const;
          jboolean hasVectorValues() const;
          jboolean hasVectors() const;
          ::java::util::Iterator iterator() const;
          jint size() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldInfos);
        extern PyTypeObject *PY_TYPE(FieldInfos);

        class t_FieldInfos {
        public:
          PyObject_HEAD
          FieldInfos object;
          static PyObject *wrap_Object(const FieldInfos&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
