#ifndef org_apache_lucene_index_IndexFileNames_H
#define org_apache_lucene_index_IndexFileNames_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexFileNames : public ::java::lang::Object {
         public:
          enum {
            mid_fileNameFromGeneration_6cecf3645fa448aa,
            mid_getExtension_04612c8360f09496,
            mid_matchesExtension_fd896d126634f44a,
            mid_parseGeneration_f9e0f284a35cbac5,
            mid_parseSegmentName_04612c8360f09496,
            mid_segmentFileName_ae646501bbe10014,
            mid_stripExtension_04612c8360f09496,
            mid_stripSegmentName_04612c8360f09496,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFileNames(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexFileNames(const IndexFileNames& obj) : ::java::lang::Object(obj) {}

          static ::java::util::regex::Pattern *CODEC_FILE_PATTERN;
          static ::java::lang::String *PENDING_SEGMENTS;
          static ::java::lang::String *SEGMENTS;

          static ::java::lang::String fileNameFromGeneration(const ::java::lang::String &, const ::java::lang::String &, jlong);
          static ::java::lang::String getExtension(const ::java::lang::String &);
          static jboolean matchesExtension(const ::java::lang::String &, const ::java::lang::String &);
          static jlong parseGeneration(const ::java::lang::String &);
          static ::java::lang::String parseSegmentName(const ::java::lang::String &);
          static ::java::lang::String segmentFileName(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
          static ::java::lang::String stripExtension(const ::java::lang::String &);
          static ::java::lang::String stripSegmentName(const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(IndexFileNames);
        extern PyTypeObject *PY_TYPE(IndexFileNames);

        class t_IndexFileNames {
        public:
          PyObject_HEAD
          IndexFileNames object;
          static PyObject *wrap_Object(const IndexFileNames&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
