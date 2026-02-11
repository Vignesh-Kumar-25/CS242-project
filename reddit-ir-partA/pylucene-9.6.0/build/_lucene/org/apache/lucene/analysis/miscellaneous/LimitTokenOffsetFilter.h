#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenOffsetFilter_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenOffsetFilter_H

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
        namespace miscellaneous {

          class LimitTokenOffsetFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_f6bdf5faaee8b1ed,
              mid_init$_63dd9eeecc92c47c,
              mid_incrementToken_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenOffsetFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitTokenOffsetFilter(const LimitTokenOffsetFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            LimitTokenOffsetFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            LimitTokenOffsetFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jboolean);

            jboolean incrementToken() const;
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
      namespace analysis {
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(LimitTokenOffsetFilter);
          extern PyTypeObject *PY_TYPE(LimitTokenOffsetFilter);

          class t_LimitTokenOffsetFilter {
          public:
            PyObject_HEAD
            LimitTokenOffsetFilter object;
            static PyObject *wrap_Object(const LimitTokenOffsetFilter&);
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
