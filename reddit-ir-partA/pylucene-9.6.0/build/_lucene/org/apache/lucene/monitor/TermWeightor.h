#ifndef org_apache_lucene_monitor_TermWeightor_H
#define org_apache_lucene_monitor_TermWeightor_H

#include "java/util/function/ToDoubleFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace monitor {
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
    class Map;
    class Set;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class TermWeightor : public ::java::util::function::ToDoubleFunction {
         public:
          enum {
            mid_combine_6ad45704784cc80e,
            mid_fieldWeightor_325389de39116e77,
            mid_fieldWeightor_80e12638f9d62918,
            mid_lengthWeightor_41e4414784970046,
            mid_termAndFieldWeightor_39bcf5c269faa7cb,
            mid_termAndFieldWeightor_80e12638f9d62918,
            mid_termFreqWeightor_ed1d0f3ba0a5ab26,
            mid_termWeightor_eecd0ae25a1fa3ee,
            mid_termWeightor_80e12638f9d62918,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermWeightor(jobject obj) : ::java::util::function::ToDoubleFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermWeightor(const TermWeightor& obj) : ::java::util::function::ToDoubleFunction(obj) {}

          static TermWeightor *DEFAULT;

          static TermWeightor combine(const JArray< TermWeightor > &);
          static TermWeightor fieldWeightor(jdouble, const JArray< ::java::lang::String > &);
          static TermWeightor fieldWeightor(jdouble, const ::java::util::Set &);
          static TermWeightor lengthWeightor(jdouble, jdouble);
          static TermWeightor termAndFieldWeightor(jdouble, const JArray< ::org::apache::lucene::index::Term > &);
          static TermWeightor termAndFieldWeightor(jdouble, const ::java::util::Set &);
          static TermWeightor termFreqWeightor(const ::java::util::Map &, jdouble, jdouble);
          static TermWeightor termWeightor(jdouble, const JArray< ::org::apache::lucene::util::BytesRef > &);
          static TermWeightor termWeightor(jdouble, const ::java::util::Set &);
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
        extern PyType_Def PY_TYPE_DEF(TermWeightor);
        extern PyTypeObject *PY_TYPE(TermWeightor);

        class t_TermWeightor {
        public:
          PyObject_HEAD
          TermWeightor object;
          static PyObject *wrap_Object(const TermWeightor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
