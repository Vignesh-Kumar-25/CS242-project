#ifndef org_apache_lucene_util_graph_GraphTokenStreamFiniteStrings_H
#define org_apache_lucene_util_graph_GraphTokenStreamFiniteStrings_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
      namespace index {
        class Term;
      }
      namespace util {
        class AttributeSource;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace graph {

          class GraphTokenStreamFiniteStrings : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_articulationPoints_7880494ffe2d4089,
              mid_getFiniteStrings_7c74834ad8788f5d,
              mid_getFiniteStrings_cc7b2c7b8545afde,
              mid_getTerms_eec93c559a36079a,
              mid_getTerms_37234195dd38379e,
              mid_hasSidePath_92eccba87b045bbc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GraphTokenStreamFiniteStrings(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GraphTokenStreamFiniteStrings(const GraphTokenStreamFiniteStrings& obj) : ::java::lang::Object(obj) {}

            GraphTokenStreamFiniteStrings(const ::org::apache::lucene::analysis::TokenStream &);

            JArray< jint > articulationPoints() const;
            ::java::util::Iterator getFiniteStrings() const;
            ::java::util::Iterator getFiniteStrings(jint, jint) const;
            ::java::util::List getTerms(jint) const;
            JArray< ::org::apache::lucene::index::Term > getTerms(const ::java::lang::String &, jint) const;
            jboolean hasSidePath(jint) const;
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
      namespace util {
        namespace graph {
          extern PyType_Def PY_TYPE_DEF(GraphTokenStreamFiniteStrings);
          extern PyTypeObject *PY_TYPE(GraphTokenStreamFiniteStrings);

          class t_GraphTokenStreamFiniteStrings {
          public:
            PyObject_HEAD
            GraphTokenStreamFiniteStrings object;
            static PyObject *wrap_Object(const GraphTokenStreamFiniteStrings&);
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
