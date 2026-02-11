#ifndef org_apache_lucene_util_hnsw_NeighborQueue_H
#define org_apache_lucene_util_hnsw_NeighborQueue_H

#include "java/lang/Object.h"

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
      namespace util {
        namespace hnsw {

          class NeighborQueue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5a9df8809b7e2c79,
              mid_add_ad01d3552d962fe8,
              mid_clear_3353d9f14bbfd91a,
              mid_incomplete_ee8b0a5fa521ddac,
              mid_insertWithOverflow_4ffedd86daf05929,
              mid_markIncomplete_3353d9f14bbfd91a,
              mid_nodes_7880494ffe2d4089,
              mid_pop_15aa3d485e96b665,
              mid_setVisitedCount_da425451c8de636b,
              mid_size_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              mid_topNode_15aa3d485e96b665,
              mid_topScore_15cd8574741b1394,
              mid_visitedCount_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NeighborQueue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NeighborQueue(const NeighborQueue& obj) : ::java::lang::Object(obj) {}

            NeighborQueue(jint, jboolean);

            void add(jint, jfloat) const;
            void clear() const;
            jboolean incomplete() const;
            jboolean insertWithOverflow(jint, jfloat) const;
            void markIncomplete() const;
            JArray< jint > nodes() const;
            jint pop() const;
            void setVisitedCount(jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            jint topNode() const;
            jfloat topScore() const;
            jint visitedCount() const;
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
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(NeighborQueue);
          extern PyTypeObject *PY_TYPE(NeighborQueue);

          class t_NeighborQueue {
          public:
            PyObject_HEAD
            NeighborQueue object;
            static PyObject *wrap_Object(const NeighborQueue&);
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
