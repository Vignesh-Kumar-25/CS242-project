#ifndef org_egothor_stemmer_Trie_H
#define org_egothor_stemmer_Trie_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace io {
    class DataOutput;
    class DataInput;
    class IOException;
    class PrintStream;
  }
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Row;
      class Reduce;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Trie : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4f96af910856b303,
          mid_init$_43fc1d9961ad7029,
          mid_init$_3ec073dc2ecfe364,
          mid_getAll_e257714e92ca3868,
          mid_getCells_15aa3d485e96b665,
          mid_getCellsPnt_15aa3d485e96b665,
          mid_getCellsVal_15aa3d485e96b665,
          mid_getFully_ac74d89594f5ade0,
          mid_getLastOnPath_ac74d89594f5ade0,
          mid_printInfo_992f2d2253a6f947,
          mid_reduce_b69a892ea1507a55,
          mid_store_10684753ac960dcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Trie(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Trie(const Trie& obj) : ::java::lang::Object(obj) {}

        Trie(jboolean);
        Trie(const ::java::io::DataInput &);
        Trie(jboolean, jint, const ::java::util::List &, const ::java::util::List &);

        JArray< ::java::lang::CharSequence > getAll(const ::java::lang::CharSequence &) const;
        jint getCells() const;
        jint getCellsPnt() const;
        jint getCellsVal() const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        void printInfo(const ::java::io::PrintStream &, const ::java::lang::CharSequence &) const;
        Trie reduce(const ::org::egothor::stemmer::Reduce &) const;
        void store(const ::java::io::DataOutput &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Trie);
      extern PyTypeObject *PY_TYPE(Trie);

      class t_Trie {
      public:
        PyObject_HEAD
        Trie object;
        static PyObject *wrap_Object(const Trie&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
