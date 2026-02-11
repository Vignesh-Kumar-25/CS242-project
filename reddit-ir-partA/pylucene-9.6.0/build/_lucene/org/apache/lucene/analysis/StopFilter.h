#ifndef org_apache_lucene_analysis_StopFilter_H
#define org_apache_lucene_analysis_StopFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class StopFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
         public:
          enum {
            mid_init$_da2dbf5a8d99714a,
            mid_makeStopSet_334413b89cf53846,
            mid_makeStopSet_c68e6f2fb28606c6,
            mid_makeStopSet_6b25d9c308d4d6f8,
            mid_makeStopSet_8395e707dad68da0,
            mid_accept_ee8b0a5fa521ddac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StopFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StopFilter(const StopFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

          StopFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::CharArraySet &);

          static ::org::apache::lucene::analysis::CharArraySet makeStopSet(const JArray< ::java::lang::String > &);
          static ::org::apache::lucene::analysis::CharArraySet makeStopSet(const ::java::util::List &);
          static ::org::apache::lucene::analysis::CharArraySet makeStopSet(const JArray< ::java::lang::String > &, jboolean);
          static ::org::apache::lucene::analysis::CharArraySet makeStopSet(const ::java::util::List &, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(StopFilter);
        extern PyTypeObject *PY_TYPE(StopFilter);

        class t_StopFilter {
        public:
          PyObject_HEAD
          StopFilter object;
          static PyObject *wrap_Object(const StopFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
