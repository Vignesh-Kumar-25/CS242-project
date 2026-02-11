#ifndef org_apache_lucene_index_Term_H
#define org_apache_lucene_index_Term_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
        class BytesRef;
        class Accountable;
      }
      namespace index {
        class Term;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Term : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            mid_init$_1c92f57e5f37bb8d,
            mid_init$_a1759014af2a70fe,
            mid_init$_6ab44b077b90d875,
            mid_bytes_e6961a1ebae5a29a,
            mid_compareTo_ef1d513059bfc629,
            mid_equals_6084f78e09b6c0c3,
            mid_field_dc633f13a47328a8,
            mid_hashCode_15aa3d485e96b665,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_text_dc633f13a47328a8,
            mid_toString_dc633f13a47328a8,
            mid_toString_2b43b5ef71f4a14f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Term(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Term(const Term& obj) : ::java::lang::Object(obj) {}

          Term(const ::java::lang::String &);
          Term(const ::java::lang::String &, const ::java::lang::String &);
          Term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          Term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRefBuilder &);

          ::org::apache::lucene::util::BytesRef bytes() const;
          jint compareTo(const Term &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String field() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
          ::java::lang::String text() const;
          ::java::lang::String toString() const;
          static ::java::lang::String toString(const ::org::apache::lucene::util::BytesRef &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(Term);
        extern PyTypeObject *PY_TYPE(Term);

        class t_Term {
        public:
          PyObject_HEAD
          Term object;
          static PyObject *wrap_Object(const Term&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
