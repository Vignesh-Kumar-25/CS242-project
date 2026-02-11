#ifndef java_util_regex_MatchResult_H
#define java_util_regex_MatchResult_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class MatchResult : public ::java::lang::Object {
       public:
        enum {
          mid_end_15aa3d485e96b665,
          mid_end_58b165b57740feff,
          mid_group_dc633f13a47328a8,
          mid_group_78a7b318cefaee15,
          mid_groupCount_15aa3d485e96b665,
          mid_start_15aa3d485e96b665,
          mid_start_58b165b57740feff,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MatchResult(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MatchResult(const MatchResult& obj) : ::java::lang::Object(obj) {}

        jint end() const;
        jint end(jint) const;
        ::java::lang::String group() const;
        ::java::lang::String group(jint) const;
        jint groupCount() const;
        jint start() const;
        jint start(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(MatchResult);
      extern PyTypeObject *PY_TYPE(MatchResult);

      class t_MatchResult {
      public:
        PyObject_HEAD
        MatchResult object;
        static PyObject *wrap_Object(const MatchResult&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
