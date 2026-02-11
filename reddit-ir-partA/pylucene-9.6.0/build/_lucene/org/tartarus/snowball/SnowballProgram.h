#ifndef org_tartarus_snowball_SnowballProgram_H
#define org_tartarus_snowball_SnowballProgram_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {

      class SnowballProgram : public ::java::lang::Object {
       public:
        enum {
          mid_getCurrent_dc633f13a47328a8,
          mid_getCurrentBuffer_44e5186a889ad767,
          mid_getCurrentBufferLength_15aa3d485e96b665,
          mid_setCurrent_4a883f7810d2effa,
          mid_setCurrent_8077910d0b141c99,
          mid_eq_s_f6ed35df00b05129,
          mid_slice_from_b00f79ee482db81d,
          mid_find_among_5443c1ce1320906a,
          mid_slice_del_3353d9f14bbfd91a,
          mid_find_among_b_5443c1ce1320906a,
          mid_eq_s_b_f6ed35df00b05129,
          mid_copy_from_381a4d350464a667,
          mid_in_grouping_3d50bdb1e66e4e43,
          mid_in_grouping_b_3d50bdb1e66e4e43,
          mid_out_grouping_3d50bdb1e66e4e43,
          mid_out_grouping_b_3d50bdb1e66e4e43,
          mid_replace_s_2ba7dd1b4cc312ee,
          mid_slice_check_3353d9f14bbfd91a,
          mid_slice_to_94e20f3c4a3e724b,
          mid_assign_to_94e20f3c4a3e724b,
          mid_insert_a0eaab1a7b81a07d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SnowballProgram(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SnowballProgram(const SnowballProgram& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getCurrent() const;
        JArray< jchar > getCurrentBuffer() const;
        jint getCurrentBufferLength() const;
        void setCurrent(const ::java::lang::String &) const;
        void setCurrent(const JArray< jchar > &, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      extern PyType_Def PY_TYPE_DEF(SnowballProgram);
      extern PyTypeObject *PY_TYPE(SnowballProgram);

      class t_SnowballProgram {
      public:
        PyObject_HEAD
        SnowballProgram object;
        static PyObject *wrap_Object(const SnowballProgram&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
