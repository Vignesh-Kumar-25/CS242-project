#ifndef org_apache_lucene_util_bkd_HeapPointReader_H
#define org_apache_lucene_util_bkd_HeapPointReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointReader;
          class BKDConfig;
          class PointValue;
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
        namespace bkd {

          class HeapPointReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d557e56070480150,
              mid_close_3353d9f14bbfd91a,
              mid_next_ee8b0a5fa521ddac,
              mid_pointValue_4f62ff4c95b80a7e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HeapPointReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HeapPointReader(const HeapPointReader& obj) : ::java::lang::Object(obj) {}

            HeapPointReader(const ::org::apache::lucene::util::bkd::BKDConfig &, const JArray< jbyte > &, jint, jint);

            void close() const;
            jboolean next() const;
            ::org::apache::lucene::util::bkd::PointValue pointValue() const;
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
          extern PyType_Def PY_TYPE_DEF(HeapPointReader);
          extern PyTypeObject *PY_TYPE(HeapPointReader);

          class t_HeapPointReader {
          public:
            PyObject_HEAD
            HeapPointReader object;
            static PyObject *wrap_Object(const HeapPointReader&);
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
