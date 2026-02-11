#ifndef org_apache_lucene_codecs_TermVectorsWriter_H
#define org_apache_lucene_codecs_TermVectorsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace util {
        class BytesRef;
        class Accountable;
      }
      namespace store {
        class DataInput;
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
      namespace codecs {

        class TermVectorsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_addPosition_d3947c237d612dbc,
            mid_addProx_f7cf99f3cd78623e,
            mid_close_3353d9f14bbfd91a,
            mid_finish_da425451c8de636b,
            mid_finishDocument_3353d9f14bbfd91a,
            mid_finishField_3353d9f14bbfd91a,
            mid_finishTerm_3353d9f14bbfd91a,
            mid_merge_acf7515d140161a5,
            mid_startDocument_da425451c8de636b,
            mid_startField_c6c47d9ddd2490dd,
            mid_startTerm_77db1b29bc525299,
            mid_addAllDocVectors_c7836d8a83618bbe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermVectorsWriter(const TermVectorsWriter& obj) : ::java::lang::Object(obj) {}

          void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
          void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
          void close() const;
          void finish(jint) const;
          void finishDocument() const;
          void finishField() const;
          void finishTerm() const;
          jint merge(const ::org::apache::lucene::index::MergeState &) const;
          void startDocument(jint) const;
          void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
          void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(TermVectorsWriter);
        extern PyTypeObject *PY_TYPE(TermVectorsWriter);

        class t_TermVectorsWriter {
        public:
          PyObject_HEAD
          TermVectorsWriter object;
          static PyObject *wrap_Object(const TermVectorsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
