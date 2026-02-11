#ifndef org_apache_lucene_index_CheckIndex_H
#define org_apache_lucene_index_CheckIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CheckIndex$Status$VectorValuesStatus;
        class CheckIndex$Status$StoredFieldStatus;
        class CheckIndex$Status$PointsStatus;
        class CodecReader;
        class CheckIndex$Status$LiveDocStatus;
        class CheckIndex$Options;
        class CheckIndex$Status$FieldNormStatus;
        class CheckIndex$Status$FieldInfoStatus;
        class CheckIndex$Status;
        class CheckIndex$Status$TermVectorStatus;
        class CheckIndex$Status$DocValuesStatus;
        class CheckIndex$Status$IndexSortStatus;
        class CheckIndex$Status$TermIndexStatus;
      }
      namespace store {
        class Lock;
        class Directory;
      }
      namespace search {
        class Sort;
      }
    }
  }
}
namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
    class String;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
    class List;
  }
  namespace io {
    class IOException;
    class PrintStream;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex : public ::java::lang::Object {
         public:
          enum {
            mid_init$_31453c15367f1d64,
            mid_init$_e6137504860c8b3f,
            mid_assertsOn_ee8b0a5fa521ddac,
            mid_checkIndex_26a23adeee7679c3,
            mid_checkIndex_dc7895865d02295d,
            mid_checkIndex_f0c41f2c77d6de5c,
            mid_close_3353d9f14bbfd91a,
            mid_doCheck_f99540416d427273,
            mid_doSlowChecks_ee8b0a5fa521ddac,
            mid_exorciseIndex_4a97df7ede645e5d,
            mid_getChecksumsOnly_ee8b0a5fa521ddac,
            mid_getFailFast_ee8b0a5fa521ddac,
            mid_main_a43828b01cd19e9d,
            mid_parseOptions_977912ac160d8693,
            mid_setChecksumsOnly_4f96af910856b303,
            mid_setDoSlowChecks_4f96af910856b303,
            mid_setFailFast_4f96af910856b303,
            mid_setInfoStream_b6308c09112257e7,
            mid_setInfoStream_321648fda0af9f80,
            mid_setThreadCount_da425451c8de636b,
            mid_testDocValues_480bdc4c91efdca0,
            mid_testFieldInfos_208014d112dc148d,
            mid_testFieldNorms_8b95fb3c77d07e06,
            mid_testLiveDocs_79a78002e76ad1d4,
            mid_testPoints_7b38887ba50a925c,
            mid_testPostings_86e5ecff8fc8df17,
            mid_testPostings_b89b8418c20096c1,
            mid_testSort_a31f7111554464cf,
            mid_testStoredFields_ec260fd6e870e346,
            mid_testTermVectors_76d8fe27a4b10be7,
            mid_testTermVectors_a4929bc810504cd4,
            mid_testVectors_a4010818abdd43e2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex(const CheckIndex& obj) : ::java::lang::Object(obj) {}

          CheckIndex(const ::org::apache::lucene::store::Directory &);
          CheckIndex(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Lock &);

          static jboolean assertsOn();
          ::org::apache::lucene::index::CheckIndex$Status checkIndex() const;
          ::org::apache::lucene::index::CheckIndex$Status checkIndex(const ::java::util::List &) const;
          ::org::apache::lucene::index::CheckIndex$Status checkIndex(const ::java::util::List &, const ::java::util::concurrent::ExecutorService &) const;
          void close() const;
          jint doCheck(const ::org::apache::lucene::index::CheckIndex$Options &) const;
          jboolean doSlowChecks() const;
          void exorciseIndex(const ::org::apache::lucene::index::CheckIndex$Status &) const;
          jboolean getChecksumsOnly() const;
          jboolean getFailFast() const;
          static void main(const JArray< ::java::lang::String > &);
          static ::org::apache::lucene::index::CheckIndex$Options parseOptions(const JArray< ::java::lang::String > &);
          void setChecksumsOnly(jboolean) const;
          void setDoSlowChecks(jboolean) const;
          void setFailFast(jboolean) const;
          void setInfoStream(const ::java::io::PrintStream &) const;
          void setInfoStream(const ::java::io::PrintStream &, jboolean) const;
          void setThreadCount(jint) const;
          static ::org::apache::lucene::index::CheckIndex$Status$DocValuesStatus testDocValues(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$FieldInfoStatus testFieldInfos(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$FieldNormStatus testFieldNorms(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$LiveDocStatus testLiveDocs(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$PointsStatus testPoints(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus testPostings(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus testPostings(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean, jboolean, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$IndexSortStatus testSort(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::search::Sort &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$StoredFieldStatus testStoredFields(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus testTermVectors(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus testTermVectors(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean, jboolean, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$VectorValuesStatus testVectors(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(CheckIndex);
        extern PyTypeObject *PY_TYPE(CheckIndex);

        class t_CheckIndex {
        public:
          PyObject_HEAD
          CheckIndex object;
          static PyObject *wrap_Object(const CheckIndex&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
