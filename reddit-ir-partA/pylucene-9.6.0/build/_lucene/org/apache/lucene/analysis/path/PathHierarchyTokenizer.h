#ifndef org_apache_lucene_analysis_path_PathHierarchyTokenizer_H
#define org_apache_lucene_analysis_path_PathHierarchyTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
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

          class PathHierarchyTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_da425451c8de636b,
              mid_init$_6565801356227235,
              mid_init$_5219ca4e678668cb,
              mid_init$_3b311cd45f1198b5,
              mid_init$_d0894e14e1e9321a,
              mid_init$_09d1a63ce317ea67,
              mid_init$_e51850dcc911eaca,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PathHierarchyTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PathHierarchyTokenizer(const PathHierarchyTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jchar DEFAULT_DELIMITER;
            static jint DEFAULT_SKIP;

            PathHierarchyTokenizer();
            PathHierarchyTokenizer(jint);
            PathHierarchyTokenizer(jchar, jchar);
            PathHierarchyTokenizer(jint, jchar);
            PathHierarchyTokenizer(jchar, jchar, jint);
            PathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jchar, jchar, jint);
            PathHierarchyTokenizer(jint, jchar, jchar, jint);
            PathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint, jchar, jchar, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
          extern PyType_Def PY_TYPE_DEF(PathHierarchyTokenizer);
          extern PyTypeObject *PY_TYPE(PathHierarchyTokenizer);

          class t_PathHierarchyTokenizer {
          public:
            PyObject_HEAD
            PathHierarchyTokenizer object;
            static PyObject *wrap_Object(const PathHierarchyTokenizer&);
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
