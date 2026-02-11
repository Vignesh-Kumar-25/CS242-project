#ifndef org_apache_lucene_analysis_WordlistLoader_H
#define org_apache_lucene_analysis_WordlistLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class InputStream;
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
        class CharArrayMap;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class WordlistLoader : public ::java::lang::Object {
         public:
          enum {
            mid_getSnowballWordSet_eedaac5b5d0fea7f,
            mid_getSnowballWordSet_3659ec439af7a842,
            mid_getSnowballWordSet_7d32b93ba05aa7ad,
            mid_getStemDict_8eabd56552da8dbc,
            mid_getWordSet_eedaac5b5d0fea7f,
            mid_getWordSet_3659ec439af7a842,
            mid_getWordSet_7d32b93ba05aa7ad,
            mid_getWordSet_5aa5b5440a34a4dc,
            mid_getWordSet_4cac63ac7867d4b2,
            mid_getWordSet_dc4e4e6c93b328b2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WordlistLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WordlistLoader(const WordlistLoader& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::analysis::CharArraySet getSnowballWordSet(const ::java::io::InputStream &);
          static ::org::apache::lucene::analysis::CharArraySet getSnowballWordSet(const ::java::io::Reader &);
          static ::org::apache::lucene::analysis::CharArraySet getSnowballWordSet(const ::java::io::Reader &, const ::org::apache::lucene::analysis::CharArraySet &);
          static ::org::apache::lucene::analysis::CharArrayMap getStemDict(const ::java::io::Reader &, const ::org::apache::lucene::analysis::CharArrayMap &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::InputStream &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::Reader &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::Reader &, const ::org::apache::lucene::analysis::CharArraySet &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::InputStream &, const ::java::lang::String &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::Reader &, const ::java::lang::String &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::Reader &, const ::java::lang::String &, const ::org::apache::lucene::analysis::CharArraySet &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(WordlistLoader);
        extern PyTypeObject *PY_TYPE(WordlistLoader);

        class t_WordlistLoader {
        public:
          PyObject_HEAD
          WordlistLoader object;
          static PyObject *wrap_Object(const WordlistLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
