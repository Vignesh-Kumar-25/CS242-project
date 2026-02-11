#ifndef org_apache_lucene_search_grouping_GroupReducer_H
#define org_apache_lucene_search_grouping_GroupReducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class SearchGroup;
        }
        class Scorable;
        class Collector;
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

          class GroupReducer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_collect_61c44613255b63d8,
              mid_getCollector_da7d90a69e525e9b,
              mid_needsScores_ee8b0a5fa521ddac,
              mid_setGroups_568dc3e0933a89e8,
              mid_setNextReader_c78364002bac1c56,
              mid_setScorer_dd6a8586263881d1,
              mid_newCollector_1d93f464a5be65ae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupReducer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupReducer(const GroupReducer& obj) : ::java::lang::Object(obj) {}

            GroupReducer();

            void collect(const ::java::lang::Object &, jint) const;
            ::org::apache::lucene::search::Collector getCollector(const ::java::lang::Object &) const;
            jboolean needsScores() const;
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
          extern PyType_Def PY_TYPE_DEF(GroupReducer);
          extern PyTypeObject *PY_TYPE(GroupReducer);

          class t_GroupReducer {
          public:
            PyObject_HEAD
            GroupReducer object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_GroupReducer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GroupReducer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GroupReducer&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
