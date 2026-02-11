#ifndef org_apache_lucene_queries_intervals_IntervalsSource_H
#define org_apache_lucene_queries_intervals_IntervalsSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          class IntervalsSource;
          class IntervalIterator;
          class IntervalMatchesIterator;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class QueryVisitor;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class IntervalsSource : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_intervals_9333285a421e648b,
              mid_matches_e2b420d5bdd6e46f,
              mid_minExtent_15aa3d485e96b665,
              mid_pullUpDisjunctions_b47b7eaa8124fb60,
              mid_toString_dc633f13a47328a8,
              mid_visit_e73ee4f6ed14c604,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalsSource(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalsSource(const IntervalsSource& obj) : ::java::lang::Object(obj) {}

            IntervalsSource();

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::queries::intervals::IntervalIterator intervals(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::intervals::IntervalMatchesIterator matches(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            jint minExtent() const;
            ::java::util::Collection pullUpDisjunctions() const;
            ::java::lang::String toString() const;
            void visit(const ::java::lang::String &, const ::org::apache::lucene::search::QueryVisitor &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntervalsSource);
          extern PyTypeObject *PY_TYPE(IntervalsSource);

          class t_IntervalsSource {
          public:
            PyObject_HEAD
            IntervalsSource object;
            static PyObject *wrap_Object(const IntervalsSource&);
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
