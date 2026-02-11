#ifndef org_apache_lucene_misc_SweetSpotSimilarity_H
#define org_apache_lucene_misc_SweetSpotSimilarity_H

#include "org/apache/lucene/search/similarities/ClassicSimilarity.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {

        class SweetSpotSimilarity : public ::org::apache::lucene::search::similarities::ClassicSimilarity {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_baselineTf_0d6098a24f544e47,
            mid_hyperbolicTf_0d6098a24f544e47,
            mid_lengthNorm_cc3c9b7e666e88d5,
            mid_setBaselineTfFactors_798c1353e7b22f8d,
            mid_setHyperbolicTfFactors_78b7d6f162c5e7c8,
            mid_setLengthNormFactors_5a19a37749455a69,
            mid_tf_0d6098a24f544e47,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SweetSpotSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SweetSpotSimilarity(const SweetSpotSimilarity& obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {}

          SweetSpotSimilarity();

          jfloat baselineTf(jfloat) const;
          jfloat hyperbolicTf(jfloat) const;
          jfloat lengthNorm(jint) const;
          void setBaselineTfFactors(jfloat, jfloat) const;
          void setHyperbolicTfFactors(jfloat, jfloat, jdouble, jfloat) const;
          void setLengthNormFactors(jint, jint, jfloat, jboolean) const;
          jfloat tf(jfloat) const;
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
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(SweetSpotSimilarity);
        extern PyTypeObject *PY_TYPE(SweetSpotSimilarity);

        class t_SweetSpotSimilarity {
        public:
          PyObject_HEAD
          SweetSpotSimilarity object;
          static PyObject *wrap_Object(const SweetSpotSimilarity&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
