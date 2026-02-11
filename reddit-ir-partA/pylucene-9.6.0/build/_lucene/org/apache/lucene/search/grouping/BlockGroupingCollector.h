#ifndef org_apache_lucene_search_grouping_BlockGroupingCollector_H
#define org_apache_lucene_search_grouping_BlockGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        namespace grouping {
          class TopGroups;
        }
        class Scorable;
        class ScoreMode;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
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

          class BlockGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_ae633c6670bdd3d0,
              mid_collect_da425451c8de636b,
              mid_getTopGroups_d1f3d3a94463ef0b,
              mid_scoreMode_2c1f1f28428089a8,
              mid_setScorer_dd6a8586263881d1,
              mid_doSetNextReader_c78364002bac1c56,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockGroupingCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockGroupingCollector(const BlockGroupingCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            BlockGroupingCollector(const ::org::apache::lucene::search::Sort &, jint, jboolean, const ::org::apache::lucene::search::Weight &);

            void collect(jint) const;
            ::org::apache::lucene::search::grouping::TopGroups getTopGroups(const ::org::apache::lucene::search::Sort &, jint, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockGroupingCollector);
          extern PyTypeObject *PY_TYPE(BlockGroupingCollector);

          class t_BlockGroupingCollector {
          public:
            PyObject_HEAD
            BlockGroupingCollector object;
            static PyObject *wrap_Object(const BlockGroupingCollector&);
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
