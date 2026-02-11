#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90NeighborArray_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90NeighborArray_H

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
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90NeighborArray : public ::java::lang::Object {
           public:
            enum {
              mid_init$_da425451c8de636b,
              mid_add_ad01d3552d962fe8,
              mid_clear_3353d9f14bbfd91a,
              mid_node_7880494ffe2d4089,
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

            explicit Lucene90NeighborArray(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90NeighborArray(const Lucene90NeighborArray& obj) : ::java::lang::Object(obj) {}

            Lucene90NeighborArray(jint);

            void add(jint, jfloat) const;
            void clear() const;
            JArray< jint > node() const;
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
      namespace backward_codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90NeighborArray);
          extern PyTypeObject *PY_TYPE(Lucene90NeighborArray);

          class t_Lucene90NeighborArray {
          public:
            PyObject_HEAD
            Lucene90NeighborArray object;
            static PyObject *wrap_Object(const Lucene90NeighborArray&);
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
