#ifndef java_util_regex_Pattern_H
#define java_util_regex_Pattern_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
    class String;
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    namespace function {
      class Predicate;
    }
    namespace regex {
      class Pattern;
      class Matcher;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Pattern : public ::java::lang::Object {
       public:
        enum {
          mid_asMatchPredicate_06391ce5746b4cf7,
          mid_asPredicate_06391ce5746b4cf7,
          mid_compile_74c36a42cf0e22a3,
          mid_compile_853230865ffab417,
          mid_flags_15aa3d485e96b665,
          mid_matcher_65d6a42a58955c94,
          mid_matches_85d4cba0c65e0066,
          mid_pattern_dc633f13a47328a8,
          mid_quote_04612c8360f09496,
          mid_split_d5425a3de6144675,
          mid_split_1ab1c21424e6d415,
          mid_toString_dc633f13a47328a8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Pattern(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Pattern(const Pattern& obj) : ::java::lang::Object(obj) {}

        static jint CANON_EQ;
        static jint CASE_INSENSITIVE;
        static jint COMMENTS;
        static jint DOTALL;
        static jint LITERAL;
        static jint MULTILINE;
        static jint UNICODE_CASE;
        static jint UNICODE_CHARACTER_CLASS;
        static jint UNIX_LINES;

        ::java::util::function::Predicate asMatchPredicate() const;
        ::java::util::function::Predicate asPredicate() const;
        static Pattern compile(const ::java::lang::String &);
        static Pattern compile(const ::java::lang::String &, jint);
        jint flags() const;
        ::java::util::regex::Matcher matcher(const ::java::lang::CharSequence &) const;
        static jboolean matches(const ::java::lang::String &, const ::java::lang::CharSequence &);
        ::java::lang::String pattern() const;
        static ::java::lang::String quote(const ::java::lang::String &);
        JArray< ::java::lang::String > split(const ::java::lang::CharSequence &) const;
        JArray< ::java::lang::String > split(const ::java::lang::CharSequence &, jint) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(Pattern);
      extern PyTypeObject *PY_TYPE(Pattern);

      class t_Pattern {
      public:
        PyObject_HEAD
        Pattern object;
        static PyObject *wrap_Object(const Pattern&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
