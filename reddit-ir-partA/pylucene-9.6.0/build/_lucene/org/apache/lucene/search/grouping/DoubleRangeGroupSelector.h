#ifndef org_apache_lucene_search_grouping_DoubleRangeGroupSelector_H
#define org_apache_lucene_search_grouping_DoubleRangeGroupSelector_H

#include "org/apache/lucene/search/grouping/GroupSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class DoubleRangeFactory;
          class DoubleRange;
          class SearchGroup;
          class GroupSelector$State;
        }
        class DoubleValuesSource;
        class Scorable;
      }
      namespace index {
        class LeafReaderContext;
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

          class DoubleRangeGroupSelector : public ::org::apache::lucene::search::grouping::GroupSelector {
           public:
            enum {
              mid_init$_431740efe919e593,
              mid_advanceTo_f4d6de7b9c77fd3c,
              mid_copyValue_b7f5ed96b68d0739,
              mid_currentValue_b7f5ed96b68d0739,
              mid_setGroups_568dc3e0933a89e8,
              mid_setNextReader_c78364002bac1c56,
              mid_setScorer_dd6a8586263881d1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRangeGroupSelector(jobject obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRangeGroupSelector(const DoubleRangeGroupSelector& obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {}

            DoubleRangeGroupSelector(const ::org::apache::lucene::search::DoubleValuesSource &, const ::org::apache::lucene::search::grouping::DoubleRangeFactory &);

            ::org::apache::lucene::search::grouping::GroupSelector$State advanceTo(jint) const;
            ::org::apache::lucene::search::grouping::DoubleRange copyValue() const;
            ::org::apache::lucene::search::grouping::DoubleRange currentValue() const;
            void setGroups(const ::java::util::Collection &) const;
            void setNextReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(DoubleRangeGroupSelector);
          extern PyTypeObject *PY_TYPE(DoubleRangeGroupSelector);

          class t_DoubleRangeGroupSelector {
          public:
            PyObject_HEAD
            DoubleRangeGroupSelector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DoubleRangeGroupSelector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DoubleRangeGroupSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DoubleRangeGroupSelector&, PyTypeObject *);
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
