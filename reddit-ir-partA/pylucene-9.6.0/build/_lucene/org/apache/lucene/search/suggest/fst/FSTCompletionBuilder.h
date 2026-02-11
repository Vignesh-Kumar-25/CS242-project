#ifndef org_apache_lucene_search_suggest_fst_FSTCompletionBuilder_H
#define org_apache_lucene_search_suggest_fst_FSTCompletionBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          namespace fst {
            class BytesRefSorter;
            class FSTCompletion;
          }
        }
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
      namespace search {
        namespace suggest {
          namespace fst {

            class FSTCompletionBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_7e92d72086f54742,
                mid_add_77db1b29bc525299,
                mid_build_ea8c043019e09d03,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletionBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletionBuilder(const FSTCompletionBuilder& obj) : ::java::lang::Object(obj) {}

              static jint DEFAULT_BUCKETS;

              FSTCompletionBuilder();
              FSTCompletionBuilder(jint, const ::org::apache::lucene::search::suggest::fst::BytesRefSorter &, jint);

              void add(const ::org::apache::lucene::util::BytesRef &, jint) const;
              ::org::apache::lucene::search::suggest::fst::FSTCompletion build() const;
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
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(FSTCompletionBuilder);
            extern PyTypeObject *PY_TYPE(FSTCompletionBuilder);

            class t_FSTCompletionBuilder {
            public:
              PyObject_HEAD
              FSTCompletionBuilder object;
              static PyObject *wrap_Object(const FSTCompletionBuilder&);
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
