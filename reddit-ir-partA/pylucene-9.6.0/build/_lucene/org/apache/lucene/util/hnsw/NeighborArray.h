#ifndef org_apache_lucene_util_hnsw_NeighborArray_H
#define org_apache_lucene_util_hnsw_NeighborArray_H

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

          class NeighborArray : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5a9df8809b7e2c79,
              mid_add_ad01d3552d962fe8,
              mid_clear_3353d9f14bbfd91a,
              mid_insertSorted_ad01d3552d962fe8,
              mid_node_7880494ffe2d4089,
              mid_removeIndex_da425451c8de636b,
              mid_removeLast_3353d9f14bbfd91a,
              mid_score_f9af2b083f7af575,
              mid_size_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NeighborArray(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NeighborArray(const NeighborArray& obj) : ::java::lang::Object(obj) {}

            NeighborArray(jint, jboolean);

            void add(jint, jfloat) const;
            void clear() const;
            void insertSorted(jint, jfloat) const;
            JArray< jint > node() const;
            void removeIndex(jint) const;
            void removeLast() const;
            JArray< jfloat > score() const;
            jint size() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(NeighborArray);
          extern PyTypeObject *PY_TYPE(NeighborArray);

          class t_NeighborArray {
          public:
            PyObject_HEAD
            NeighborArray object;
            static PyObject *wrap_Object(const NeighborArray&);
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
