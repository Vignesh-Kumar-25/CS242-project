#ifndef org_apache_lucene_search_uhighlight_LabelledCharArrayMatcher_H
#define org_apache_lucene_search_uhighlight_LabelledCharArrayMatcher_H

#include "org/apache/lucene/search/uhighlight/CharArrayMatcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class ByteRunAutomaton;
        }
      }
      namespace search {
        namespace uhighlight {
          class LabelledCharArrayMatcher;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class LabelledCharArrayMatcher : public ::org::apache::lucene::search::uhighlight::CharArrayMatcher {
           public:
            enum {
              mid_getLabel_dc633f13a47328a8,
              mid_wrap_d50ab10572079c57,
              mid_wrap_3a352f7ac0e99273,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LabelledCharArrayMatcher(jobject obj) : ::org::apache::lucene::search::uhighlight::CharArrayMatcher(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LabelledCharArrayMatcher(const LabelledCharArrayMatcher& obj) : ::org::apache::lucene::search::uhighlight::CharArrayMatcher(obj) {}

            ::java::lang::String getLabel() const;
            static LabelledCharArrayMatcher wrap(const ::java::lang::String &, const ::org::apache::lucene::util::automaton::ByteRunAutomaton &);
            static LabelledCharArrayMatcher wrap(const ::java::lang::String &, const ::org::apache::lucene::search::uhighlight::CharArrayMatcher &);
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(LabelledCharArrayMatcher);
          extern PyTypeObject *PY_TYPE(LabelledCharArrayMatcher);

          class t_LabelledCharArrayMatcher {
          public:
            PyObject_HEAD
            LabelledCharArrayMatcher object;
            static PyObject *wrap_Object(const LabelledCharArrayMatcher&);
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
