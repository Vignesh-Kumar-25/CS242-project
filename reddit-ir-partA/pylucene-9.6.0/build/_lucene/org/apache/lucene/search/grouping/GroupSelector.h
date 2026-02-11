#ifndef org_apache_lucene_search_grouping_GroupSelector_H
#define org_apache_lucene_search_grouping_GroupSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class SearchGroup;
          class GroupSelector$State;
        }
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

          class GroupSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_advanceTo_f4d6de7b9c77fd3c,
              mid_copyValue_bdd51648087bae52,
              mid_currentValue_bdd51648087bae52,
              mid_setGroups_568dc3e0933a89e8,
              mid_setNextReader_c78364002bac1c56,
              mid_setScorer_dd6a8586263881d1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupSelector(const GroupSelector& obj) : ::java::lang::Object(obj) {}

            GroupSelector();

            ::org::apache::lucene::search::grouping::GroupSelector$State advanceTo(jint) const;
            ::java::lang::Object copyValue() const;
            ::java::lang::Object currentValue() const;
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
          extern PyType_Def PY_TYPE_DEF(GroupSelector);
          extern PyTypeObject *PY_TYPE(GroupSelector);

          class t_GroupSelector {
          public:
            PyObject_HEAD
            GroupSelector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GroupSelector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GroupSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GroupSelector&, PyTypeObject *);
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
