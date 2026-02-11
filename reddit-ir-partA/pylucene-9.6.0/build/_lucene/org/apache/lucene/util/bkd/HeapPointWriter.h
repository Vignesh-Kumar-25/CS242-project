#ifndef org_apache_lucene_util_bkd_HeapPointWriter_H
#define org_apache_lucene_util_bkd_HeapPointWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointValue;
          class PointReader;
          class PointWriter;
          class BKDConfig;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class HeapPointWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff582fbbaf3d23ca,
              mid_append_c9becebe13d79fb8,
              mid_append_316a601689372d68,
              mid_close_3353d9f14bbfd91a,
              mid_computeCardinality_71dc130e9f1c9b5d,
              mid_count_058f5911dcf5d8a4,
              mid_destroy_3353d9f14bbfd91a,
              mid_getPackedValueSlice_f510acc7276eee99,
              mid_getReader_6ab62ca19d5b74d1,
              mid_swap_078cef180abf5351,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_block,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HeapPointWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HeapPointWriter(const HeapPointWriter& obj) : ::java::lang::Object(obj) {}

            JArray< jbyte > _get_block() const;

            HeapPointWriter(const ::org::apache::lucene::util::bkd::BKDConfig &, jint);

            void append(const ::org::apache::lucene::util::bkd::PointValue &) const;
            void append(const JArray< jbyte > &, jint) const;
            void close() const;
            jint computeCardinality(jint, jint, const JArray< jint > &) const;
            jlong count() const;
            void destroy() const;
            ::org::apache::lucene::util::bkd::PointValue getPackedValueSlice(jint) const;
            ::org::apache::lucene::util::bkd::PointReader getReader(jlong, jlong) const;
            void swap(jint, jint) const;
            ::java::lang::String toString() const;
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
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(HeapPointWriter);
          extern PyTypeObject *PY_TYPE(HeapPointWriter);

          class t_HeapPointWriter {
          public:
            PyObject_HEAD
            HeapPointWriter object;
            static PyObject *wrap_Object(const HeapPointWriter&);
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
