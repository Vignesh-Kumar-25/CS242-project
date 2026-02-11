#ifndef org_apache_lucene_util_packed_PackedInts$Mutable_H
#define org_apache_lucene_util_packed_PackedInts$Mutable_H

#include "org/apache/lucene/util/packed/PackedInts$Reader.h"

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

          class PackedInts$Mutable : public ::org::apache::lucene::util::packed::PackedInts$Reader {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_clear_3353d9f14bbfd91a,
              mid_fill_149e3c231100e68d,
              mid_getBitsPerValue_15aa3d485e96b665,
              mid_set_6d2742abed5d70c9,
              mid_set_cccaa25a22f96577,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Mutable(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Mutable(const PackedInts$Mutable& obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {}

            PackedInts$Mutable();

            void clear() const;
            void fill(jint, jint, jlong) const;
            jint getBitsPerValue() const;
            void set(jint, jlong) const;
            jint set(jint, const JArray< jlong > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PackedInts$Mutable);
          extern PyTypeObject *PY_TYPE(PackedInts$Mutable);

          class t_PackedInts$Mutable {
          public:
            PyObject_HEAD
            PackedInts$Mutable object;
            static PyObject *wrap_Object(const PackedInts$Mutable&);
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
