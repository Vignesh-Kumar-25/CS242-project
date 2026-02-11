#ifndef org_apache_lucene_misc_index_BinaryDocValueSelector_H
#define org_apache_lucene_misc_index_BinaryDocValueSelector_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class HashSet;
  }
  namespace io {
    class Serializable;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {
          class IndexRearranger$DocumentSelector;
        }
      }
      namespace index {
        class CodecReader;
      }
      namespace store {
        class Directory;
      }
      namespace util {
        class BitSet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {

          class BinaryDocValueSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_aaaaad69707c1917,
              mid_createFromExistingIndex_fa381508c2272f5c,
              mid_getFilteredLiveDocs_e9f5e9328c16755e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BinaryDocValueSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BinaryDocValueSelector(const BinaryDocValueSelector& obj) : ::java::lang::Object(obj) {}

            BinaryDocValueSelector(const ::java::lang::String &, const ::java::util::HashSet &);

            static ::java::util::List createFromExistingIndex(const ::java::lang::String &, const ::org::apache::lucene::store::Directory &);
            ::org::apache::lucene::util::BitSet getFilteredLiveDocs(const ::org::apache::lucene::index::CodecReader &) const;
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
      namespace misc {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(BinaryDocValueSelector);
          extern PyTypeObject *PY_TYPE(BinaryDocValueSelector);

          class t_BinaryDocValueSelector {
          public:
            PyObject_HEAD
            BinaryDocValueSelector object;
            static PyObject *wrap_Object(const BinaryDocValueSelector&);
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
