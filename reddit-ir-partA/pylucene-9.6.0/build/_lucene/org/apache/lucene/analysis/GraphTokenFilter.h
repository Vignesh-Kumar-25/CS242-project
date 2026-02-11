#ifndef org_apache_lucene_analysis_GraphTokenFilter_H
#define org_apache_lucene_analysis_GraphTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
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
      namespace analysis {

        class GraphTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
         public:
          enum {
            mid_init$_ceb0c1d5a3508f22,
            mid_end_3353d9f14bbfd91a,
            mid_getTrailingPositions_15aa3d485e96b665,
            mid_reset_3353d9f14bbfd91a,
            mid_incrementGraph_ee8b0a5fa521ddac,
            mid_incrementBaseToken_ee8b0a5fa521ddac,
            mid_incrementGraphToken_ee8b0a5fa521ddac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GraphTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GraphTokenFilter(const GraphTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          static jint MAX_GRAPH_STACK_SIZE;
          static jint MAX_TOKEN_CACHE_SIZE;

          GraphTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          void end() const;
          jint getTrailingPositions() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(GraphTokenFilter);
        extern PyTypeObject *PY_TYPE(GraphTokenFilter);

        class t_GraphTokenFilter {
        public:
          PyObject_HEAD
          GraphTokenFilter object;
          static PyObject *wrap_Object(const GraphTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
