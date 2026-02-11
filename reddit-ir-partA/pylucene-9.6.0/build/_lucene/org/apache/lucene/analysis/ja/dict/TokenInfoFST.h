#ifndef org_apache_lucene_analysis_ja_dict_TokenInfoFST_H
#define org_apache_lucene_analysis_ja_dict_TokenInfoFST_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FST;
          class FST$Arc;
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
    class Long;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {

            class TokenInfoFST : public ::java::lang::Object {
             public:
              enum {
                mid_init$_2c4c73dd970863ff,
                mid_findTargetArc_371da5b2117c39de,
                mid_getBytesReader_82f2a67854cb5354,
                mid_getFirstArc_4ad9864c4e02057b,
                max_mid
              };

              enum {
                fid_NO_OUTPUT,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TokenInfoFST(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TokenInfoFST(const TokenInfoFST& obj) : ::java::lang::Object(obj) {}

              ::java::lang::Long _get_NO_OUTPUT() const;

              TokenInfoFST(const ::org::apache::lucene::util::fst::FST &, jboolean);

              ::org::apache::lucene::util::fst::FST$Arc findTargetArc(jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, jboolean, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
              ::org::apache::lucene::util::fst::FST$BytesReader getBytesReader() const;
              ::org::apache::lucene::util::fst::FST$Arc getFirstArc(const ::org::apache::lucene::util::fst::FST$Arc &) const;
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
      namespace analysis {
        namespace ja {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(TokenInfoFST);
            extern PyTypeObject *PY_TYPE(TokenInfoFST);

            class t_TokenInfoFST {
            public:
              PyObject_HEAD
              TokenInfoFST object;
              static PyObject *wrap_Object(const TokenInfoFST&);
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
