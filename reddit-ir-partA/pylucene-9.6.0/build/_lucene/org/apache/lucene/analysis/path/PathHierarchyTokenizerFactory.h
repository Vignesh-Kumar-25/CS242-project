#ifndef org_apache_lucene_analysis_path_PathHierarchyTokenizerFactory_H
#define org_apache_lucene_analysis_path_PathHierarchyTokenizerFactory_H

#include "org/apache/lucene/analysis/TokenizerFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        class Tokenizer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace path {

          class PathHierarchyTokenizerFactory : public ::org::apache::lucene::analysis::TokenizerFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_create_ec4a83b603ca69bd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PathHierarchyTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PathHierarchyTokenizerFactory(const PathHierarchyTokenizerFactory& obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            PathHierarchyTokenizerFactory();
            PathHierarchyTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::Tokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace path {
          extern PyType_Def PY_TYPE_DEF(PathHierarchyTokenizerFactory);
          extern PyTypeObject *PY_TYPE(PathHierarchyTokenizerFactory);

          class t_PathHierarchyTokenizerFactory {
          public:
            PyObject_HEAD
            PathHierarchyTokenizerFactory object;
            static PyObject *wrap_Object(const PathHierarchyTokenizerFactory&);
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
