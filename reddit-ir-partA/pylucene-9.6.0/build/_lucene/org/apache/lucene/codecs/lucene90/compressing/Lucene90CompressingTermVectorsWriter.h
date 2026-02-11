#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsWriter_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

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
  namespace util {
    class Collection;
  }
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
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingTermVectorsWriter : public ::org::apache::lucene::codecs::TermVectorsWriter {
             public:
              enum {
                mid_addPosition_d3947c237d612dbc,
                mid_addProx_f7cf99f3cd78623e,
                mid_close_3353d9f14bbfd91a,
                mid_finish_da425451c8de636b,
                mid_finishDocument_3353d9f14bbfd91a,
                mid_finishField_3353d9f14bbfd91a,
                mid_getChildResources_b47b7eaa8124fb60,
                mid_merge_acf7515d140161a5,
                mid_ramBytesUsed_058f5911dcf5d8a4,
                mid_startDocument_da425451c8de636b,
                mid_startField_c6c47d9ddd2490dd,
                mid_startTerm_77db1b29bc525299,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingTermVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingTermVectorsWriter(const Lucene90CompressingTermVectorsWriter& obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {}

              void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
              void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
              void close() const;
              void finish(jint) const;
              void finishDocument() const;
              void finishField() const;
              ::java::util::Collection getChildResources() const;
              jint merge(const ::org::apache::lucene::index::MergeState &) const;
              jlong ramBytesUsed() const;
              void startDocument(jint) const;
              void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
              void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
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
      namespace codecs {
        namespace lucene90 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingTermVectorsWriter);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingTermVectorsWriter);

            class t_Lucene90CompressingTermVectorsWriter {
            public:
              PyObject_HEAD
              Lucene90CompressingTermVectorsWriter object;
              static PyObject *wrap_Object(const Lucene90CompressingTermVectorsWriter&);
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
