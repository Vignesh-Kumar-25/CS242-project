#ifndef org_apache_lucene_util_packed_AbstractBlockPackedWriter_H
#define org_apache_lucene_util_packed_AbstractBlockPackedWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class AbstractBlockPackedWriter : public ::java::lang::Object {
           public:
            enum {
              mid_add_db2028ac45cd5b77,
              mid_finish_3353d9f14bbfd91a,
              mid_ord_058f5911dcf5d8a4,
              mid_reset_ce69639f5ca08f3c,
              mid_writeValues_da425451c8de636b,
              mid_flush_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractBlockPackedWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractBlockPackedWriter(const AbstractBlockPackedWriter& obj) : ::java::lang::Object(obj) {}

            void add(jlong) const;
            void finish() const;
            jlong ord() const;
            void reset(const ::org::apache::lucene::store::DataOutput &) const;
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
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(AbstractBlockPackedWriter);
          extern PyTypeObject *PY_TYPE(AbstractBlockPackedWriter);

          class t_AbstractBlockPackedWriter {
          public:
            PyObject_HEAD
            AbstractBlockPackedWriter object;
            static PyObject *wrap_Object(const AbstractBlockPackedWriter&);
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
