#ifndef org_apache_lucene_search_join_SeekingTermSetTermsEnum_H
#define org_apache_lucene_search_join_SeekingTermSetTermsEnum_H

#include "org/apache/lucene/index/FilteredTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefHash;
      }
      namespace index {
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class SeekingTermSetTermsEnum : public ::org::apache::lucene::index::FilteredTermsEnum {
           public:
            enum {
              mid_init$_7ba5b726dc8e21c6,
              mid_nextSeekTerm_0231fd9dce4d8773,
              mid_accept_6a86568f3717fe46,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SeekingTermSetTermsEnum(jobject obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SeekingTermSetTermsEnum(const SeekingTermSetTermsEnum& obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {}

            SeekingTermSetTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::BytesRefHash &, const JArray< jint > &);
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
      namespace search {
        namespace join {
          extern PyType_Def PY_TYPE_DEF(SeekingTermSetTermsEnum);
          extern PyTypeObject *PY_TYPE(SeekingTermSetTermsEnum);

          class t_SeekingTermSetTermsEnum {
          public:
            PyObject_HEAD
            SeekingTermSetTermsEnum object;
            static PyObject *wrap_Object(const SeekingTermSetTermsEnum&);
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
