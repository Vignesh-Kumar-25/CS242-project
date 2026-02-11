#ifndef org_apache_lucene_search_TopDocs_H
#define org_apache_lucene_search_TopDocs_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
        class TotalHits;
        class Sort;
        class TopFieldDocs;
        class ScoreDoc;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
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

        class TopDocs : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9dced5d13281ea40,
            mid_merge_5003bbb4ff8a7c4e,
            mid_merge_9c5530beed20f92c,
            mid_merge_af46bfd47fa6cdf6,
            mid_merge_d3e585f472eb24f8,
            mid_merge_0e8303b7f119ef6e,
            mid_merge_31257dc16062eecd,
            max_mid
          };

          enum {
            fid_scoreDocs,
            fid_totalHits,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopDocs(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopDocs(const TopDocs& obj) : ::java::lang::Object(obj) {}

          JArray< ::org::apache::lucene::search::ScoreDoc > _get_scoreDocs() const;
          void _set_scoreDocs(const JArray< ::org::apache::lucene::search::ScoreDoc > &) const;
          ::org::apache::lucene::search::TotalHits _get_totalHits() const;
          void _set_totalHits(const ::org::apache::lucene::search::TotalHits &) const;

          TopDocs(const ::org::apache::lucene::search::TotalHits &, const JArray< ::org::apache::lucene::search::ScoreDoc > &);

          static TopDocs merge(jint, const JArray< TopDocs > &);
          static ::org::apache::lucene::search::TopFieldDocs merge(const ::org::apache::lucene::search::Sort &, jint, const JArray< ::org::apache::lucene::search::TopFieldDocs > &);
          static TopDocs merge(jint, jint, const JArray< TopDocs > &);
          static ::org::apache::lucene::search::TopFieldDocs merge(const ::org::apache::lucene::search::Sort &, jint, jint, const JArray< ::org::apache::lucene::search::TopFieldDocs > &);
          static TopDocs merge(jint, jint, const JArray< TopDocs > &, const ::java::util::Comparator &);
          static ::org::apache::lucene::search::TopFieldDocs merge(const ::org::apache::lucene::search::Sort &, jint, jint, const JArray< ::org::apache::lucene::search::TopFieldDocs > &, const ::java::util::Comparator &);
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
        extern PyType_Def PY_TYPE_DEF(TopDocs);
        extern PyTypeObject *PY_TYPE(TopDocs);

        class t_TopDocs {
        public:
          PyObject_HEAD
          TopDocs object;
          static PyObject *wrap_Object(const TopDocs&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
