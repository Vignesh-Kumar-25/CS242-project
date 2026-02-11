#ifndef org_apache_lucene_analysis_pattern_PatternTypingFilter$PatternTypingRule_H
#define org_apache_lucene_analysis_pattern_PatternTypingFilter$PatternTypingRule_H

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
      namespace analysis {
        namespace pattern {

          class PatternTypingFilter$PatternTypingRule : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e725d664be381b16,
              mid_getFlags_15aa3d485e96b665,
              mid_getPattern_b27c318a271bfe82,
              mid_getTypeTemplate_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternTypingFilter$PatternTypingRule(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternTypingFilter$PatternTypingRule(const PatternTypingFilter$PatternTypingRule& obj) : ::java::lang::Object(obj) {}

            PatternTypingFilter$PatternTypingRule(const ::java::util::regex::Pattern &, jint, const ::java::lang::String &);

            jint getFlags() const;
            ::java::util::regex::Pattern getPattern() const;
            ::java::lang::String getTypeTemplate() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternTypingFilter$PatternTypingRule);
          extern PyTypeObject *PY_TYPE(PatternTypingFilter$PatternTypingRule);

          class t_PatternTypingFilter$PatternTypingRule {
          public:
            PyObject_HEAD
            PatternTypingFilter$PatternTypingRule object;
            static PyObject *wrap_Object(const PatternTypingFilter$PatternTypingRule&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
