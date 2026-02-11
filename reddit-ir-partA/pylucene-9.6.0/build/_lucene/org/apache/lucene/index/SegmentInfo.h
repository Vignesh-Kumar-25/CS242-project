#ifndef org_apache_lucene_index_SegmentInfo_H
#define org_apache_lucene_index_SegmentInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
      }
      namespace util {
        class Version;
      }
      namespace codecs {
        class Codec;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SegmentInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d892123bb81d5714,
            mid_addDiagnostics_62c0fdc62292ffbf,
            mid_addFile_4a883f7810d2effa,
            mid_addFiles_568dc3e0933a89e8,
            mid_equals_6084f78e09b6c0c3,
            mid_files_9a625d56b67c7390,
            mid_getAttribute_04612c8360f09496,
            mid_getAttributes_19f838df22aacf85,
            mid_getCodec_acf8c1a01773b200,
            mid_getDiagnostics_19f838df22aacf85,
            mid_getId_f4d7c022fb7af16d,
            mid_getIndexSort_a94eac9be092b024,
            mid_getMinVersion_2bd47fe0c14f7e24,
            mid_getUseCompoundFile_ee8b0a5fa521ddac,
            mid_getVersion_2bd47fe0c14f7e24,
            mid_hashCode_15aa3d485e96b665,
            mid_maxDoc_15aa3d485e96b665,
            mid_putAttribute_4178ea5d4aed7988,
            mid_setCodec_2a9e8a498cd6ce0b,
            mid_setFiles_568dc3e0933a89e8,
            mid_toString_dc633f13a47328a8,
            mid_toString_78a7b318cefaee15,
            max_mid
          };

          enum {
            fid_dir,
            fid_name,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfo(const SegmentInfo& obj) : ::java::lang::Object(obj) {}

          static jint NO;
          static jint YES;

          ::org::apache::lucene::store::Directory _get_dir() const;
          ::java::lang::String _get_name() const;

          SegmentInfo(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::Version &, const ::java::lang::String &, jint, jboolean, const ::org::apache::lucene::codecs::Codec &, const ::java::util::Map &, const JArray< jbyte > &, const ::java::util::Map &, const ::org::apache::lucene::search::Sort &);

          void addDiagnostics(const ::java::util::Map &) const;
          void addFile(const ::java::lang::String &) const;
          void addFiles(const ::java::util::Collection &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Set files() const;
          ::java::lang::String getAttribute(const ::java::lang::String &) const;
          ::java::util::Map getAttributes() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          ::java::util::Map getDiagnostics() const;
          JArray< jbyte > getId() const;
          ::org::apache::lucene::search::Sort getIndexSort() const;
          ::org::apache::lucene::util::Version getMinVersion() const;
          jboolean getUseCompoundFile() const;
          ::org::apache::lucene::util::Version getVersion() const;
          jint hashCode() const;
          jint maxDoc() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setCodec(const ::org::apache::lucene::codecs::Codec &) const;
          void setFiles(const ::java::util::Collection &) const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentInfo);
        extern PyTypeObject *PY_TYPE(SegmentInfo);

        class t_SegmentInfo {
        public:
          PyObject_HEAD
          SegmentInfo object;
          static PyObject *wrap_Object(const SegmentInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
