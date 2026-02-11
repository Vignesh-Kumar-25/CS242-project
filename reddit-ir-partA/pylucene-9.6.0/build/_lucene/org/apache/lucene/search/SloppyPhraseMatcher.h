#ifndef org_apache_lucene_search_SloppyPhraseMatcher_H
#define org_apache_lucene_search_SloppyPhraseMatcher_H

#include "org/apache/lucene/search/PhraseMatcher.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        namespace similarities {
          class Similarity$SimScorer;
        }
        class PhraseQuery$PostingsAndFreq;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SloppyPhraseMatcher : public ::org::apache::lucene::search::PhraseMatcher {
         public:
          enum {
            mid_init$_22383c0ff7d80ae9,
            mid_endOffset_15aa3d485e96b665,
            mid_endPosition_15aa3d485e96b665,
            mid_nextMatch_ee8b0a5fa521ddac,
            mid_reset_3353d9f14bbfd91a,
            mid_startOffset_15aa3d485e96b665,
            mid_startPosition_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SloppyPhraseMatcher(jobject obj) : ::org::apache::lucene::search::PhraseMatcher(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SloppyPhraseMatcher(const SloppyPhraseMatcher& obj) : ::org::apache::lucene::search::PhraseMatcher(obj) {}

          SloppyPhraseMatcher(const JArray< ::org::apache::lucene::search::PhraseQuery$PostingsAndFreq > &, jint, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::similarities::Similarity$SimScorer &, jfloat, jboolean);

          jint endOffset() const;
          jint endPosition() const;
          jboolean nextMatch() const;
          void reset() const;
          jint startOffset() const;
          jint startPosition() const;
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
        extern PyType_Def PY_TYPE_DEF(SloppyPhraseMatcher);
        extern PyTypeObject *PY_TYPE(SloppyPhraseMatcher);

        class t_SloppyPhraseMatcher {
        public:
          PyObject_HEAD
          SloppyPhraseMatcher object;
          static PyObject *wrap_Object(const SloppyPhraseMatcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
