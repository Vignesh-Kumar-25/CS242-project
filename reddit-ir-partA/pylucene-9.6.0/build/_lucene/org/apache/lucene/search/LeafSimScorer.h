#ifndef org_apache_lucene_search_LeafSimScorer_H
#define org_apache_lucene_search_LeafSimScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        namespace similarities {
          class Similarity$SimScorer;
        }
      }
      namespace index {
        class LeafReader;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LeafSimScorer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_561fcdb891b06097,
            mid_explain_433078f151c5c310,
            mid_getSimScorer_43c363d20ef8bb22,
            mid_score_0599bb40e455e64c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafSimScorer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafSimScorer(const LeafSimScorer& obj) : ::java::lang::Object(obj) {}

          LeafSimScorer(const ::org::apache::lucene::search::similarities::Similarity$SimScorer &, const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &, jboolean);

          ::org::apache::lucene::search::Explanation explain(jint, const ::org::apache::lucene::search::Explanation &) const;
          ::org::apache::lucene::search::similarities::Similarity$SimScorer getSimScorer() const;
          jfloat score(jint, jfloat) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(LeafSimScorer);
        extern PyTypeObject *PY_TYPE(LeafSimScorer);

        class t_LeafSimScorer {
        public:
          PyObject_HEAD
          LeafSimScorer object;
          static PyObject *wrap_Object(const LeafSimScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
