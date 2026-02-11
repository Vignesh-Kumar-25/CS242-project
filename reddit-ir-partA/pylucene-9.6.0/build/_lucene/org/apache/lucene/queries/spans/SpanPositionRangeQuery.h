#ifndef org_apache_lucene_queries_spans_SpanPositionRangeQuery_H
#define org_apache_lucene_queries_spans_SpanPositionRangeQuery_H

#include "org/apache/lucene/queries/spans/SpanPositionCheckQuery.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanQuery;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanPositionRangeQuery : public ::org::apache::lucene::queries::spans::SpanPositionCheckQuery {
           public:
            enum {
              mid_init$_d630ed66f4d1292f,
              mid_equals_6084f78e09b6c0c3,
              mid_getEnd_15aa3d485e96b665,
              mid_getStart_15aa3d485e96b665,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_04612c8360f09496,
              mid_acceptPosition_cf767f52747a2417,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionRangeQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanPositionCheckQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPositionRangeQuery(const SpanPositionRangeQuery& obj) : ::org::apache::lucene::queries::spans::SpanPositionCheckQuery(obj) {}

            SpanPositionRangeQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, jint, jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getEnd() const;
            jint getStart() const;
            jint hashCode() const;
            ::java::lang::String toString(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanPositionRangeQuery);
          extern PyTypeObject *PY_TYPE(SpanPositionRangeQuery);

          class t_SpanPositionRangeQuery {
          public:
            PyObject_HEAD
            SpanPositionRangeQuery object;
            static PyObject *wrap_Object(const SpanPositionRangeQuery&);
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
