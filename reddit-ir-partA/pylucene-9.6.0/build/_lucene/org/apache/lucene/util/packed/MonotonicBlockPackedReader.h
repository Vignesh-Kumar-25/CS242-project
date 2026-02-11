#ifndef org_apache_lucene_util_packed_MonotonicBlockPackedReader_H
#define org_apache_lucene_util_packed_MonotonicBlockPackedReader_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace packed {
          class MonotonicBlockPackedReader;
        }
      }
      namespace store {
        class IndexInput;
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
      namespace util {
        namespace packed {

          class MonotonicBlockPackedReader : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_get_df4b83f9c1b9d174,
              mid_of_3e727fb1d7828bcc,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_size_058f5911dcf5d8a4,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MonotonicBlockPackedReader(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MonotonicBlockPackedReader(const MonotonicBlockPackedReader& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong get(jlong) const;
            static MonotonicBlockPackedReader of(const ::org::apache::lucene::store::IndexInput &, jint, jint, jlong);
            jlong ramBytesUsed() const;
            jlong size() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(MonotonicBlockPackedReader);
          extern PyTypeObject *PY_TYPE(MonotonicBlockPackedReader);

          class t_MonotonicBlockPackedReader {
          public:
            PyObject_HEAD
            MonotonicBlockPackedReader object;
            static PyObject *wrap_Object(const MonotonicBlockPackedReader&);
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
