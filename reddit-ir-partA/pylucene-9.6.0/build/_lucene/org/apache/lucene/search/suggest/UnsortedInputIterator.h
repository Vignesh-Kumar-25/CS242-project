#ifndef org_apache_lucene_search_suggest_UnsortedInputIterator_H
#define org_apache_lucene_search_suggest_UnsortedInputIterator_H

#include "org/apache/lucene/search/suggest/BufferedInputIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class UnsortedInputIterator : public ::org::apache::lucene::search::suggest::BufferedInputIterator {
           public:
            enum {
              mid_init$_cb569720b2738e4b,
              mid_contexts_9a625d56b67c7390,
              mid_next_e6961a1ebae5a29a,
              mid_payload_e6961a1ebae5a29a,
              mid_weight_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnsortedInputIterator(jobject obj) : ::org::apache::lucene::search::suggest::BufferedInputIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnsortedInputIterator(const UnsortedInputIterator& obj) : ::org::apache::lucene::search::suggest::BufferedInputIterator(obj) {}

            UnsortedInputIterator(const ::org::apache::lucene::search::suggest::InputIterator &);

            ::java::util::Set contexts() const;
            ::org::apache::lucene::util::BytesRef next() const;
            ::org::apache::lucene::util::BytesRef payload() const;
            jlong weight() const;
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
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(UnsortedInputIterator);
          extern PyTypeObject *PY_TYPE(UnsortedInputIterator);

          class t_UnsortedInputIterator {
          public:
            PyObject_HEAD
            UnsortedInputIterator object;
            static PyObject *wrap_Object(const UnsortedInputIterator&);
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
