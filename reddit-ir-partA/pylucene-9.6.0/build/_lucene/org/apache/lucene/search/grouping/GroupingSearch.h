#ifndef org_apache_lucene_search_grouping_GroupingSearch_H
#define org_apache_lucene_search_grouping_GroupingSearch_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
        namespace grouping {
          class GroupSelector;
          class TopGroups;
          class GroupingSearch;
        }
        class Sort;
      }
      namespace queries {
        namespace function {
          class ValueSource;
        }
      }
      namespace util {
        class Bits;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupingSearch : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4a883f7810d2effa,
              mid_init$_60638ee06ec0416b,
              mid_init$_34767cbd34b822d5,
              mid_init$_aeed167db96b8a11,
              mid_disableCaching_64db1261af075ad2,
              mid_getAllGroupHeads_d4f221d850798ead,
              mid_getAllMatchingGroups_b47b7eaa8124fb60,
              mid_search_a247bee7dff629ea,
              mid_setAllGroupHeads_e21662f3375f044e,
              mid_setAllGroups_e21662f3375f044e,
              mid_setCaching_a43838358af1defd,
              mid_setCachingInMB_6f58f83253cc4b73,
              mid_setGroupDocsLimit_a2d88f3e3e41b037,
              mid_setGroupDocsOffset_a2d88f3e3e41b037,
              mid_setGroupSort_9ba95dc17f9fcba3,
              mid_setIncludeMaxScore_e21662f3375f044e,
              mid_setSortWithinGroup_9ba95dc17f9fcba3,
              mid_groupByFieldOrFunction_a247bee7dff629ea,
              mid_groupByDocBlock_a247bee7dff629ea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupingSearch(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupingSearch(const GroupingSearch& obj) : ::java::lang::Object(obj) {}

            GroupingSearch(const ::java::lang::String &);
            GroupingSearch(const ::org::apache::lucene::search::Query &);
            GroupingSearch(const ::org::apache::lucene::search::grouping::GroupSelector &);
            GroupingSearch(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &);

            GroupingSearch disableCaching() const;
            ::org::apache::lucene::util::Bits getAllGroupHeads() const;
            ::java::util::Collection getAllMatchingGroups() const;
            ::org::apache::lucene::search::grouping::TopGroups search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, jint) const;
            GroupingSearch setAllGroupHeads(jboolean) const;
            GroupingSearch setAllGroups(jboolean) const;
            GroupingSearch setCaching(jint, jboolean) const;
            GroupingSearch setCachingInMB(jdouble, jboolean) const;
            GroupingSearch setGroupDocsLimit(jint) const;
            GroupingSearch setGroupDocsOffset(jint) const;
            GroupingSearch setGroupSort(const ::org::apache::lucene::search::Sort &) const;
            GroupingSearch setIncludeMaxScore(jboolean) const;
            GroupingSearch setSortWithinGroup(const ::org::apache::lucene::search::Sort &) const;
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
          extern PyType_Def PY_TYPE_DEF(GroupingSearch);
          extern PyTypeObject *PY_TYPE(GroupingSearch);

          class t_GroupingSearch {
          public:
            PyObject_HEAD
            GroupingSearch object;
            static PyObject *wrap_Object(const GroupingSearch&);
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
