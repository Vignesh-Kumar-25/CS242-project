#ifndef org_apache_lucene_util_bkd_OfflinePointWriter_H
#define org_apache_lucene_util_bkd_OfflinePointWriter_H

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
      namespace store {
        class IndexOutput;
        class Directory;
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
        namespace bkd {

          class OfflinePointWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_10aff84d460dba55,
              mid_append_c9becebe13d79fb8,
              mid_append_316a601689372d68,
              mid_close_3353d9f14bbfd91a,
              mid_count_058f5911dcf5d8a4,
              mid_destroy_3353d9f14bbfd91a,
              mid_getReader_6ab62ca19d5b74d1,
              mid_toString_dc633f13a47328a8,
              mid_getReader_8474034673322ffc,
              max_mid
            };

            enum {
              fid_name,
              fid_out,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OfflinePointWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OfflinePointWriter(const OfflinePointWriter& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String _get_name() const;
            ::org::apache::lucene::store::IndexOutput _get_out() const;

            OfflinePointWriter(const ::org::apache::lucene::util::bkd::BKDConfig &, const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, jlong);

            void append(const ::org::apache::lucene::util::bkd::PointValue &) const;
            void append(const JArray< jbyte > &, jint) const;
            void close() const;
            jlong count() const;
            void destroy() const;
            ::org::apache::lucene::util::bkd::PointReader getReader(jlong, jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(OfflinePointWriter);
          extern PyTypeObject *PY_TYPE(OfflinePointWriter);

          class t_OfflinePointWriter {
          public:
            PyObject_HEAD
            OfflinePointWriter object;
            static PyObject *wrap_Object(const OfflinePointWriter&);
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
