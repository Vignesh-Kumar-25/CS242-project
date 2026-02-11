#ifndef org_apache_lucene_analysis_CharArraySet_H
#define org_apache_lucene_analysis_CharArraySet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class Set;
  }
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArraySet : public ::java::util::AbstractSet {
         public:
          enum {
            mid_init$_5a9df8809b7e2c79,
            mid_init$_9ad2712ed48628b2,
            mid_add_e93984bec738d5ad,
            mid_add_77e0b5c3eb1962ba,
            mid_add_f6ed35df00b05129,
            mid_add_6084f78e09b6c0c3,
            mid_clear_3353d9f14bbfd91a,
            mid_contains_f6ed35df00b05129,
            mid_contains_6084f78e09b6c0c3,
            mid_contains_3d50bdb1e66e4e43,
            mid_copy_0d580fbaced8b8fa,
            mid_iterator_7c74834ad8788f5d,
            mid_size_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            mid_unmodifiableSet_7009b3b8df9830d2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArraySet(jobject obj) : ::java::util::AbstractSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArraySet(const CharArraySet& obj) : ::java::util::AbstractSet(obj) {}

          static CharArraySet *EMPTY_SET;

          CharArraySet(jint, jboolean);
          CharArraySet(const ::java::util::Collection &, jboolean);

          jboolean add(const JArray< jchar > &) const;
          jboolean add(const ::java::lang::String &) const;
          jboolean add(const ::java::lang::CharSequence &) const;
          jboolean add(const ::java::lang::Object &) const;
          void clear() const;
          jboolean contains(const ::java::lang::CharSequence &) const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean contains(const JArray< jchar > &, jint, jint) const;
          static CharArraySet copy(const ::java::util::Set &);
          ::java::util::Iterator iterator() const;
          jint size() const;
          ::java::lang::String toString() const;
          static CharArraySet unmodifiableSet(const CharArraySet &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharArraySet);
        extern PyTypeObject *PY_TYPE(CharArraySet);

        class t_CharArraySet {
        public:
          PyObject_HEAD
          CharArraySet object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArraySet *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArraySet&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArraySet&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
