#ifndef org_apache_lucene_search_suggest_InputIterator_H
#define org_apache_lucene_search_suggest_InputIterator_H

#include "org/apache/lucene/util/BytesRefIterator.h"

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

          class InputIterator : public ::org::apache::lucene::util::BytesRefIterator {
           public:
            enum {
              mid_contexts_9a625d56b67c7390,
              mid_hasContexts_ee8b0a5fa521ddac,
              mid_hasPayloads_ee8b0a5fa521ddac,
              mid_payload_e6961a1ebae5a29a,
              mid_weight_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InputIterator(jobject obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InputIterator(const InputIterator& obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {}

            static InputIterator *EMPTY;

            ::java::util::Set contexts() const;
            jboolean hasContexts() const;
            jboolean hasPayloads() const;
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
          extern PyType_Def PY_TYPE_DEF(InputIterator);
          extern PyTypeObject *PY_TYPE(InputIterator);

          class t_InputIterator {
          public:
            PyObject_HEAD
            InputIterator object;
            static PyObject *wrap_Object(const InputIterator&);
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
