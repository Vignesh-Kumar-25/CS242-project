#ifndef org_apache_lucene_misc_index_IndexRearranger_H
#define org_apache_lucene_misc_index_IndexRearranger_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Exception;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriterConfig;
      }
      namespace store {
        class Directory;
      }
      namespace misc {
        namespace index {
          class IndexRearranger$DocumentSelector;
        }
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

          class IndexRearranger : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2bd43cd0544e05ca,
              mid_execute_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexRearranger(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexRearranger(const IndexRearranger& obj) : ::java::lang::Object(obj) {}

            IndexRearranger(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &, const ::java::util::List &);

            void execute() const;
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
          extern PyType_Def PY_TYPE_DEF(IndexRearranger);
          extern PyTypeObject *PY_TYPE(IndexRearranger);

          class t_IndexRearranger {
          public:
            PyObject_HEAD
            IndexRearranger object;
            static PyObject *wrap_Object(const IndexRearranger&);
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
