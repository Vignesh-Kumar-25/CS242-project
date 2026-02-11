#ifndef org_apache_lucene_queries_intervals_IntervalFilter_H
#define org_apache_lucene_queries_intervals_IntervalFilter_H

#include "org/apache/lucene/queries/intervals/IntervalIterator.h"

namespace java {
  namespace lang {
    class Class;
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

          class IntervalFilter : public ::org::apache::lucene::queries::intervals::IntervalIterator {
           public:
            enum {
              mid_init$_a003ce7283b95e7b,
              mid_advance_58b165b57740feff,
              mid_cost_058f5911dcf5d8a4,
              mid_docID_15aa3d485e96b665,
              mid_end_15aa3d485e96b665,
              mid_gaps_15aa3d485e96b665,
              mid_matchCost_15cd8574741b1394,
              mid_nextDoc_15aa3d485e96b665,
              mid_nextInterval_15aa3d485e96b665,
              mid_start_15aa3d485e96b665,
              mid_accept_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalFilter(jobject obj) : ::org::apache::lucene::queries::intervals::IntervalIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalFilter(const IntervalFilter& obj) : ::org::apache::lucene::queries::intervals::IntervalIterator(obj) {}

            IntervalFilter(const ::org::apache::lucene::queries::intervals::IntervalIterator &);

            jint advance(jint) const;
            jlong cost() const;
            jint docID() const;
            jint end() const;
            jint gaps() const;
            jfloat matchCost() const;
            jint nextDoc() const;
            jint nextInterval() const;
            jint start() const;
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
          extern PyType_Def PY_TYPE_DEF(IntervalFilter);
          extern PyTypeObject *PY_TYPE(IntervalFilter);

          class t_IntervalFilter {
          public:
            PyObject_HEAD
            IntervalFilter object;
            static PyObject *wrap_Object(const IntervalFilter&);
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
