#ifndef org_egothor_stemmer_Optimizer_H
#define org_egothor_stemmer_Optimizer_H

#include "org/egothor/stemmer/Reduce.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Row;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Optimizer : public ::org::egothor::stemmer::Reduce {
       public:
        enum {
          mid_init$_3353d9f14bbfd91a,
          mid_merge_f67bf5ca2588e0b5,
          mid_optimize_ef284c708cb1ada1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Optimizer(jobject obj) : ::org::egothor::stemmer::Reduce(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Optimizer(const Optimizer& obj) : ::org::egothor::stemmer::Reduce(obj) {}

        Optimizer();

        ::org::egothor::stemmer::Row merge(const ::org::egothor::stemmer::Row &, const ::org::egothor::stemmer::Row &) const;
        ::org::egothor::stemmer::Trie optimize(const ::org::egothor::stemmer::Trie &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Optimizer);
      extern PyTypeObject *PY_TYPE(Optimizer);

      class t_Optimizer {
      public:
        PyObject_HEAD
        Optimizer object;
        static PyObject *wrap_Object(const Optimizer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
