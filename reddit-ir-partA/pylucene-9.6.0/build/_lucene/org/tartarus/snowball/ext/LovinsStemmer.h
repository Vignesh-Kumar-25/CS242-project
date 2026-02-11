#ifndef org_tartarus_snowball_ext_LovinsStemmer_H
#define org_tartarus_snowball_ext_LovinsStemmer_H

#include "org/tartarus/snowball/SnowballStemmer.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {

        class LovinsStemmer : public ::org::tartarus::snowball::SnowballStemmer {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_r_A_ee8b0a5fa521ddac,
            mid_r_AA_ee8b0a5fa521ddac,
            mid_r_B_ee8b0a5fa521ddac,
            mid_r_BB_ee8b0a5fa521ddac,
            mid_r_C_ee8b0a5fa521ddac,
            mid_r_CC_ee8b0a5fa521ddac,
            mid_r_D_ee8b0a5fa521ddac,
            mid_r_E_ee8b0a5fa521ddac,
            mid_r_F_ee8b0a5fa521ddac,
            mid_r_G_ee8b0a5fa521ddac,
            mid_r_H_ee8b0a5fa521ddac,
            mid_r_I_ee8b0a5fa521ddac,
            mid_r_J_ee8b0a5fa521ddac,
            mid_r_K_ee8b0a5fa521ddac,
            mid_r_L_ee8b0a5fa521ddac,
            mid_r_M_ee8b0a5fa521ddac,
            mid_r_N_ee8b0a5fa521ddac,
            mid_r_O_ee8b0a5fa521ddac,
            mid_r_P_ee8b0a5fa521ddac,
            mid_r_Q_ee8b0a5fa521ddac,
            mid_r_R_ee8b0a5fa521ddac,
            mid_r_S_ee8b0a5fa521ddac,
            mid_r_T_ee8b0a5fa521ddac,
            mid_r_U_ee8b0a5fa521ddac,
            mid_r_V_ee8b0a5fa521ddac,
            mid_r_W_ee8b0a5fa521ddac,
            mid_r_X_ee8b0a5fa521ddac,
            mid_r_Y_ee8b0a5fa521ddac,
            mid_r_Z_ee8b0a5fa521ddac,
            mid_stem_ee8b0a5fa521ddac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LovinsStemmer(jobject obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LovinsStemmer(const LovinsStemmer& obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {}

          LovinsStemmer();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean r_A() const;
          jboolean r_AA() const;
          jboolean r_B() const;
          jboolean r_BB() const;
          jboolean r_C() const;
          jboolean r_CC() const;
          jboolean r_D() const;
          jboolean r_E() const;
          jboolean r_F() const;
          jboolean r_G() const;
          jboolean r_H() const;
          jboolean r_I() const;
          jboolean r_J() const;
          jboolean r_K() const;
          jboolean r_L() const;
          jboolean r_M() const;
          jboolean r_N() const;
          jboolean r_O() const;
          jboolean r_P() const;
          jboolean r_Q() const;
          jboolean r_R() const;
          jboolean r_S() const;
          jboolean r_T() const;
          jboolean r_U() const;
          jboolean r_V() const;
          jboolean r_W() const;
          jboolean r_X() const;
          jboolean r_Y() const;
          jboolean r_Z() const;
          jboolean stem() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {
        extern PyType_Def PY_TYPE_DEF(LovinsStemmer);
        extern PyTypeObject *PY_TYPE(LovinsStemmer);

        class t_LovinsStemmer {
        public:
          PyObject_HEAD
          LovinsStemmer object;
          static PyObject *wrap_Object(const LovinsStemmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
