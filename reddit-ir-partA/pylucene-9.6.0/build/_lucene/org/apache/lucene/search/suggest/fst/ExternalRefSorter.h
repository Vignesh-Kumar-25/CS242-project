#ifndef org_apache_lucene_search_suggest_fst_ExternalRefSorter_H
#define org_apache_lucene_search_suggest_fst_ExternalRefSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class OfflineSorter;
      }
      namespace search {
        namespace suggest {
          namespace fst {
            class BytesRefSorter;
            class ExternalRefSorter$ByteSequenceIterator;
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

            class ExternalRefSorter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_6663018eb3dfd4dd,
                mid_add_46caeaebccf31ffe,
                mid_close_3353d9f14bbfd91a,
                mid_getComparator_bfaba219acee2aff,
                mid_iterator_f1ffe747ff407c67,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ExternalRefSorter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ExternalRefSorter(const ExternalRefSorter& obj) : ::java::lang::Object(obj) {}

              ExternalRefSorter(const ::org::apache::lucene::util::OfflineSorter &);

              void add(const ::org::apache::lucene::util::BytesRef &) const;
              void close() const;
              ::java::util::Comparator getComparator() const;
              ::org::apache::lucene::search::suggest::fst::ExternalRefSorter$ByteSequenceIterator iterator() const;
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
            extern PyType_Def PY_TYPE_DEF(ExternalRefSorter);
            extern PyTypeObject *PY_TYPE(ExternalRefSorter);

            class t_ExternalRefSorter {
            public:
              PyObject_HEAD
              ExternalRefSorter object;
              static PyObject *wrap_Object(const ExternalRefSorter&);
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
