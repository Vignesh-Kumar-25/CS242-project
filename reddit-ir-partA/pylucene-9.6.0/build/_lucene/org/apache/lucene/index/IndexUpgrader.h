#ifndef org_apache_lucene_index_IndexUpgrader_H
#define org_apache_lucene_index_IndexUpgrader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriterConfig;
      }
      namespace util {
        class InfoStream;
      }
      namespace store {
        class Directory;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexUpgrader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_31453c15367f1d64,
            mid_init$_a6800a4895f884ca,
            mid_init$_1794ab4774248d19,
            mid_main_a43828b01cd19e9d,
            mid_upgrade_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexUpgrader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexUpgrader(const IndexUpgrader& obj) : ::java::lang::Object(obj) {}

          IndexUpgrader(const ::org::apache::lucene::store::Directory &);
          IndexUpgrader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &, jboolean);
          IndexUpgrader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::util::InfoStream &, jboolean);

          static void main(const JArray< ::java::lang::String > &);
          void upgrade() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexUpgrader);
        extern PyTypeObject *PY_TYPE(IndexUpgrader);

        class t_IndexUpgrader {
        public:
          PyObject_HEAD
          IndexUpgrader object;
          static PyObject *wrap_Object(const IndexUpgrader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
