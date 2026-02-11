#ifndef org_apache_lucene_queries_intervals_IntervalQuery_H
#define org_apache_lucene_queries_intervals_IntervalQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class IntervalQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_f68b05c5e2397da9,
              mid_init$_443f6be503e82d05,
              mid_init$_9e59844e6c963600,
              mid_createWeight_9d45be3ef0fc5210,
              mid_equals_6084f78e09b6c0c3,
              mid_getField_dc633f13a47328a8,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalQuery(const IntervalQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &, jfloat);
            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &, jfloat, jfloat);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            jint hashCode() const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(IntervalQuery);
          extern PyTypeObject *PY_TYPE(IntervalQuery);

          class t_IntervalQuery {
          public:
            PyObject_HEAD
            IntervalQuery object;
            static PyObject *wrap_Object(const IntervalQuery&);
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
