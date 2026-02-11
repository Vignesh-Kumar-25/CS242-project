#ifndef org_apache_lucene_search_grouping_GroupFacetCollector_H
#define org_apache_lucene_search_grouping_GroupFacetCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class GroupFacetCollector$GroupedFacetResult;
        }
        class Scorable;
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupFacetCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_mergeSegmentResults_0b6530bef4f1c396,
              mid_scoreMode_2c1f1f28428089a8,
              mid_setScorer_dd6a8586263881d1,
              mid_createSegmentResult_d3f32d7d0e36b439,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupFacetCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupFacetCollector(const GroupFacetCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            ::org::apache::lucene::search::grouping::GroupFacetCollector$GroupedFacetResult mergeSegmentResults(jint, jint, jboolean) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(GroupFacetCollector);
          extern PyTypeObject *PY_TYPE(GroupFacetCollector);

          class t_GroupFacetCollector {
          public:
            PyObject_HEAD
            GroupFacetCollector object;
            static PyObject *wrap_Object(const GroupFacetCollector&);
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
