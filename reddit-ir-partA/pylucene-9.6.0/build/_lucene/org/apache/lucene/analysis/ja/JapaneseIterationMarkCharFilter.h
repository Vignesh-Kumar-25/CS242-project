#ifndef org_apache_lucene_analysis_ja_JapaneseIterationMarkCharFilter_H
#define org_apache_lucene_analysis_ja_JapaneseIterationMarkCharFilter_H

#include "org/apache/lucene/analysis/CharFilter.h"

namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseIterationMarkCharFilter : public ::org::apache::lucene::analysis::CharFilter {
           public:
            enum {
              mid_init$_48be8a5844a4c6e0,
              mid_init$_fd35359f2498ba4f,
              mid_read_15aa3d485e96b665,
              mid_read_cb7d7dc978d108f2,
              mid_correct_58b165b57740feff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseIterationMarkCharFilter(jobject obj) : ::org::apache::lucene::analysis::CharFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseIterationMarkCharFilter(const JapaneseIterationMarkCharFilter& obj) : ::org::apache::lucene::analysis::CharFilter(obj) {}

            static jboolean NORMALIZE_KANA_DEFAULT;
            static jboolean NORMALIZE_KANJI_DEFAULT;

            JapaneseIterationMarkCharFilter(const ::java::io::Reader &);
            JapaneseIterationMarkCharFilter(const ::java::io::Reader &, jboolean, jboolean);

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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseIterationMarkCharFilter);
          extern PyTypeObject *PY_TYPE(JapaneseIterationMarkCharFilter);

          class t_JapaneseIterationMarkCharFilter {
          public:
            PyObject_HEAD
            JapaneseIterationMarkCharFilter object;
            static PyObject *wrap_Object(const JapaneseIterationMarkCharFilter&);
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
