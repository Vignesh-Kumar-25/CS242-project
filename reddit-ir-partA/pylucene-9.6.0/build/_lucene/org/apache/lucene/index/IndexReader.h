#ifndef org_apache_lucene_index_IndexReader_H
#define org_apache_lucene_index_IndexReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor;
        class IndexReader$CacheHelper;
        class IndexReaderContext;
        class IndexReader;
        class Fields;
        class TermVectors;
        class Term;
        class LeafReaderContext;
        class StoredFields;
        class Terms;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Set;
  }
  namespace io {
    class IOException;
    class Closeable;
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

        class IndexReader : public ::java::lang::Object {
         public:
          enum {
            mid_close_3353d9f14bbfd91a,
            mid_decRef_3353d9f14bbfd91a,
            mid_docFreq_ef1d513059bfc629,
            mid_document_0c636ffa23b67e6b,
            mid_document_554c42b3867e24d2,
            mid_document_39a3372a89edb50b,
            mid_equals_6084f78e09b6c0c3,
            mid_getContext_854d13b266278673,
            mid_getDocCount_08c5dabd7f8f1590,
            mid_getReaderCacheHelper_b29ffc613bdce50b,
            mid_getRefCount_15aa3d485e96b665,
            mid_getSumDocFreq_f9e0f284a35cbac5,
            mid_getSumTotalTermFreq_f9e0f284a35cbac5,
            mid_getTermVector_d3f55712239b6371,
            mid_getTermVectors_3b4838b454503ecf,
            mid_hasDeletions_ee8b0a5fa521ddac,
            mid_hashCode_15aa3d485e96b665,
            mid_incRef_3353d9f14bbfd91a,
            mid_leaves_0bc66e960964b70a,
            mid_maxDoc_15aa3d485e96b665,
            mid_numDeletedDocs_15aa3d485e96b665,
            mid_numDocs_15aa3d485e96b665,
            mid_registerParentReader_f48a27e209678b8f,
            mid_storedFields_5c55707d6155e873,
            mid_termVectors_d323ae88a3a8142c,
            mid_totalTermFreq_dedf03c152f4c663,
            mid_tryIncRef_ee8b0a5fa521ddac,
            mid_notifyReaderClosedListeners_3353d9f14bbfd91a,
            mid_doClose_3353d9f14bbfd91a,
            mid_ensureOpen_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexReader(const IndexReader& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void decRef() const;
          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::document::Document document(jint) const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::document::Document document(jint, const ::java::util::Set &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::IndexReaderContext getContext() const;
          jint getDocCount(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          jint getRefCount() const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Terms getTermVector(jint, const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          jboolean hasDeletions() const;
          jint hashCode() const;
          void incRef() const;
          ::java::util::List leaves() const;
          jint maxDoc() const;
          jint numDeletedDocs() const;
          jint numDocs() const;
          void registerParentReader(const IndexReader &) const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
          jboolean tryIncRef() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexReader);
        extern PyTypeObject *PY_TYPE(IndexReader);

        class t_IndexReader {
        public:
          PyObject_HEAD
          IndexReader object;
          static PyObject *wrap_Object(const IndexReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
