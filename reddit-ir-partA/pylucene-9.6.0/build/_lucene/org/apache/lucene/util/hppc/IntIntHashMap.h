#ifndef org_apache_lucene_util_hppc_IntIntHashMap_H
#define org_apache_lucene_util_hppc_IntIntHashMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hppc {
          class IntIntHashMap$IntContainer;
          class IntIntHashMap$IntIntCursor;
          class IntIntHashMap;
          class IntIntHashMap$KeysContainer;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Iterable;
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hppc {

          class IntIntHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_da425451c8de636b,
              mid_init$_e24ade5f219c5841,
              mid_init$_1d3a031ed181fd0c,
              mid_addTo_cd4894667d94f4d3,
              mid_clear_3353d9f14bbfd91a,
              mid_clone_74e93606535be356,
              mid_containsKey_92eccba87b045bbc,
              mid_ensureCapacity_da425451c8de636b,
              mid_equals_6084f78e09b6c0c3,
              mid_from_4e57f9100118eb77,
              mid_get_58b165b57740feff,
              mid_getOrDefault_cd4894667d94f4d3,
              mid_hashCode_15aa3d485e96b665,
              mid_indexExists_92eccba87b045bbc,
              mid_indexGet_58b165b57740feff,
              mid_indexInsert_324f62b85ee857be,
              mid_indexOf_58b165b57740feff,
              mid_indexRemove_58b165b57740feff,
              mid_indexReplace_cd4894667d94f4d3,
              mid_isEmpty_ee8b0a5fa521ddac,
              mid_iterator_7c74834ad8788f5d,
              mid_keys_e92d7c8cf2671b79,
              mid_put_cd4894667d94f4d3,
              mid_putAll_2a7a3d1a7ace5fcc,
              mid_putIfAbsent_3f3121337a0f5026,
              mid_putOrAdd_6416259f45982937,
              mid_release_3353d9f14bbfd91a,
              mid_remove_58b165b57740feff,
              mid_size_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              mid_values_5beeac308121ddec,
              mid_nextIterationSeed_15aa3d485e96b665,
              mid_equalElements_e12b8411061bd0c1,
              mid_hashKey_58b165b57740feff,
              mid_verifyLoadFactor_7c88f981e0181669,
              mid_allocateBuffers_da425451c8de636b,
              mid_allocateThenInsertThenRehash_324f62b85ee857be,
              mid_shiftConflictingKeys_da425451c8de636b,
              mid_rehash_4936f1be3a600dae,
              max_mid
            };

            enum {
              fid_keys,
              fid_values,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntIntHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntIntHashMap(const IntIntHashMap& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_EXPECTED_ELEMENTS;
            static jfloat DEFAULT_LOAD_FACTOR;
            static jint MAX_HASH_ARRAY_LENGTH;
            static jfloat MAX_LOAD_FACTOR;
            static jint MIN_HASH_ARRAY_LENGTH;
            static jfloat MIN_LOAD_FACTOR;

            JArray< jint > _get_keys() const;
            void _set_keys(const JArray< jint > &) const;
            JArray< jint > _get_values() const;
            void _set_values(const JArray< jint > &) const;

            IntIntHashMap();
            IntIntHashMap(jint);
            IntIntHashMap(const ::java::lang::Iterable &);
            IntIntHashMap(jint, jdouble);

            jint addTo(jint, jint) const;
            void clear() const;
            IntIntHashMap clone() const;
            jboolean containsKey(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntIntHashMap from(const JArray< jint > &, const JArray< jint > &);
            jint get(jint) const;
            jint getOrDefault(jint, jint) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jint indexGet(jint) const;
            void indexInsert(jint, jint, jint) const;
            jint indexOf(jint) const;
            jint indexRemove(jint) const;
            jint indexReplace(jint, jint) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::util::hppc::IntIntHashMap$KeysContainer keys() const;
            jint put(jint, jint) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jint, jint) const;
            jint putOrAdd(jint, jint, jint) const;
            void release() const;
            jint remove(jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::util::hppc::IntIntHashMap$IntContainer values() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hppc {
          extern PyType_Def PY_TYPE_DEF(IntIntHashMap);
          extern PyTypeObject *PY_TYPE(IntIntHashMap);

          class t_IntIntHashMap {
          public:
            PyObject_HEAD
            IntIntHashMap object;
            static PyObject *wrap_Object(const IntIntHashMap&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
