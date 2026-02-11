#ifndef org_apache_lucene_analysis_Analyzer$TokenStreamComponents_H
#define org_apache_lucene_analysis_Analyzer$TokenStreamComponents_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Tokenizer;
      }
    }
  }
}
namespace java {
  namespace io {
    class Reader;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    namespace function {
      class Consumer;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class Analyzer$TokenStreamComponents : public ::java::lang::Object {
         public:
          enum {
            mid_init$_5264cdb28f1f382a,
            mid_init$_b901dfc20a2f1811,
            mid_init$_d4af3de0ca237cfd,
            mid_getSource_51733cce28f50a4e,
            mid_getTokenStream_5e6c3f11ccc6eb07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer$TokenStreamComponents(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Analyzer$TokenStreamComponents(const Analyzer$TokenStreamComponents& obj) : ::java::lang::Object(obj) {}

          Analyzer$TokenStreamComponents(const ::org::apache::lucene::analysis::Tokenizer &);
          Analyzer$TokenStreamComponents(const ::org::apache::lucene::analysis::Tokenizer &, const ::org::apache::lucene::analysis::TokenStream &);
          Analyzer$TokenStreamComponents(const ::java::util::function::Consumer &, const ::org::apache::lucene::analysis::TokenStream &);

          ::java::util::function::Consumer getSource() const;
          ::org::apache::lucene::analysis::TokenStream getTokenStream() const;
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
        extern PyType_Def PY_TYPE_DEF(Analyzer$TokenStreamComponents);
        extern PyTypeObject *PY_TYPE(Analyzer$TokenStreamComponents);

        class t_Analyzer$TokenStreamComponents {
        public:
          PyObject_HEAD
          Analyzer$TokenStreamComponents object;
          static PyObject *wrap_Object(const Analyzer$TokenStreamComponents&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
