#ifndef org_apache_lucene_util_VectorUtil_H
#define org_apache_lucene_util_VectorUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class VectorUtil : public ::java::lang::Object {
         public:
          enum {
            mid_add_94184bf4326c2ecb,
            mid_cosine_295fcb27703e98d2,
            mid_cosine_263b4b85411520ea,
            mid_dotProduct_bf5986131909f8a8,
            mid_dotProduct_263b4b85411520ea,
            mid_dotProductScore_295fcb27703e98d2,
            mid_l2normalize_5489bf48b917a180,
            mid_l2normalize_e89ea326fd6e373a,
            mid_squareDistance_bf5986131909f8a8,
            mid_squareDistance_263b4b85411520ea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VectorUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VectorUtil(const VectorUtil& obj) : ::java::lang::Object(obj) {}

          static void add(const JArray< jfloat > &, const JArray< jfloat > &);
          static jfloat cosine(const JArray< jbyte > &, const JArray< jbyte > &);
          static jfloat cosine(const JArray< jfloat > &, const JArray< jfloat > &);
          static jint dotProduct(const JArray< jbyte > &, const JArray< jbyte > &);
          static jfloat dotProduct(const JArray< jfloat > &, const JArray< jfloat > &);
          static jfloat dotProductScore(const JArray< jbyte > &, const JArray< jbyte > &);
          static JArray< jfloat > l2normalize(const JArray< jfloat > &);
          static JArray< jfloat > l2normalize(const JArray< jfloat > &, jboolean);
          static jint squareDistance(const JArray< jbyte > &, const JArray< jbyte > &);
          static jfloat squareDistance(const JArray< jfloat > &, const JArray< jfloat > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(VectorUtil);
        extern PyTypeObject *PY_TYPE(VectorUtil);

        class t_VectorUtil {
        public:
          PyObject_HEAD
          VectorUtil object;
          static PyObject *wrap_Object(const VectorUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
