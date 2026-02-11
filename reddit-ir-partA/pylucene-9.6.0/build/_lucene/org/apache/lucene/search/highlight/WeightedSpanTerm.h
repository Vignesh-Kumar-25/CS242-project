#ifndef org_apache_lucene_search_highlight_WeightedSpanTerm_H
#define org_apache_lucene_search_highlight_WeightedSpanTerm_H

#include "org/apache/lucene/search/highlight/WeightedTerm.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class PositionSpan;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class WeightedSpanTerm : public ::org::apache::lucene::search::highlight::WeightedTerm {
           public:
            enum {
              mid_init$_f377ebb0659b026f,
              mid_init$_337a7b73c14438e9,
              mid_addPositionSpans_1a2e28000748bc88,
              mid_checkPosition_92eccba87b045bbc,
              mid_getPositionSpans_0bc66e960964b70a,
              mid_isPositionSensitive_ee8b0a5fa521ddac,
              mid_setPositionSensitive_4f96af910856b303,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedSpanTerm(jobject obj) : ::org::apache::lucene::search::highlight::WeightedTerm(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedSpanTerm(const WeightedSpanTerm& obj) : ::org::apache::lucene::search::highlight::WeightedTerm(obj) {}

            WeightedSpanTerm(jfloat, const ::java::lang::String &);
            WeightedSpanTerm(jfloat, const ::java::lang::String &, jboolean);

            void addPositionSpans(const ::java::util::List &) const;
            jboolean checkPosition(jint) const;
            ::java::util::List getPositionSpans() const;
            jboolean isPositionSensitive() const;
            void setPositionSensitive(jboolean) const;
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(WeightedSpanTerm);
          extern PyTypeObject *PY_TYPE(WeightedSpanTerm);

          class t_WeightedSpanTerm {
          public:
            PyObject_HEAD
            WeightedSpanTerm object;
            static PyObject *wrap_Object(const WeightedSpanTerm&);
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
