#ifndef org_apache_lucene_search_PhraseQuery$PostingsAndFreq_H
#define org_apache_lucene_search_PhraseQuery$PostingsAndFreq_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Comparable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ImpactsEnum;
        class Term;
        class PostingsEnum;
      }
      namespace search {
        class PhraseQuery$PostingsAndFreq;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PhraseQuery$PostingsAndFreq : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff3c22747dc9a7bf,
            mid_init$_22a5f57815b44288,
            mid_compareTo_d238dc1f08ccac43,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseQuery$PostingsAndFreq(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseQuery$PostingsAndFreq(const PhraseQuery$PostingsAndFreq& obj) : ::java::lang::Object(obj) {}

          PhraseQuery$PostingsAndFreq(const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::index::ImpactsEnum &, jint, const JArray< ::org::apache::lucene::index::Term > &);
          PhraseQuery$PostingsAndFreq(const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::index::ImpactsEnum &, jint, const ::java::util::List &);

          jint compareTo(const PhraseQuery$PostingsAndFreq &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(PhraseQuery$PostingsAndFreq);
        extern PyTypeObject *PY_TYPE(PhraseQuery$PostingsAndFreq);

        class t_PhraseQuery$PostingsAndFreq {
        public:
          PyObject_HEAD
          PhraseQuery$PostingsAndFreq object;
          static PyObject *wrap_Object(const PhraseQuery$PostingsAndFreq&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
