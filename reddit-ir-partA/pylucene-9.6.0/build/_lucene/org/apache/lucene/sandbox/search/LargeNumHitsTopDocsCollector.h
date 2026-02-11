#ifndef org_apache_lucene_sandbox_search_LargeNumHitsTopDocsCollector_H
#define org_apache_lucene_sandbox_search_LargeNumHitsTopDocsCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class TopDocs;
        class Collector;
        class ScoreMode;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class LargeNumHitsTopDocsCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_da425451c8de636b,
              mid_getLeafCollector_dcdb54a62a154134,
              mid_scoreMode_2c1f1f28428089a8,
              mid_topDocs_6c917e77a514047c,
              mid_topDocs_fb8a191b9638db57,
              mid_populateResults_6b5c097e929076d0,
              mid_newTopDocs_8be2a1aba571ba1b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LargeNumHitsTopDocsCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LargeNumHitsTopDocsCollector(const LargeNumHitsTopDocsCollector& obj) : ::java::lang::Object(obj) {}

            LargeNumHitsTopDocsCollector(jint);

            ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            ::org::apache::lucene::search::TopDocs topDocs() const;
            ::org::apache::lucene::search::TopDocs topDocs(jint) const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(LargeNumHitsTopDocsCollector);
          extern PyTypeObject *PY_TYPE(LargeNumHitsTopDocsCollector);

          class t_LargeNumHitsTopDocsCollector {
          public:
            PyObject_HEAD
            LargeNumHitsTopDocsCollector object;
            static PyObject *wrap_Object(const LargeNumHitsTopDocsCollector&);
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
