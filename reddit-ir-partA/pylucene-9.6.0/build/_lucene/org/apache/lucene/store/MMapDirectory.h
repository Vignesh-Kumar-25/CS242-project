#ifndef org_apache_lucene_store_MMapDirectory_H
#define org_apache_lucene_store_MMapDirectory_H

#include "org/apache/lucene/store/FSDirectory.h"

namespace java {
  namespace util {
    namespace function {
      class BiPredicate;
    }
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class LockFactory;
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class MMapDirectory : public ::org::apache::lucene::store::FSDirectory {
         public:
          enum {
            mid_init$_9a1eff7d5b4532fc,
            mid_init$_48aa297142d994ca,
            mid_init$_6345e5cefd665552,
            mid_init$_7ad195634468fccd,
            mid_init$_126f8dc8de3d49e8,
            mid_init$_4173d4196ca7b02a,
            mid_getMaxChunkSize_058f5911dcf5d8a4,
            mid_getPreload_ee8b0a5fa521ddac,
            mid_getUseUnmap_ee8b0a5fa521ddac,
            mid_openInput_6054820b0be0358d,
            mid_setPreload_4f96af910856b303,
            mid_setPreload_4f9c290a5d337e53,
            mid_setUseUnmap_4f96af910856b303,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MMapDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MMapDirectory(const MMapDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          static ::java::util::function::BiPredicate *ALL_FILES;
          static ::java::util::function::BiPredicate *BASED_ON_LOAD_IO_CONTEXT;
          static jlong DEFAULT_MAX_CHUNK_SIZE;
          static ::java::lang::String *ENABLE_MEMORY_SEGMENTS_SYSPROP;
          static ::java::lang::String *ENABLE_UNMAP_HACK_SYSPROP;
          static ::java::util::function::BiPredicate *NO_FILES;
          static ::java::lang::String *UNMAP_NOT_SUPPORTED_REASON;
          static jboolean UNMAP_SUPPORTED;

          MMapDirectory(const ::java::nio::file::Path &);
          MMapDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
          MMapDirectory(const ::java::nio::file::Path &, jint);
          MMapDirectory(const ::java::nio::file::Path &, jlong);
          MMapDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &, jint);
          MMapDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &, jlong);

          jlong getMaxChunkSize() const;
          jboolean getPreload() const;
          jboolean getUseUnmap() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void setPreload(jboolean) const;
          void setPreload(const ::java::util::function::BiPredicate &) const;
          void setUseUnmap(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(MMapDirectory);
        extern PyTypeObject *PY_TYPE(MMapDirectory);

        class t_MMapDirectory {
        public:
          PyObject_HEAD
          MMapDirectory object;
          static PyObject *wrap_Object(const MMapDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
