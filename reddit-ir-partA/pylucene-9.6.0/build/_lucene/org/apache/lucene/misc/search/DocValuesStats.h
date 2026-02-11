#ifndef org_apache_lucene_misc_search_DocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats_H

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
      namespace misc {
        namespace search {

          class DocValuesStats : public ::java::lang::Object {
           public:
            enum {
              mid_count_15aa3d485e96b665,
              mid_field_dc633f13a47328a8,
              mid_max_bdd51648087bae52,
              mid_min_bdd51648087bae52,
              mid_missing_15aa3d485e96b665,
              mid_doAccumulate_da425451c8de636b,
              mid_hasValue_92eccba87b045bbc,
              mid_init_7f6d289efb1f533f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats(const DocValuesStats& obj) : ::java::lang::Object(obj) {}

            jint count() const;
            ::java::lang::String field() const;
            ::java::lang::Object max$() const;
            ::java::lang::Object min$() const;
            jint missing() const;
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
      namespace misc {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(DocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats);

          class t_DocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
