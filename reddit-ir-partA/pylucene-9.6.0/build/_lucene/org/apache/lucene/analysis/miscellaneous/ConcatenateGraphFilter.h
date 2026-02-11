#ifndef org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter_H
#define org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Character;
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

          class ConcatenateGraphFilter : public ::org::apache::lucene::analysis::TokenStream {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_init$_fa43c4676bdb4ee5,
              mid_init$_f13b7c9a366fc587,
              mid_close_3353d9f14bbfd91a,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              mid_toAutomaton_944878750d69867f,
              mid_toAutomaton_e64eec23cb14c3bd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcatenateGraphFilter(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcatenateGraphFilter(const ConcatenateGraphFilter& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            static jint DEFAULT_MAX_GRAPH_EXPANSIONS;
            static jboolean DEFAULT_PRESERVE_POSITION_INCREMENTS;
            static jboolean DEFAULT_PRESERVE_SEP;
            static ::java::lang::Character *DEFAULT_TOKEN_SEPARATOR;
            static jint SEP_LABEL;

            ConcatenateGraphFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ConcatenateGraphFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::Character &, jboolean, jint);
            ConcatenateGraphFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean, jboolean, jint);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(ConcatenateGraphFilter);
          extern PyTypeObject *PY_TYPE(ConcatenateGraphFilter);

          class t_ConcatenateGraphFilter {
          public:
            PyObject_HEAD
            ConcatenateGraphFilter object;
            static PyObject *wrap_Object(const ConcatenateGraphFilter&);
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
