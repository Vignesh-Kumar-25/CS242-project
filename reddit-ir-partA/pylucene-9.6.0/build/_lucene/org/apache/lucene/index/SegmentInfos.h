#ifndef org_apache_lucene_index_SegmentInfos_H
#define org_apache_lucene_index_SegmentInfos_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class SegmentInfos;
      }
      namespace util {
        class Version;
      }
      namespace store {
        class IndexOutput;
        class ChecksumIndexInput;
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
    class Map;
    class List;
    class Collection;
  }
  namespace lang {
    class Iterable;
    class Class;
    class Cloneable;
    class String;
  }
  namespace io {
    class IOException;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SegmentInfos : public ::java::lang::Object {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_add_0ee211a1949301b3,
            mid_addAll_e24ade5f219c5841,
            mid_asList_0bc66e960964b70a,
            mid_changed_3353d9f14bbfd91a,
            mid_clear_3353d9f14bbfd91a,
            mid_clone_20175444094af667,
            mid_commit_31453c15367f1d64,
            mid_files_0f83f74cfccbd67f,
            mid_generationFromSegmentsFileName_f9e0f284a35cbac5,
            mid_getCommitLuceneVersion_2bd47fe0c14f7e24,
            mid_getGeneration_058f5911dcf5d8a4,
            mid_getId_f4d7c022fb7af16d,
            mid_getIndexCreatedVersionMajor_15aa3d485e96b665,
            mid_getInfoStream_5916081d50694af4,
            mid_getLastCommitGeneration_b03a057f0f430cd3,
            mid_getLastCommitGeneration_f8a3167f95ee9a88,
            mid_getLastCommitSegmentsFileName_d38d07d3a65ca943,
            mid_getLastCommitSegmentsFileName_46690602e9764328,
            mid_getLastGeneration_058f5911dcf5d8a4,
            mid_getMinSegmentLuceneVersion_2bd47fe0c14f7e24,
            mid_getSegmentsFileName_dc633f13a47328a8,
            mid_getUserData_19f838df22aacf85,
            mid_getVersion_058f5911dcf5d8a4,
            mid_info_f56085990c7709e4,
            mid_iterator_7c74834ad8788f5d,
            mid_readCommit_8112783462d53c9f,
            mid_readCommit_26debe3ec8742c2c,
            mid_readLatestCommit_d490b150ed97f800,
            mid_readLatestCommit_dec4d8ba23a221c6,
            mid_remove_1916654ac294ff27,
            mid_setInfoStream_b6308c09112257e7,
            mid_setNextWriteGeneration_db2028ac45cd5b77,
            mid_setUserData_683a4af515d516a2,
            mid_size_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            mid_totalMaxDoc_15aa3d485e96b665,
            mid_updateGeneration_cb13d48adf3e629f,
            mid_write_65c709da06ad6b5d,
            max_mid
          };

          enum {
            fid_counter,
            fid_userData,
            fid_version,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfos(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfos(const SegmentInfos& obj) : ::java::lang::Object(obj) {}

          static jint VERSION_70;
          static jint VERSION_72;
          static jint VERSION_74;
          static jint VERSION_86;

          jlong _get_counter() const;
          void _set_counter(jlong) const;
          ::java::util::Map _get_userData() const;
          void _set_userData(const ::java::util::Map &) const;
          jlong _get_version() const;
          void _set_version(jlong) const;

          SegmentInfos(jint);

          void add(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          void addAll(const ::java::lang::Iterable &) const;
          ::java::util::List asList() const;
          void changed() const;
          void clear() const;
          SegmentInfos clone() const;
          void commit(const ::org::apache::lucene::store::Directory &) const;
          ::java::util::Collection files(jboolean) const;
          static jlong generationFromSegmentsFileName(const ::java::lang::String &);
          ::org::apache::lucene::util::Version getCommitLuceneVersion() const;
          jlong getGeneration() const;
          JArray< jbyte > getId() const;
          jint getIndexCreatedVersionMajor() const;
          static ::java::io::PrintStream getInfoStream();
          static jlong getLastCommitGeneration(const JArray< ::java::lang::String > &);
          static jlong getLastCommitGeneration(const ::org::apache::lucene::store::Directory &);
          static ::java::lang::String getLastCommitSegmentsFileName(const JArray< ::java::lang::String > &);
          static ::java::lang::String getLastCommitSegmentsFileName(const ::org::apache::lucene::store::Directory &);
          jlong getLastGeneration() const;
          ::org::apache::lucene::util::Version getMinSegmentLuceneVersion() const;
          ::java::lang::String getSegmentsFileName() const;
          ::java::util::Map getUserData() const;
          jlong getVersion() const;
          ::org::apache::lucene::index::SegmentCommitInfo info(jint) const;
          ::java::util::Iterator iterator() const;
          static SegmentInfos readCommit(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
          static SegmentInfos readCommit(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::ChecksumIndexInput &, jlong);
          static SegmentInfos readLatestCommit(const ::org::apache::lucene::store::Directory &);
          static SegmentInfos readLatestCommit(const ::org::apache::lucene::store::Directory &, jint);
          jboolean remove(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          static void setInfoStream(const ::java::io::PrintStream &);
          void setNextWriteGeneration(jlong) const;
          void setUserData(const ::java::util::Map &, jboolean) const;
          jint size() const;
          ::java::lang::String toString() const;
          jint totalMaxDoc() const;
          void updateGeneration(const SegmentInfos &) const;
          void write(const ::org::apache::lucene::store::IndexOutput &) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentInfos);
        extern PyTypeObject *PY_TYPE(SegmentInfos);

        class t_SegmentInfos {
        public:
          PyObject_HEAD
          SegmentInfos object;
          static PyObject *wrap_Object(const SegmentInfos&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
