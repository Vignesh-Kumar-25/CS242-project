#ifndef org_apache_lucene_search_BlendedTermQuery$Builder_H
#define org_apache_lucene_search_BlendedTermQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermStates;
        class Term;
      }
      namespace search {
        class BlendedTermQuery$Builder;
        class BlendedTermQuery;
        class BlendedTermQuery$RewriteMethod;
      }
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
  namespace apache {
    namespace lucene {
      namespace search {

        class BlendedTermQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_4ff70c1b1d983472,
            mid_add_22cf4412f088976b,
            mid_add_a9f0b66b2b98e5ee,
            mid_build_c06bc968f755b69f,
            mid_setRewriteMethod_ee58013610d8a3b7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BlendedTermQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlendedTermQuery$Builder(const BlendedTermQuery$Builder& obj) : ::java::lang::Object(obj) {}

          BlendedTermQuery$Builder();

          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &) const;
          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &, jfloat) const;
          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &, jfloat, const ::org::apache::lucene::index::TermStates &) const;
          ::org::apache::lucene::search::BlendedTermQuery build() const;
          BlendedTermQuery$Builder setRewriteMethod(const ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(BlendedTermQuery$Builder);
        extern PyTypeObject *PY_TYPE(BlendedTermQuery$Builder);

        class t_BlendedTermQuery$Builder {
        public:
          PyObject_HEAD
          BlendedTermQuery$Builder object;
          static PyObject *wrap_Object(const BlendedTermQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
