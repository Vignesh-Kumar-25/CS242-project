#ifndef org_apache_lucene_util_packed_GrowableWriter_H
#define org_apache_lucene_util_packed_GrowableWriter_H

#include "org/apache/lucene/util/packed/PackedInts$Mutable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class GrowableWriter;
        }
      }
    }
  }
}
namespace java {
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

          class GrowableWriter : public ::org::apache::lucene::util::packed::PackedInts$Mutable {
           public:
            enum {
              mid_init$_bd345f4802f735a2,
              mid_clear_3353d9f14bbfd91a,
              mid_fill_149e3c231100e68d,
              mid_get_70b2a956d0e32bc7,
              mid_get_cccaa25a22f96577,
              mid_getBitsPerValue_15aa3d485e96b665,
              mid_getMutable_495d9e0d2704083f,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_resize_d2db21b7544b966b,
              mid_set_6d2742abed5d70c9,
              mid_set_cccaa25a22f96577,
              mid_size_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GrowableWriter(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Mutable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GrowableWriter(const GrowableWriter& obj) : ::org::apache::lucene::util::packed::PackedInts$Mutable(obj) {}

            GrowableWriter(jint, jint, jfloat);

            void clear() const;
            void fill(jint, jint, jlong) const;
            jlong get(jint) const;
            jint get(jint, const JArray< jlong > &, jint, jint) const;
            jint getBitsPerValue() const;
            ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable() const;
            jlong ramBytesUsed() const;
            GrowableWriter resize(jint) const;
            void set(jint, jlong) const;
            jint set(jint, const JArray< jlong > &, jint, jint) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(GrowableWriter);
          extern PyTypeObject *PY_TYPE(GrowableWriter);

          class t_GrowableWriter {
          public:
            PyObject_HEAD
            GrowableWriter object;
            static PyObject *wrap_Object(const GrowableWriter&);
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
