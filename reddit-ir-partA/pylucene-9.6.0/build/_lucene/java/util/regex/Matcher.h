#ifndef java_util_regex_Matcher_H
#define java_util_regex_Matcher_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class CharSequence;
    class Class;
    class String;
    class StringBuffer;
  }
  namespace util {
    namespace regex {
      class MatchResult;
      class Pattern;
      class Matcher;
    }
    namespace function {
      class Function;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Matcher : public ::java::lang::Object {
       public:
        enum {
          mid_appendReplacement_4c39162091cad456,
          mid_appendReplacement_0689f45673b3db9a,
          mid_appendTail_c1d4fce7f336e672,
          mid_appendTail_152b26af18bac30a,
          mid_end_15aa3d485e96b665,
          mid_end_08c5dabd7f8f1590,
          mid_end_58b165b57740feff,
          mid_find_ee8b0a5fa521ddac,
          mid_find_92eccba87b045bbc,
          mid_group_dc633f13a47328a8,
          mid_group_04612c8360f09496,
          mid_group_78a7b318cefaee15,
          mid_groupCount_15aa3d485e96b665,
          mid_hasAnchoringBounds_ee8b0a5fa521ddac,
          mid_hasTransparentBounds_ee8b0a5fa521ddac,
          mid_hitEnd_ee8b0a5fa521ddac,
          mid_lookingAt_ee8b0a5fa521ddac,
          mid_matches_ee8b0a5fa521ddac,
          mid_pattern_b27c318a271bfe82,
          mid_quoteReplacement_04612c8360f09496,
          mid_region_fe483a6a1fb574f7,
          mid_regionEnd_15aa3d485e96b665,
          mid_regionStart_15aa3d485e96b665,
          mid_replaceAll_04612c8360f09496,
          mid_replaceAll_a8c50f047bd714c6,
          mid_replaceFirst_04612c8360f09496,
          mid_replaceFirst_a8c50f047bd714c6,
          mid_requireEnd_ee8b0a5fa521ddac,
          mid_reset_7b2a9845b2dd089a,
          mid_reset_65d6a42a58955c94,
          mid_start_15aa3d485e96b665,
          mid_start_08c5dabd7f8f1590,
          mid_start_58b165b57740feff,
          mid_toMatchResult_06a21827f1ebf128,
          mid_toString_dc633f13a47328a8,
          mid_useAnchoringBounds_1bdaff78d5e16431,
          mid_usePattern_4834bc41f6e6ce6f,
          mid_useTransparentBounds_1bdaff78d5e16431,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Matcher(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Matcher(const Matcher& obj) : ::java::lang::Object(obj) {}

        Matcher appendReplacement(const ::java::lang::StringBuffer &, const ::java::lang::String &) const;
        Matcher appendReplacement(const ::java::lang::StringBuilder &, const ::java::lang::String &) const;
        ::java::lang::StringBuffer appendTail(const ::java::lang::StringBuffer &) const;
        ::java::lang::StringBuilder appendTail(const ::java::lang::StringBuilder &) const;
        jint end() const;
        jint end(const ::java::lang::String &) const;
        jint end(jint) const;
        jboolean find() const;
        jboolean find(jint) const;
        ::java::lang::String group() const;
        ::java::lang::String group(const ::java::lang::String &) const;
        ::java::lang::String group(jint) const;
        jint groupCount() const;
        jboolean hasAnchoringBounds() const;
        jboolean hasTransparentBounds() const;
        jboolean hitEnd() const;
        jboolean lookingAt() const;
        jboolean matches() const;
        ::java::util::regex::Pattern pattern() const;
        static ::java::lang::String quoteReplacement(const ::java::lang::String &);
        Matcher region(jint, jint) const;
        jint regionEnd() const;
        jint regionStart() const;
        ::java::lang::String replaceAll(const ::java::lang::String &) const;
        ::java::lang::String replaceAll(const ::java::util::function::Function &) const;
        ::java::lang::String replaceFirst(const ::java::lang::String &) const;
        ::java::lang::String replaceFirst(const ::java::util::function::Function &) const;
        jboolean requireEnd() const;
        Matcher reset() const;
        Matcher reset(const ::java::lang::CharSequence &) const;
        jint start() const;
        jint start(const ::java::lang::String &) const;
        jint start(jint) const;
        ::java::util::regex::MatchResult toMatchResult() const;
        ::java::lang::String toString() const;
        Matcher useAnchoringBounds(jboolean) const;
        Matcher usePattern(const ::java::util::regex::Pattern &) const;
        Matcher useTransparentBounds(jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(Matcher);
      extern PyTypeObject *PY_TYPE(Matcher);

      class t_Matcher {
      public:
        PyObject_HEAD
        Matcher object;
        static PyObject *wrap_Object(const Matcher&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
