#ifndef org_apache_lucene_codecs_MultiLevelSkipListReader_H
#define org_apache_lucene_codecs_MultiLevelSkipListReader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
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

        class MultiLevelSkipListReader : public ::java::lang::Object {
         public:
          enum {
            mid_close_3353d9f14bbfd91a,
            mid_getDoc_15aa3d485e96b665,
            mid_init_6dbbaef8380ec710,
            mid_skipTo_58b165b57740feff,
            mid_readLevelLength_ceb60bad4b6c0339,
            mid_readChildPointer_ceb60bad4b6c0339,
            mid_seekChild_da425451c8de636b,
            mid_setLastSkipData_da425451c8de636b,
            mid_readSkipData_29983846bb9e513b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLevelSkipListReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLevelSkipListReader(const MultiLevelSkipListReader& obj) : ::java::lang::Object(obj) {}

          void close() const;
          jint getDoc() const;
          void init(jlong, jint) const;
          jint skipTo(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiLevelSkipListReader);
        extern PyTypeObject *PY_TYPE(MultiLevelSkipListReader);

        class t_MultiLevelSkipListReader {
        public:
          PyObject_HEAD
          MultiLevelSkipListReader object;
          static PyObject *wrap_Object(const MultiLevelSkipListReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
