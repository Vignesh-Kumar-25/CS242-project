#ifndef org_apache_pylucene_search_similarities_PythonClassicSimilarity_H
#define org_apache_pylucene_search_similarities_PythonClassicSimilarity_H

#include "org/apache/lucene/search/similarities/ClassicSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class TermStatistics;
        class CollectionStatistics;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {

          class PythonClassicSimilarity : public ::org::apache::lucene::search::similarities::ClassicSimilarity {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_finalize_3353d9f14bbfd91a,
              mid_idf_8eedd45047b439d2,
              mid_idfExplain_b2abcbbf8d7a9bf0,
              mid_lengthNorm_cc3c9b7e666e88d5,
              mid_pythonDecRef_3353d9f14bbfd91a,
              mid_pythonExtension_058f5911dcf5d8a4,
              mid_pythonExtension_db2028ac45cd5b77,
              mid_tf_0d6098a24f544e47,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonClassicSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonClassicSimilarity(const PythonClassicSimilarity& obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {}

            PythonClassicSimilarity();

            void finalize() const;
            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat lengthNorm(jint) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            jfloat tf(jfloat) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(PythonClassicSimilarity);
          extern PyTypeObject *PY_TYPE(PythonClassicSimilarity);

          class t_PythonClassicSimilarity {
          public:
            PyObject_HEAD
            PythonClassicSimilarity object;
            static PyObject *wrap_Object(const PythonClassicSimilarity&);
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
