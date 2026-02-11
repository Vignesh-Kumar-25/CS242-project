#ifndef org_apache_lucene_analysis_pattern_PatternReplaceCharFilter_H
#define org_apache_lucene_analysis_pattern_PatternReplaceCharFilter_H

#include "org/apache/lucene/analysis/charfilter/BaseCharFilter.h"

namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternReplaceCharFilter : public ::org::apache::lucene::analysis::charfilter::BaseCharFilter {
           public:
            enum {
              mid_init$_52edc7979e190028,
              mid_read_15aa3d485e96b665,
              mid_read_cb7d7dc978d108f2,
              mid_correct_58b165b57740feff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternReplaceCharFilter(jobject obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternReplaceCharFilter(const PatternReplaceCharFilter& obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {}

            PatternReplaceCharFilter(const ::java::util::regex::Pattern &, const ::java::lang::String &, const ::java::io::Reader &);

            jint read() const;
            jint read(const JArray< jchar > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PatternReplaceCharFilter);
          extern PyTypeObject *PY_TYPE(PatternReplaceCharFilter);

          class t_PatternReplaceCharFilter {
          public:
            PyObject_HEAD
            PatternReplaceCharFilter object;
            static PyObject *wrap_Object(const PatternReplaceCharFilter&);
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
