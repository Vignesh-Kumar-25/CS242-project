#ifndef org_apache_lucene_analysis_CharArrayMap$EntryIterator_H
#define org_apache_lucene_analysis_CharArrayMap$EntryIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Map$Entry;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArrayMap$EntryIterator : public ::java::lang::Object {
         public:
          enum {
            mid_currentValue_bdd51648087bae52,
            mid_hasNext_ee8b0a5fa521ddac,
            mid_next_d14cc47cc526a4ba,
            mid_nextKey_44e5186a889ad767,
            mid_nextKeyString_dc633f13a47328a8,
            mid_remove_3353d9f14bbfd91a,
            mid_setValue_73b517fb00cf5d09,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArrayMap$EntryIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArrayMap$EntryIterator(const CharArrayMap$EntryIterator& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object currentValue() const;
          jboolean hasNext() const;
          ::java::util::Map$Entry next() const;
          JArray< jchar > nextKey() const;
          ::java::lang::String nextKeyString() const;
          void remove() const;
          ::java::lang::Object setValue(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(CharArrayMap$EntryIterator);
        extern PyTypeObject *PY_TYPE(CharArrayMap$EntryIterator);

        class t_CharArrayMap$EntryIterator {
        public:
          PyObject_HEAD
          CharArrayMap$EntryIterator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArrayMap$EntryIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArrayMap$EntryIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArrayMap$EntryIterator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
