#ifndef org_apache_lucene_search_MultiPhraseQuery$Builder_H
#define org_apache_lucene_search_MultiPhraseQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class MultiPhraseQuery$Builder;
        class MultiPhraseQuery;
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

        class MultiPhraseQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_f0ad6631498255d3,
            mid_add_652a9c5db2ce9b14,
            mid_add_caaf386c44c45192,
            mid_add_c5247b437c29be7e,
            mid_build_a31aa6566d6ab583,
            mid_setSlop_b822b8b058620c1e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPhraseQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPhraseQuery$Builder(const MultiPhraseQuery$Builder& obj) : ::java::lang::Object(obj) {}

          MultiPhraseQuery$Builder();
          MultiPhraseQuery$Builder(const ::org::apache::lucene::search::MultiPhraseQuery &);

          MultiPhraseQuery$Builder add(const JArray< ::org::apache::lucene::index::Term > &) const;
          MultiPhraseQuery$Builder add(const ::org::apache::lucene::index::Term &) const;
          MultiPhraseQuery$Builder add(const JArray< ::org::apache::lucene::index::Term > &, jint) const;
          ::org::apache::lucene::search::MultiPhraseQuery build() const;
          MultiPhraseQuery$Builder setSlop(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiPhraseQuery$Builder);
        extern PyTypeObject *PY_TYPE(MultiPhraseQuery$Builder);

        class t_MultiPhraseQuery$Builder {
        public:
          PyObject_HEAD
          MultiPhraseQuery$Builder object;
          static PyObject *wrap_Object(const MultiPhraseQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
