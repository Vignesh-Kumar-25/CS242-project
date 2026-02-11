#ifndef org_apache_lucene_queries_intervals_FilteredIntervalsSource_H
#define org_apache_lucene_queries_intervals_FilteredIntervalsSource_H

#include "org/apache/lucene/queries/intervals/IntervalsSource.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class FilteredIntervalsSource : public ::org::apache::lucene::queries::intervals::IntervalsSource {
           public:
            enum {
              mid_init$_f68b05c5e2397da9,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_intervals_9333285a421e648b,
              mid_matches_e2b420d5bdd6e46f,
              mid_maxGaps_a4313fefa6a8cc81,
              mid_maxWidth_a4313fefa6a8cc81,
              mid_minExtent_15aa3d485e96b665,
              mid_pullUpDisjunctions_b47b7eaa8124fb60,
              mid_toString_dc633f13a47328a8,
              mid_visit_e73ee4f6ed14c604,
              mid_accept_b1f8ade68d8e1cba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilteredIntervalsSource(jobject obj) : ::org::apache::lucene::queries::intervals::IntervalsSource(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilteredIntervalsSource(const FilteredIntervalsSource& obj) : ::org::apache::lucene::queries::intervals::IntervalsSource(obj) {}

            FilteredIntervalsSource(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::queries::intervals::IntervalIterator intervals(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::intervals::IntervalMatchesIterator matches(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxGaps(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxWidth(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint);
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
          extern PyType_Def PY_TYPE_DEF(FilteredIntervalsSource);
          extern PyTypeObject *PY_TYPE(FilteredIntervalsSource);

          class t_FilteredIntervalsSource {
          public:
            PyObject_HEAD
            FilteredIntervalsSource object;
            static PyObject *wrap_Object(const FilteredIntervalsSource&);
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
