#ifndef org_apache_lucene_analysis_AbstractAnalysisFactory_H
#define org_apache_lucene_analysis_AbstractAnalysisFactory_H

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
      namespace util {
        class Version;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class AbstractAnalysisFactory : public ::java::lang::Object {
         public:
          enum {
            mid_get_15eca8dfb678c73e,
            mid_get_2923b48dea29208a,
            mid_get_dc077785ba7f9ebe,
            mid_get_497d01c52abf839d,
            mid_get_0f548fddbd1578f4,
            mid_getChar_f9f9fa84027fd58f,
            mid_getClassArg_dc633f13a47328a8,
            mid_getLuceneMatchVersion_2bd47fe0c14f7e24,
            mid_getOriginalArgs_19f838df22aacf85,
            mid_getSet_6508625f3ff94d88,
            mid_isExplicitLuceneMatchVersion_ee8b0a5fa521ddac,
            mid_require_15eca8dfb678c73e,
            mid_require_dc077785ba7f9ebe,
            mid_require_d74166ffd29e5411,
            mid_requireChar_75b7adcc958742fe,
            mid_setExplicitLuceneMatchVersion_4f96af910856b303,
            mid_requireInt_d8ad17dc2abab282,
            mid_defaultCtorException_3da3bc466c57e477,
            mid_requireBoolean_d0ca20e39c299763,
            mid_requireFloat_6a1010594512d169,
            mid_getPattern_8210ac6d19aa7ef5,
            mid_getWordSet_1c115397ebbc7aea,
            mid_getLines_4ccd1a0ab57f9fd4,
            mid_getSnowballWordSet_1c115397ebbc7aea,
            mid_splitFileNames_bfc101691731cf5d,
            mid_splitAt_91271da9b8d795ef,
            mid_getBoolean_a007cb92bc43ec1b,
            mid_getInt_12a7f990730e8890,
            mid_getFloat_3cfe6429abb2760b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractAnalysisFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractAnalysisFactory(const AbstractAnalysisFactory& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *LUCENE_MATCH_VERSION_PARAM;

          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &) const;
          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::lang::String &) const;
          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &) const;
          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, const ::java::lang::String &) const;
          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, const ::java::lang::String &, jboolean) const;
          jchar getChar(const ::java::util::Map &, const ::java::lang::String &, jchar) const;
          ::java::lang::String getClassArg() const;
          ::org::apache::lucene::util::Version getLuceneMatchVersion() const;
          ::java::util::Map getOriginalArgs() const;
          ::java::util::Set getSet(const ::java::util::Map &, const ::java::lang::String &) const;
          jboolean isExplicitLuceneMatchVersion() const;
          ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &) const;
          ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &) const;
          ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, jboolean) const;
          jchar requireChar(const ::java::util::Map &, const ::java::lang::String &) const;
          void setExplicitLuceneMatchVersion(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractAnalysisFactory);
        extern PyTypeObject *PY_TYPE(AbstractAnalysisFactory);

        class t_AbstractAnalysisFactory {
        public:
          PyObject_HEAD
          AbstractAnalysisFactory object;
          static PyObject *wrap_Object(const AbstractAnalysisFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
