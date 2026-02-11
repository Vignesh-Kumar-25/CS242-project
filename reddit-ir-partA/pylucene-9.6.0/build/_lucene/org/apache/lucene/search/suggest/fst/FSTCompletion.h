#ifndef org_apache_lucene_search_suggest_fst_FSTCompletion_H
#define org_apache_lucene_search_suggest_fst_FSTCompletion_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {
            class FSTCompletion$Completion;
          }
        }
      }
      namespace util {
        namespace fst {
          class FST;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class FSTCompletion : public ::java::lang::Object {
             public:
              enum {
                mid_init$_cd5d6de82c7b0383,
                mid_init$_81a12c906b0738ea,
                mid_getBucket_33bdafe46a16e48b,
                mid_getBucketCount_15aa3d485e96b665,
                mid_getFST_3f23d2c37a2ec57e,
                mid_lookup_16d5caa7afd11423,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletion(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletion(const FSTCompletion& obj) : ::java::lang::Object(obj) {}

              static jint DEFAULT_BUCKETS;

              FSTCompletion(const ::org::apache::lucene::util::fst::FST &);
              FSTCompletion(const ::org::apache::lucene::util::fst::FST &, jboolean, jboolean);

              jint getBucket(const ::java::lang::CharSequence &) const;
              jint getBucketCount() const;
              ::org::apache::lucene::util::fst::FST getFST() const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(FSTCompletion);
            extern PyTypeObject *PY_TYPE(FSTCompletion);

            class t_FSTCompletion {
            public:
              PyObject_HEAD
              FSTCompletion object;
              static PyObject *wrap_Object(const FSTCompletion&);
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
