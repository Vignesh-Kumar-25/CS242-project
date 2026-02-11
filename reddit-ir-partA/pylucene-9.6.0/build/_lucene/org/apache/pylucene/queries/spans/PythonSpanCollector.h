#ifndef org_apache_pylucene_queries_spans_PythonSpanCollector_H
#define org_apache_pylucene_queries_spans_PythonSpanCollector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanCollector;
        }
      }
      namespace index {
        class Term;
        class PostingsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queries {
        namespace spans {

          class PythonSpanCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_collectLeaf_71faa65a0d37a079,
              mid_finalize_3353d9f14bbfd91a,
              mid_pythonDecRef_3353d9f14bbfd91a,
              mid_pythonExtension_058f5911dcf5d8a4,
              mid_pythonExtension_db2028ac45cd5b77,
              mid_reset_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSpanCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonSpanCollector(const PythonSpanCollector& obj) : ::java::lang::Object(obj) {}

            PythonSpanCollector();

            void collectLeaf(const ::org::apache::lucene::index::PostingsEnum &, jint, const ::org::apache::lucene::index::Term &) const;
            void finalize() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            void reset() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queries {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(PythonSpanCollector);
          extern PyTypeObject *PY_TYPE(PythonSpanCollector);

          class t_PythonSpanCollector {
          public:
            PyObject_HEAD
            PythonSpanCollector object;
            static PyObject *wrap_Object(const PythonSpanCollector&);
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
