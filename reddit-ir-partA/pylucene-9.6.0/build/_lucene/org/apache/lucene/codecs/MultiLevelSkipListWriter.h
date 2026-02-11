#ifndef org_apache_lucene_codecs_MultiLevelSkipListWriter_H
#define org_apache_lucene_codecs_MultiLevelSkipListWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
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
      namespace codecs {

        class MultiLevelSkipListWriter : public ::java::lang::Object {
         public:
          enum {
            mid_bufferSkip_da425451c8de636b,
            mid_writeSkip_4fa7ed5a5989fc4c,
            mid_resetSkip_3353d9f14bbfd91a,
            mid_writeChildPointer_54abffada56ffdbe,
            mid_writeSkipData_6ff32795c437541e,
            mid_writeLevelLength_ddad7d85cd12bbdf,
            mid_init_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLevelSkipListWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLevelSkipListWriter(const MultiLevelSkipListWriter& obj) : ::java::lang::Object(obj) {}

          void bufferSkip(jint) const;
          jlong writeSkip(const ::org::apache::lucene::store::IndexOutput &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(MultiLevelSkipListWriter);
        extern PyTypeObject *PY_TYPE(MultiLevelSkipListWriter);

        class t_MultiLevelSkipListWriter {
        public:
          PyObject_HEAD
          MultiLevelSkipListWriter object;
          static PyObject *wrap_Object(const MultiLevelSkipListWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
