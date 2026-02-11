#ifndef org_apache_lucene_store_RateLimitedIndexOutput_H
#define org_apache_lucene_store_RateLimitedIndexOutput_H

#include "org/apache/lucene/store/FilterIndexOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class RateLimiter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RateLimitedIndexOutput : public ::org::apache::lucene::store::FilterIndexOutput {
         public:
          enum {
            mid_init$_f40aec3ac5aaac4d,
            mid_writeByte_34c1f13335999aeb,
            mid_writeBytes_411019d3e65b5a2d,
            mid_writeInt_da425451c8de636b,
            mid_writeLong_db2028ac45cd5b77,
            mid_writeShort_aa54184a742ad854,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RateLimitedIndexOutput(jobject obj) : ::org::apache::lucene::store::FilterIndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RateLimitedIndexOutput(const RateLimitedIndexOutput& obj) : ::org::apache::lucene::store::FilterIndexOutput(obj) {}

          RateLimitedIndexOutput(const ::org::apache::lucene::store::RateLimiter &, const ::org::apache::lucene::store::IndexOutput &);

          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeShort(jshort) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(RateLimitedIndexOutput);
        extern PyTypeObject *PY_TYPE(RateLimitedIndexOutput);

        class t_RateLimitedIndexOutput {
        public:
          PyObject_HEAD
          RateLimitedIndexOutput object;
          static PyObject *wrap_Object(const RateLimitedIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
