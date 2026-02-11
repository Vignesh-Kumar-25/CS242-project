#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class IndexSearcher;
        class Query;
        class ScoreMode;
        class QueryVisitor;
      }
      namespace queries {
        namespace payloads {
          class SpanPayloadCheckQuery$MatchOperation;
          class SpanPayloadCheckQuery$PayloadType;
        }
        namespace spans {
          class SpanWeight;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
        namespace payloads {

          class SpanPayloadCheckQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_1ef9c2890df88de8,
              mid_init$_ed3aae8ad6f258cc,
              mid_createWeight_18b5d04a7c3e57b6,
              mid_equals_6084f78e09b6c0c3,
              mid_getField_dc633f13a47328a8,
              mid_hashCode_15aa3d485e96b665,
              mid_rewrite_7da87bae82c9c483,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPayloadCheckQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPayloadCheckQuery(const SpanPayloadCheckQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanPayloadCheckQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::java::util::List &);
            SpanPayloadCheckQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::java::util::List &, const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery$PayloadType &, const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery$MatchOperation &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(SpanPayloadCheckQuery);
          extern PyTypeObject *PY_TYPE(SpanPayloadCheckQuery);

          class t_SpanPayloadCheckQuery {
          public:
            PyObject_HEAD
            SpanPayloadCheckQuery object;
            static PyObject *wrap_Object(const SpanPayloadCheckQuery&);
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
