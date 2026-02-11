#ifndef org_apache_lucene_sandbox_search_QueryProfilerTimingType_H
#define org_apache_lucene_sandbox_search_QueryProfilerTimingType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class QueryProfilerTimingType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class QueryProfilerTimingType : public ::java::lang::Enum {
           public:
            enum {
              mid_toString_dc633f13a47328a8,
              mid_valueOf_77d6ffd62d3228df,
              mid_values_b8db573ed8691388,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryProfilerTimingType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryProfilerTimingType(const QueryProfilerTimingType& obj) : ::java::lang::Enum(obj) {}

            static QueryProfilerTimingType *ADVANCE;
            static QueryProfilerTimingType *BUILD_SCORER;
            static QueryProfilerTimingType *COMPUTE_MAX_SCORE;
            static QueryProfilerTimingType *COUNT;
            static QueryProfilerTimingType *CREATE_WEIGHT;
            static QueryProfilerTimingType *MATCH;
            static QueryProfilerTimingType *NEXT_DOC;
            static QueryProfilerTimingType *SCORE;
            static QueryProfilerTimingType *SET_MIN_COMPETITIVE_SCORE;
            static QueryProfilerTimingType *SHALLOW_ADVANCE;

            ::java::lang::String toString() const;
            static QueryProfilerTimingType valueOf(const ::java::lang::String &);
            static JArray< QueryProfilerTimingType > values();
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(QueryProfilerTimingType);
          extern PyTypeObject *PY_TYPE(QueryProfilerTimingType);

          class t_QueryProfilerTimingType {
          public:
            PyObject_HEAD
            QueryProfilerTimingType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_QueryProfilerTimingType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const QueryProfilerTimingType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const QueryProfilerTimingType&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
