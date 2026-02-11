#ifndef org_apache_lucene_codecs_CompetitiveImpactAccumulator_H
#define org_apache_lucene_codecs_CompetitiveImpactAccumulator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Impact;
      }
      namespace codecs {
        class CompetitiveImpactAccumulator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class CompetitiveImpactAccumulator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_6d2742abed5d70c9,
            mid_addAll_040846b53a9bdad6,
            mid_clear_3353d9f14bbfd91a,
            mid_getCompetitiveFreqNormPairs_b47b7eaa8124fb60,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompetitiveImpactAccumulator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompetitiveImpactAccumulator(const CompetitiveImpactAccumulator& obj) : ::java::lang::Object(obj) {}

          CompetitiveImpactAccumulator();

          void add(jint, jlong) const;
          void addAll(const CompetitiveImpactAccumulator &) const;
          void clear() const;
          ::java::util::Collection getCompetitiveFreqNormPairs() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(CompetitiveImpactAccumulator);
        extern PyTypeObject *PY_TYPE(CompetitiveImpactAccumulator);

        class t_CompetitiveImpactAccumulator {
        public:
          PyObject_HEAD
          CompetitiveImpactAccumulator object;
          static PyObject *wrap_Object(const CompetitiveImpactAccumulator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
