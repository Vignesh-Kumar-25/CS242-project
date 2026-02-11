#ifndef org_apache_lucene_search_ScoreCachingWrappingScorer_H
#define org_apache_lucene_search_ScoreCachingWrappingScorer_H

#include "org/apache/lucene/search/Scorable.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable$ChildScorable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ScoreCachingWrappingScorer : public ::org::apache::lucene::search::Scorable {
         public:
          enum {
            mid_docID_15aa3d485e96b665,
            mid_getChildren_b47b7eaa8124fb60,
            mid_score_15cd8574741b1394,
            mid_setMinCompetitiveScore_354c036766ff84b4,
            mid_wrap_4f3c93230fbb07cb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoreCachingWrappingScorer(jobject obj) : ::org::apache::lucene::search::Scorable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScoreCachingWrappingScorer(const ScoreCachingWrappingScorer& obj) : ::org::apache::lucene::search::Scorable(obj) {}

          jint docID() const;
          ::java::util::Collection getChildren() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          static ::org::apache::lucene::search::Scorable wrap(const ::org::apache::lucene::search::Scorable &);
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
        extern PyType_Def PY_TYPE_DEF(ScoreCachingWrappingScorer);
        extern PyTypeObject *PY_TYPE(ScoreCachingWrappingScorer);

        class t_ScoreCachingWrappingScorer {
        public:
          PyObject_HEAD
          ScoreCachingWrappingScorer object;
          static PyObject *wrap_Object(const ScoreCachingWrappingScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
