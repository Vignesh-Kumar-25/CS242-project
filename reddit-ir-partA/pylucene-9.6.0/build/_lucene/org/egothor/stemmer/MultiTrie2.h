#ifndef org_egothor_stemmer_MultiTrie2_H
#define org_egothor_stemmer_MultiTrie2_H

#include "org/egothor/stemmer/MultiTrie.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace io {
    class DataOutput;
    class IOException;
    class DataInput;
  }
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Reduce;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie2 : public ::org::egothor::stemmer::MultiTrie {
       public:
        enum {
          mid_init$_4f96af910856b303,
          mid_init$_43fc1d9961ad7029,
          mid_add_0e2dd6423c6180d1,
          mid_decompose_e257714e92ca3868,
          mid_getFully_ac74d89594f5ade0,
          mid_getLastOnPath_ac74d89594f5ade0,
          mid_reduce_b69a892ea1507a55,
          mid_store_10684753ac960dcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultiTrie2(jobject obj) : ::org::egothor::stemmer::MultiTrie(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultiTrie2(const MultiTrie2& obj) : ::org::egothor::stemmer::MultiTrie(obj) {}

        MultiTrie2(jboolean);
        MultiTrie2(const ::java::io::DataInput &);

        void add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
        JArray< ::java::lang::CharSequence > decompose(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
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
      extern PyType_Def PY_TYPE_DEF(MultiTrie2);
      extern PyTypeObject *PY_TYPE(MultiTrie2);

      class t_MultiTrie2 {
      public:
        PyObject_HEAD
        MultiTrie2 object;
        static PyObject *wrap_Object(const MultiTrie2&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
