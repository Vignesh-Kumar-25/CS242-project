#ifndef org_apache_lucene_search_suggest_document_CompletionTokenStream_H
#define org_apache_lucene_search_suggest_document_CompletionTokenStream_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
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
        namespace suggest {
          namespace document {

            class CompletionTokenStream : public ::org::apache::lucene::analysis::TokenFilter {
             public:
              enum {
                mid_incrementToken_ee8b0a5fa521ddac,
                mid_setPayload_46caeaebccf31ffe,
                mid_toAutomaton_944878750d69867f,
                mid_toAutomaton_e64eec23cb14c3bd,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionTokenStream(const CompletionTokenStream& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

              jboolean incrementToken() const;
              void setPayload(const ::org::apache::lucene::util::BytesRef &) const;
              ::org::apache::lucene::util::automaton::Automaton toAutomaton() const;
              ::org::apache::lucene::util::automaton::Automaton toAutomaton(jboolean) const;
            };
          }
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
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionTokenStream);
            extern PyTypeObject *PY_TYPE(CompletionTokenStream);

            class t_CompletionTokenStream {
            public:
              PyObject_HEAD
              CompletionTokenStream object;
              static PyObject *wrap_Object(const CompletionTokenStream&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
