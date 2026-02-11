#ifndef org_apache_lucene_search_suggest_fst_ExternalRefSorter$ByteSequenceIterator_H
#define org_apache_lucene_search_suggest_fst_ExternalRefSorter$ByteSequenceIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefIterator;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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
          namespace fst {

            class ExternalRefSorter$ByteSequenceIterator : public ::java::lang::Object {
             public:
              enum {
                mid_close_3353d9f14bbfd91a,
                mid_next_e6961a1ebae5a29a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ExternalRefSorter$ByteSequenceIterator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ExternalRefSorter$ByteSequenceIterator(const ExternalRefSorter$ByteSequenceIterator& obj) : ::java::lang::Object(obj) {}

              void close() const;
              ::org::apache::lucene::util::BytesRef next() const;
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
            extern PyType_Def PY_TYPE_DEF(ExternalRefSorter$ByteSequenceIterator);
            extern PyTypeObject *PY_TYPE(ExternalRefSorter$ByteSequenceIterator);

            class t_ExternalRefSorter$ByteSequenceIterator {
            public:
              PyObject_HEAD
              ExternalRefSorter$ByteSequenceIterator object;
              static PyObject *wrap_Object(const ExternalRefSorter$ByteSequenceIterator&);
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
