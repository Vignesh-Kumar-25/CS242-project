#ifndef org_apache_lucene_store_IOContext_H
#define org_apache_lucene_store_IOContext_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class MergeInfo;
        class IOContext;
        class IOContext$Context;
        class FlushInfo;
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
      namespace store {

        class IOContext : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_ed9e02b4f37010ab,
            mid_init$_fe4cb29720466f78,
            mid_init$_4c34318413da3673,
            mid_init$_f87a561a9e46efae,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_context,
            fid_flushInfo,
            fid_load,
            fid_mergeInfo,
            fid_readOnce,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOContext(const IOContext& obj) : ::java::lang::Object(obj) {}

          static IOContext *DEFAULT;
          static IOContext *LOAD;
          static IOContext *READ;
          static IOContext *READONCE;

          ::org::apache::lucene::store::IOContext$Context _get_context() const;
          ::org::apache::lucene::store::FlushInfo _get_flushInfo() const;
          jboolean _get_load() const;
          ::org::apache::lucene::store::MergeInfo _get_mergeInfo() const;
          jboolean _get_readOnce() const;

          IOContext();
          IOContext(const ::org::apache::lucene::store::IOContext$Context &);
          IOContext(const ::org::apache::lucene::store::FlushInfo &);
          IOContext(const ::org::apache::lucene::store::MergeInfo &);
          IOContext(const IOContext &, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(IOContext);
        extern PyTypeObject *PY_TYPE(IOContext);

        class t_IOContext {
        public:
          PyObject_HEAD
          IOContext object;
          static PyObject *wrap_Object(const IOContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
