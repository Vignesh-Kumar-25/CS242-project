#ifndef org_apache_lucene_search_suggest_InMemorySorter_H
#define org_apache_lucene_search_suggest_InMemorySorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefIterator;
      }
      namespace search {
        namespace suggest {
          namespace fst {
            class BytesRefSorter;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
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

          class InMemorySorter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8c65a0cb749b75d3,
              mid_add_46caeaebccf31ffe,
              mid_getComparator_bfaba219acee2aff,
              mid_iterator_9a5de514656d5195,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InMemorySorter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InMemorySorter(const InMemorySorter& obj) : ::java::lang::Object(obj) {}

            InMemorySorter(const ::java::util::Comparator &);

            void add(const ::org::apache::lucene::util::BytesRef &) const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::util::BytesRefIterator iterator() const;
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
          extern PyType_Def PY_TYPE_DEF(InMemorySorter);
          extern PyTypeObject *PY_TYPE(InMemorySorter);

          class t_InMemorySorter {
          public:
            PyObject_HEAD
            InMemorySorter object;
            static PyObject *wrap_Object(const InMemorySorter&);
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
