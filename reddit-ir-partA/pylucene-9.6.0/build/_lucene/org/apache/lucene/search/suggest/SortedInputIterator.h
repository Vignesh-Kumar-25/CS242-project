#ifndef org_apache_lucene_search_suggest_SortedInputIterator_H
#define org_apache_lucene_search_suggest_SortedInputIterator_H

#include "java/lang/Object.h"

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
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
    class Set;
  }
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
        namespace suggest {

          class SortedInputIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_141d02fbaee5b1ac,
              mid_init$_72fec9b3e1f94485,
              mid_contexts_9a625d56b67c7390,
              mid_hasContexts_ee8b0a5fa521ddac,
              mid_hasPayloads_ee8b0a5fa521ddac,
              mid_next_e6961a1ebae5a29a,
              mid_payload_e6961a1ebae5a29a,
              mid_weight_058f5911dcf5d8a4,
              mid_decodeContexts_673718f1dd4bf6e7,
              mid_decodePayload_183e1d247035bb6b,
              mid_decode_9d60b0aaa19f8791,
              mid_encode_a1b106b95f1cb885,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedInputIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedInputIterator(const SortedInputIterator& obj) : ::java::lang::Object(obj) {}

            SortedInputIterator(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::search::suggest::InputIterator &);
            SortedInputIterator(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::search::suggest::InputIterator &, const ::java::util::Comparator &);

            ::java::util::Set contexts() const;
            jboolean hasContexts() const;
            jboolean hasPayloads() const;
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
          extern PyType_Def PY_TYPE_DEF(SortedInputIterator);
          extern PyTypeObject *PY_TYPE(SortedInputIterator);

          class t_SortedInputIterator {
          public:
            PyObject_HEAD
            SortedInputIterator object;
            static PyObject *wrap_Object(const SortedInputIterator&);
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
