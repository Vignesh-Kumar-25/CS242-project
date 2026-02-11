#ifndef org_apache_lucene_codecs_CodecUtil_H
#define org_apache_lucene_codecs_CodecUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
        class IndexOutput;
        class ChecksumIndexInput;
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class CodecUtil : public ::java::lang::Object {
         public:
          enum {
            mid_checkFooter_350a3dd7f574418e,
            mid_checkFooter_4eb8902fe2de86e5,
            mid_checkHeader_7fe0b58b3a66d1ad,
            mid_checkHeaderNoMagic_7fe0b58b3a66d1ad,
            mid_checkIndexHeader_2748725b4ddd44ed,
            mid_checkIndexHeaderID_5dcacc4b558b890f,
            mid_checkIndexHeaderSuffix_ebf07dcaeb9ab555,
            mid_checksumEntireFile_ceb60bad4b6c0339,
            mid_footerLength_15aa3d485e96b665,
            mid_headerLength_08c5dabd7f8f1590,
            mid_indexHeaderLength_1951ff36bbcd363e,
            mid_readBEInt_b3a5f8b269848c58,
            mid_readBELong_b43a6b399cb0111d,
            mid_readFooter_db386288749607e4,
            mid_readIndexHeader_db386288749607e4,
            mid_retrieveChecksum_ceb60bad4b6c0339,
            mid_retrieveChecksum_6f08d1e52f7e2410,
            mid_verifyAndCopyIndexHeader_5e0b70a00e0dcad3,
            mid_writeBEInt_72ad099891334feb,
            mid_writeBELong_2a3263844a04bfb5,
            mid_writeFooter_65c709da06ad6b5d,
            mid_writeHeader_079a87894c29095a,
            mid_writeIndexHeader_0f906e52d24bdd1c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CodecUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CodecUtil(const CodecUtil& obj) : ::java::lang::Object(obj) {}

          static jint CODEC_MAGIC;
          static jint FOOTER_MAGIC;

          static jlong checkFooter(const ::org::apache::lucene::store::ChecksumIndexInput &);
          static void checkFooter(const ::org::apache::lucene::store::ChecksumIndexInput &, const ::java::lang::Throwable &);
          static jint checkHeader(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint);
          static jint checkHeaderNoMagic(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint);
          static jint checkIndexHeader(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint, const JArray< jbyte > &, const ::java::lang::String &);
          static JArray< jbyte > checkIndexHeaderID(const ::org::apache::lucene::store::DataInput &, const JArray< jbyte > &);
          static ::java::lang::String checkIndexHeaderSuffix(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &);
          static jlong checksumEntireFile(const ::org::apache::lucene::store::IndexInput &);
          static jint footerLength();
          static jint headerLength(const ::java::lang::String &);
          static jint indexHeaderLength(const ::java::lang::String &, const ::java::lang::String &);
          static jint readBEInt(const ::org::apache::lucene::store::DataInput &);
          static jlong readBELong(const ::org::apache::lucene::store::DataInput &);
          static JArray< jbyte > readFooter(const ::org::apache::lucene::store::IndexInput &);
          static JArray< jbyte > readIndexHeader(const ::org::apache::lucene::store::IndexInput &);
          static jlong retrieveChecksum(const ::org::apache::lucene::store::IndexInput &);
          static jlong retrieveChecksum(const ::org::apache::lucene::store::IndexInput &, jlong);
          static void verifyAndCopyIndexHeader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::DataOutput &, const JArray< jbyte > &);
          static void writeBEInt(const ::org::apache::lucene::store::DataOutput &, jint);
          static void writeBELong(const ::org::apache::lucene::store::DataOutput &, jlong);
          static void writeFooter(const ::org::apache::lucene::store::IndexOutput &);
          static void writeHeader(const ::org::apache::lucene::store::DataOutput &, const ::java::lang::String &, jint);
          static void writeIndexHeader(const ::org::apache::lucene::store::DataOutput &, const ::java::lang::String &, jint, const JArray< jbyte > &, const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(CodecUtil);
        extern PyTypeObject *PY_TYPE(CodecUtil);

        class t_CodecUtil {
        public:
          PyObject_HEAD
          CodecUtil object;
          static PyObject *wrap_Object(const CodecUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
