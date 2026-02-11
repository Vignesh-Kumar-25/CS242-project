#ifndef org_apache_lucene_analysis_CharArrayMap_H
#define org_apache_lucene_analysis_CharArrayMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace util {
    class Map;
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
        class CharArrayMap$EntrySet;
        class CharArraySet;
        class CharArrayMap;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArrayMap : public ::java::util::AbstractMap {
         public:
          enum {
            mid_init$_5a9df8809b7e2c79,
            mid_init$_683a4af515d516a2,
            mid_clear_3353d9f14bbfd91a,
            mid_containsKey_f6ed35df00b05129,
            mid_containsKey_6084f78e09b6c0c3,
            mid_containsKey_3d50bdb1e66e4e43,
            mid_copy_b11069daf610ca10,
            mid_emptyMap_6226f00f65c29a07,
            mid_entrySet_1ff78b5af06556d0,
            mid_get_4007c08c350a16ef,
            mid_get_73b517fb00cf5d09,
            mid_get_31b2d8d6f7d88a8b,
            mid_keySet_cbabc13c6309e190,
            mid_put_a4a5128dded18b6a,
            mid_put_0e5b7fa9206acad4,
            mid_put_fc64615e63557902,
            mid_put_eed45094c70976e5,
            mid_remove_73b517fb00cf5d09,
            mid_size_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            mid_unmodifiableMap_c615247cfc3a706f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArrayMap(jobject obj) : ::java::util::AbstractMap(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArrayMap(const CharArrayMap& obj) : ::java::util::AbstractMap(obj) {}

          CharArrayMap(jint, jboolean);
          CharArrayMap(const ::java::util::Map &, jboolean);

          void clear() const;
          jboolean containsKey(const ::java::lang::CharSequence &) const;
          jboolean containsKey(const ::java::lang::Object &) const;
          jboolean containsKey(const JArray< jchar > &, jint, jint) const;
          static CharArrayMap copy(const ::java::util::Map &);
          static CharArrayMap emptyMap();
          ::org::apache::lucene::analysis::CharArrayMap$EntrySet entrySet() const;
          ::java::lang::Object get(const ::java::lang::CharSequence &) const;
          ::java::lang::Object get(const ::java::lang::Object &) const;
          ::java::lang::Object get(const JArray< jchar > &, jint, jint) const;
          ::org::apache::lucene::analysis::CharArraySet keySet() const;
          ::java::lang::Object put(const JArray< jchar > &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::String &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
          ::java::lang::Object remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::lang::String toString() const;
          static CharArrayMap unmodifiableMap(const CharArrayMap &);
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
        extern PyType_Def PY_TYPE_DEF(CharArrayMap);
        extern PyTypeObject *PY_TYPE(CharArrayMap);

        class t_CharArrayMap {
        public:
          PyObject_HEAD
          CharArrayMap object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArrayMap *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArrayMap&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArrayMap&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
