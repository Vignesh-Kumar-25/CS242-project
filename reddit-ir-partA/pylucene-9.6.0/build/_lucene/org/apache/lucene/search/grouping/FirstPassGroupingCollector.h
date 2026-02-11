#ifndef org_apache_lucene_search_grouping_FirstPassGroupingCollector_H
#define org_apache_lucene_search_grouping_FirstPassGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class GroupSelector;
          class SearchGroup;
        }
        class Sort;
        class Scorable;
        class ScoreMode;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class FirstPassGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_e020f6d65e87e42e,
              mid_collect_da425451c8de636b,
              mid_getGroupSelector_f366f68581bb6822,
              mid_getTopGroups_241395fa3151b6e0,
              mid_scoreMode_2c1f1f28428089a8,
              mid_setScorer_dd6a8586263881d1,
              mid_doSetNextReader_c78364002bac1c56,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FirstPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FirstPassGroupingCollector(const FirstPassGroupingCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            FirstPassGroupingCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::org::apache::lucene::search::Sort &, jint);

            void collect(jint) const;
            ::org::apache::lucene::search::grouping::GroupSelector getGroupSelector() const;
            ::java::util::Collection getTopGroups(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FirstPassGroupingCollector);
          extern PyTypeObject *PY_TYPE(FirstPassGroupingCollector);

          class t_FirstPassGroupingCollector {
          public:
            PyObject_HEAD
            FirstPassGroupingCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FirstPassGroupingCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FirstPassGroupingCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FirstPassGroupingCollector&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
