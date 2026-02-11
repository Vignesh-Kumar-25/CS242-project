#ifndef org_apache_lucene_util_IOUtils_H
#define org_apache_lucene_util_IOUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Error;
    class Throwable;
    class RuntimeException;
    class Class;
    class String;
  }
  namespace io {
    class InputStream;
    class Reader;
    class IOException;
    class Closeable;
  }
  namespace util {
    class Collection;
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
        class Directory;
      }
      namespace util {
        class IOUtils$IOConsumer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IOUtils : public ::java::lang::Object {
         public:
          enum {
            mid_applyToAll_965a4eed54a5ce39,
            mid_close_aeb80815d276658f,
            mid_close_e24ade5f219c5841,
            mid_closeWhileHandlingException_aeb80815d276658f,
            mid_closeWhileHandlingException_e24ade5f219c5841,
            mid_deleteFiles_010df5bf24ec2659,
            mid_deleteFilesIfExist_7df9db5e6ecd0fcb,
            mid_deleteFilesIfExist_568dc3e0933a89e8,
            mid_deleteFilesIgnoringExceptions_7df9db5e6ecd0fcb,
            mid_deleteFilesIgnoringExceptions_568dc3e0933a89e8,
            mid_deleteFilesIgnoringExceptions_bf2169ec95600180,
            mid_deleteFilesIgnoringExceptions_010df5bf24ec2659,
            mid_fsync_cd0ba2b6236fa2ef,
            mid_requireResourceNonNull_a51f7027b33dc26c,
            mid_rethrowAlways_cc21682847fdd0b6,
            mid_rm_7df9db5e6ecd0fcb,
            mid_useOrSuppress_9ed1bb252518eed7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOUtils(const IOUtils& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *UTF_8;

          static void applyToAll(const ::java::util::Collection &, const ::org::apache::lucene::util::IOUtils$IOConsumer &);
          static void close(const JArray< ::java::io::Closeable > &);
          static void close(const ::java::lang::Iterable &);
          static void closeWhileHandlingException(const JArray< ::java::io::Closeable > &);
          static void closeWhileHandlingException(const ::java::lang::Iterable &);
          static void deleteFiles(const ::org::apache::lucene::store::Directory &, const ::java::util::Collection &);
          static void deleteFilesIfExist(const JArray< ::java::nio::file::Path > &);
          static void deleteFilesIfExist(const ::java::util::Collection &);
          static void deleteFilesIgnoringExceptions(const JArray< ::java::nio::file::Path > &);
          static void deleteFilesIgnoringExceptions(const ::java::util::Collection &);
          static void deleteFilesIgnoringExceptions(const ::org::apache::lucene::store::Directory &, const JArray< ::java::lang::String > &);
          static void deleteFilesIgnoringExceptions(const ::org::apache::lucene::store::Directory &, const ::java::util::Collection &);
          static void fsync(const ::java::nio::file::Path &, jboolean);
          static ::java::lang::Object requireResourceNonNull(const ::java::lang::Object &, const ::java::lang::String &);
          static ::java::lang::Error rethrowAlways(const ::java::lang::Throwable &);
          static void rm(const JArray< ::java::nio::file::Path > &);
          static ::java::lang::Throwable useOrSuppress(const ::java::lang::Throwable &, const ::java::lang::Throwable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(IOUtils);
        extern PyTypeObject *PY_TYPE(IOUtils);

        class t_IOUtils {
        public:
          PyObject_HEAD
          IOUtils object;
          static PyObject *wrap_Object(const IOUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
