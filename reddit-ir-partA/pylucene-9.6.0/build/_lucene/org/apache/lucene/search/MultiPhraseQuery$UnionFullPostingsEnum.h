#ifndef org_apache_lucene_search_MultiPhraseQuery$UnionFullPostingsEnum_H
#define org_apache_lucene_search_MultiPhraseQuery$UnionFullPostingsEnum_H

#include "org/apache/lucene/search/MultiPhraseQuery$UnionPostingsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class PostingsEnum;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiPhraseQuery$UnionFullPostingsEnum : public ::org::apache::lucene::search::MultiPhraseQuery$UnionPostingsEnum {
         public:
          enum {
            mid_init$_1a2e28000748bc88,
            mid_endOffset_15aa3d485e96b665,
            mid_freq_15aa3d485e96b665,
            mid_getPayload_e6961a1ebae5a29a,
            mid_nextPosition_15aa3d485e96b665,
            mid_startOffset_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPhraseQuery$UnionFullPostingsEnum(jobject obj) : ::org::apache::lucene::search::MultiPhraseQuery$UnionPostingsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPhraseQuery$UnionFullPostingsEnum(const MultiPhraseQuery$UnionFullPostingsEnum& obj) : ::org::apache::lucene::search::MultiPhraseQuery$UnionPostingsEnum(obj) {}

          MultiPhraseQuery$UnionFullPostingsEnum(const ::java::util::List &);

          jint endOffset() const;
          jint freq() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextPosition() const;
          jint startOffset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(MultiPhraseQuery$UnionFullPostingsEnum);
        extern PyTypeObject *PY_TYPE(MultiPhraseQuery$UnionFullPostingsEnum);

        class t_MultiPhraseQuery$UnionFullPostingsEnum {
        public:
          PyObject_HEAD
          MultiPhraseQuery$UnionFullPostingsEnum object;
          static PyObject *wrap_Object(const MultiPhraseQuery$UnionFullPostingsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
