#ifndef org_apache_lucene_index_BaseCompositeReader_H
#define org_apache_lucene_index_BaseCompositeReader_H

#include "org/apache/lucene/index/CompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor;
        class Fields;
        class TermVectors;
        class Term;
        class StoredFields;
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

        class BaseCompositeReader : public ::org::apache::lucene::index::CompositeReader {
         public:
          enum {
            mid_docFreq_ef1d513059bfc629,
            mid_document_554c42b3867e24d2,
            mid_getDocCount_08c5dabd7f8f1590,
            mid_getSumDocFreq_f9e0f284a35cbac5,
            mid_getSumTotalTermFreq_f9e0f284a35cbac5,
            mid_getTermVectors_3b4838b454503ecf,
            mid_maxDoc_15aa3d485e96b665,
            mid_numDocs_15aa3d485e96b665,
            mid_storedFields_5c55707d6155e873,
            mid_termVectors_d323ae88a3a8142c,
            mid_totalTermFreq_dedf03c152f4c663,
            mid_readerIndex_58b165b57740feff,
            mid_getSequentialSubReaders_0bc66e960964b70a,
            mid_readerBase_58b165b57740feff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseCompositeReader(jobject obj) : ::org::apache::lucene::index::CompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseCompositeReader(const BaseCompositeReader& obj) : ::org::apache::lucene::index::CompositeReader(obj) {}

          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          jint getDocCount(const ::java::lang::String &) const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          jint maxDoc() const;
          jint numDocs() const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
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
        extern PyType_Def PY_TYPE_DEF(BaseCompositeReader);
        extern PyTypeObject *PY_TYPE(BaseCompositeReader);

        class t_BaseCompositeReader {
        public:
          PyObject_HEAD
          BaseCompositeReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BaseCompositeReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BaseCompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BaseCompositeReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
