#ifndef org_apache_lucene_monitor_QueryTree_H
#define org_apache_lucene_monitor_QueryTree_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace monitor {
        class QueryTree;
        class TermWeightor;
      }
      namespace index {
        class Term;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    namespace function {
      class Function;
      class BiConsumer;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class QueryTree : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_advancePhase_46b73ddaa07396a6,
            mid_anyTerm_c3518e5ed12b7f83,
            mid_collectTerms_d1ffa4fa159a0a7d,
            mid_conjunction_a809b249d73bc4d6,
            mid_disjunction_a809b249d73bc4d6,
            mid_term_797271359abd05b8,
            mid_term_a00621a9257471ea,
            mid_term_34c8ee2918d3bdbd,
            mid_toString_dc633f13a47328a8,
            mid_toString_78a7b318cefaee15,
            mid_weight_409d010a7a53d0d1,
            mid_space_78a7b318cefaee15,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryTree(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryTree(const QueryTree& obj) : ::java::lang::Object(obj) {}

          QueryTree();

          jboolean advancePhase(jdouble) const;
          static QueryTree anyTerm(const ::java::lang::String &);
          void collectTerms(const ::java::util::function::BiConsumer &) const;
          static QueryTree conjunction(const ::java::util::List &, const ::org::apache::lucene::monitor::TermWeightor &);
          static QueryTree disjunction(const ::java::util::List &, const ::org::apache::lucene::monitor::TermWeightor &);
          static QueryTree term(const ::org::apache::lucene::index::Term &, jdouble);
          static QueryTree term(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::monitor::TermWeightor &);
          static QueryTree term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jdouble);
          ::java::lang::String toString() const;
          ::java::lang::String toString(jint) const;
          jdouble weight() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(QueryTree);
        extern PyTypeObject *PY_TYPE(QueryTree);

        class t_QueryTree {
        public:
          PyObject_HEAD
          QueryTree object;
          static PyObject *wrap_Object(const QueryTree&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
