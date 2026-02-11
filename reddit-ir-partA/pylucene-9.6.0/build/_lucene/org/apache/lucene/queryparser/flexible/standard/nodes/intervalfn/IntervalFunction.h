#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_intervalfn_IntervalFunction_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_intervalfn_IntervalFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {
              namespace intervalfn {

                class IntervalFunction : public ::java::lang::Object {
                 public:
                  enum {
                    mid_init$_3353d9f14bbfd91a,
                    mid_toIntervalSource_5d0008c035680524,
                    mid_toString_dc633f13a47328a8,
                    max_mid
                  };

                  static ::java::lang::Class *class$;
                  static jmethodID *mids$;
                  static bool live$;
                  static jclass initializeClass(bool);

                  explicit IntervalFunction(jobject obj) : ::java::lang::Object(obj) {
                    if (obj != NULL && mids$ == NULL)
                      env->getClass(initializeClass);
                  }
                  IntervalFunction(const IntervalFunction& obj) : ::java::lang::Object(obj) {}

                  IntervalFunction();

                  ::org::apache::lucene::queries::intervals::IntervalsSource toIntervalSource(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
                  ::java::lang::String toString() const;
                };
              }
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {
              namespace intervalfn {
                extern PyType_Def PY_TYPE_DEF(IntervalFunction);
                extern PyTypeObject *PY_TYPE(IntervalFunction);

                class t_IntervalFunction {
                public:
                  PyObject_HEAD
                  IntervalFunction object;
                  static PyObject *wrap_Object(const IntervalFunction&);
                  static PyObject *wrap_jobject(const jobject&);
                  static void install(PyObject *module);
                  static void initialize(PyObject *module);
                };
              }
            }
          }
        }
      }
    }
  }
}

#endif
