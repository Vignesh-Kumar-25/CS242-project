#ifndef org_egothor_stemmer_Row_H
#define org_egothor_stemmer_Row_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Character;
    class Class;
  }
  namespace io {
    class DataOutput;
    class IOException;
    class DataInput;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Row : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3353d9f14bbfd91a,
          mid_init$_43fc1d9961ad7029,
          mid_getCells_15aa3d485e96b665,
          mid_getCellsPnt_15aa3d485e96b665,
          mid_getCellsVal_15aa3d485e96b665,
          mid_getCmd_83ae2563cb849543,
          mid_getCnt_83ae2563cb849543,
          mid_getRef_83ae2563cb849543,
          mid_print_b6308c09112257e7,
          mid_setCmd_c14b12ae6338c95a,
          mid_setRef_c14b12ae6338c95a,
          mid_store_10684753ac960dcf,
          mid_uniformCmd_f959dbe1893b2bbe,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Row(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Row(const Row& obj) : ::java::lang::Object(obj) {}

        Row();
        Row(const ::java::io::DataInput &);

        jint getCells() const;
        jint getCellsPnt() const;
        jint getCellsVal() const;
        jint getCmd(const ::java::lang::Character &) const;
        jint getCnt(const ::java::lang::Character &) const;
        jint getRef(const ::java::lang::Character &) const;
        void print(const ::java::io::PrintStream &) const;
        void setCmd(const ::java::lang::Character &, jint) const;
        void setRef(const ::java::lang::Character &, jint) const;
        void store(const ::java::io::DataOutput &) const;
        jint uniformCmd(jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Row);
      extern PyTypeObject *PY_TYPE(Row);

      class t_Row {
      public:
        PyObject_HEAD
        Row object;
        static PyObject *wrap_Object(const Row&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
