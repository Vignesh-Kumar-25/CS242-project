#ifndef org_apache_lucene_index_FilterLeafReader$FilterTerms_H
#define org_apache_lucene_index_FilterLeafReader$FilterTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FilterLeafReader$FilterTerms : public ::org::apache::lucene::index::Terms {
         public:
          enum {
            mid_getDocCount_15aa3d485e96b665,
            mid_getStats_bdd51648087bae52,
            mid_getSumDocFreq_058f5911dcf5d8a4,
            mid_getSumTotalTermFreq_058f5911dcf5d8a4,
            mid_hasFreqs_ee8b0a5fa521ddac,
            mid_hasOffsets_ee8b0a5fa521ddac,
            mid_hasPayloads_ee8b0a5fa521ddac,
            mid_hasPositions_ee8b0a5fa521ddac,
            mid_iterator_b2ad4a24df27c060,
            mid_size_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafReader$FilterTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafReader$FilterTerms(const FilterLeafReader$FilterTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

          jint getDocCount() const;
          ::java::lang::Object getStats() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          jboolean hasFreqs() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPositions() const;
          ::org::apache::lucene::index::TermsEnum iterator() const;
          jlong size() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterLeafReader$FilterTerms);
        extern PyTypeObject *PY_TYPE(FilterLeafReader$FilterTerms);

        class t_FilterLeafReader$FilterTerms {
        public:
          PyObject_HEAD
          FilterLeafReader$FilterTerms object;
          static PyObject *wrap_Object(const FilterLeafReader$FilterTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
