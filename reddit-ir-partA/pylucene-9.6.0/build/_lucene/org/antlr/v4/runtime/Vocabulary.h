#ifndef org_antlr_v4_runtime_Vocabulary_H
#define org_antlr_v4_runtime_Vocabulary_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class Vocabulary : public ::java::lang::Object {
         public:
          enum {
            mid_getDisplayName_78a7b318cefaee15,
            mid_getLiteralName_78a7b318cefaee15,
            mid_getMaxTokenType_15aa3d485e96b665,
            mid_getSymbolicName_78a7b318cefaee15,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Vocabulary(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Vocabulary(const Vocabulary& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String getDisplayName(jint) const;
          ::java::lang::String getLiteralName(jint) const;
          jint getMaxTokenType() const;
          ::java::lang::String getSymbolicName(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(Vocabulary);
        extern PyTypeObject *PY_TYPE(Vocabulary);

        class t_Vocabulary {
        public:
          PyObject_HEAD
          Vocabulary object;
          static PyObject *wrap_Object(const Vocabulary&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
