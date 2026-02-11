#ifndef org_egothor_stemmer_MultiTrie_H
#define org_egothor_stemmer_MultiTrie_H

#include "org/egothor/stemmer/Trie.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace io {
    class DataOutput;
    class IOException;
    class DataInput;
    class PrintStream;
  }
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Reduce;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie : public ::org::egothor::stemmer::Trie {
       public:
        enum {
          mid_init$_4f96af910856b303,
          mid_init$_43fc1d9961ad7029,
          mid_add_0e2dd6423c6180d1,
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

        explicit MultiTrie(jobject obj) : ::org::egothor::stemmer::Trie(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultiTrie(const MultiTrie& obj) : ::org::egothor::stemmer::Trie(obj) {}

        MultiTrie(jboolean);
        MultiTrie(const ::java::io::DataInput &);

        void add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        void printInfo(const ::java::io::PrintStream &, const ::java::lang::CharSequence &) const;
        ::org::egothor::stemmer::Trie reduce(const ::org::egothor::stemmer::Reduce &) const;
        void store(const ::java::io::DataOutput &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(MultiTrie);
      extern PyTypeObject *PY_TYPE(MultiTrie);

      class t_MultiTrie {
      public:
        PyObject_HEAD
        MultiTrie object;
        static PyObject *wrap_Object(const MultiTrie&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
