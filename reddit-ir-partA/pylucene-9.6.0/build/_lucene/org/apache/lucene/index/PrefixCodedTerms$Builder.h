#ifndef org_apache_lucene_index_PrefixCodedTerms$Builder_H
#define org_apache_lucene_index_PrefixCodedTerms$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class Term;
        class PrefixCodedTerms;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PrefixCodedTerms$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_62e0fe03f75a3264,
            mid_add_a1759014af2a70fe,
            mid_finish_4566c15c936cfa62,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixCodedTerms$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixCodedTerms$Builder(const PrefixCodedTerms$Builder& obj) : ::java::lang::Object(obj) {}

          PrefixCodedTerms$Builder();

          void add(const ::org::apache::lucene::index::Term &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::index::PrefixCodedTerms finish() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PrefixCodedTerms$Builder);
        extern PyTypeObject *PY_TYPE(PrefixCodedTerms$Builder);

        class t_PrefixCodedTerms$Builder {
        public:
          PyObject_HEAD
          PrefixCodedTerms$Builder object;
          static PyObject *wrap_Object(const PrefixCodedTerms$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
