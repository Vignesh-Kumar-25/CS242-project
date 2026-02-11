#ifndef org_apache_lucene_queries_spans_SpanNearQuery$Builder_H
#define org_apache_lucene_queries_spans_SpanNearQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanNearQuery$Builder;
          class SpanQuery;
          class SpanNearQuery;
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
      namespace queries {
        namespace spans {

          class SpanNearQuery$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_33d070369aa7d0f5,
              mid_addClause_05f53a76be63dd72,
              mid_addGap_81d38ee9225c76bf,
              mid_build_8eb9acf3ce7f3c4a,
              mid_setSlop_81d38ee9225c76bf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNearQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery$Builder(const SpanNearQuery$Builder& obj) : ::java::lang::Object(obj) {}

            SpanNearQuery$Builder(const ::java::lang::String &, jboolean);

            SpanNearQuery$Builder addClause(const ::org::apache::lucene::queries::spans::SpanQuery &) const;
            SpanNearQuery$Builder addGap(jint) const;
            ::org::apache::lucene::queries::spans::SpanNearQuery build() const;
            SpanNearQuery$Builder setSlop(jint) const;
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
      namespace queries {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery$Builder);
          extern PyTypeObject *PY_TYPE(SpanNearQuery$Builder);

          class t_SpanNearQuery$Builder {
          public:
            PyObject_HEAD
            SpanNearQuery$Builder object;
            static PyObject *wrap_Object(const SpanNearQuery$Builder&);
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
