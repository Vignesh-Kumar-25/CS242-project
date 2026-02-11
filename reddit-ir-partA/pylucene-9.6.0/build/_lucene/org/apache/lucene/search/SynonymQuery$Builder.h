#ifndef org_apache_lucene_search_SynonymQuery$Builder_H
#define org_apache_lucene_search_SynonymQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class SynonymQuery;
        class SynonymQuery$Builder;
      }
      namespace index {
        class Term;
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
      namespace search {

        class SynonymQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            mid_addTerm_aba82bc8b5edc116,
            mid_addTerm_81ffb142a2ab1800,
            mid_addTerm_04bd378b933a19ba,
            mid_build_ef1d5a6cc7af3b9f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SynonymQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SynonymQuery$Builder(const SynonymQuery$Builder& obj) : ::java::lang::Object(obj) {}

          SynonymQuery$Builder(const ::java::lang::String &);

          SynonymQuery$Builder addTerm(const ::org::apache::lucene::index::Term &) const;
          SynonymQuery$Builder addTerm(const ::org::apache::lucene::index::Term &, jfloat) const;
          SynonymQuery$Builder addTerm(const ::org::apache::lucene::util::BytesRef &, jfloat) const;
          ::org::apache::lucene::search::SynonymQuery build() const;
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
        extern PyType_Def PY_TYPE_DEF(SynonymQuery$Builder);
        extern PyTypeObject *PY_TYPE(SynonymQuery$Builder);

        class t_SynonymQuery$Builder {
        public:
          PyObject_HEAD
          SynonymQuery$Builder object;
          static PyObject *wrap_Object(const SynonymQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
