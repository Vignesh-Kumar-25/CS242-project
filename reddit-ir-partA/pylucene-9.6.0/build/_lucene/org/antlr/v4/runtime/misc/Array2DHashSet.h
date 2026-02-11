#ifndef org_antlr_v4_runtime_misc_Array2DHashSet_H
#define org_antlr_v4_runtime_misc_Array2DHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {

          class Array2DHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_add_6084f78e09b6c0c3,
              mid_addAll_919ee2b3f5bcb8c4,
              mid_clear_3353d9f14bbfd91a,
              mid_contains_6084f78e09b6c0c3,
              mid_containsAll_919ee2b3f5bcb8c4,
              mid_containsFast_6084f78e09b6c0c3,
              mid_equals_6084f78e09b6c0c3,
              mid_get_73b517fb00cf5d09,
              mid_getOrAdd_73b517fb00cf5d09,
              mid_hashCode_15aa3d485e96b665,
              mid_isEmpty_ee8b0a5fa521ddac,
              mid_iterator_7c74834ad8788f5d,
              mid_remove_6084f78e09b6c0c3,
              mid_removeAll_919ee2b3f5bcb8c4,
              mid_removeFast_6084f78e09b6c0c3,
              mid_retainAll_919ee2b3f5bcb8c4,
              mid_size_15aa3d485e96b665,
              mid_toArray_c2c4aa8d9e7500a9,
              mid_toArray_a53302d2d48784e1,
              mid_toString_dc633f13a47328a8,
              mid_toTableString_dc633f13a47328a8,
              mid_getBucket_cc82b01b9199bc71,
              mid_asElementType_73b517fb00cf5d09,
              mid_createBuckets_91aa20a1c9bedcd5,
              mid_createBucket_f5e162461f699782,
              mid_getOrAddImpl_73b517fb00cf5d09,
              mid_expand_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Array2DHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Array2DHashSet(const Array2DHashSet& obj) : ::java::lang::Object(obj) {}

            static jint INITAL_BUCKET_CAPACITY;
            static jint INITAL_CAPACITY;
            static jdouble LOAD_FACTOR;

            Array2DHashSet();

            jboolean add(const ::java::lang::Object &) const;
            jboolean addAll(const ::java::util::Collection &) const;
            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            jboolean containsAll(const ::java::util::Collection &) const;
            jboolean containsFast(const ::java::lang::Object &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::Object get(const ::java::lang::Object &) const;
            ::java::lang::Object getOrAdd(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jboolean remove(const ::java::lang::Object &) const;
            jboolean removeAll(const ::java::util::Collection &) const;
            jboolean removeFast(const ::java::lang::Object &) const;
            jboolean retainAll(const ::java::util::Collection &) const;
            jint size() const;
            JArray< ::java::lang::Object > toArray() const;
            JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
            ::java::lang::String toString() const;
            ::java::lang::String toTableString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {
          extern PyType_Def PY_TYPE_DEF(Array2DHashSet);
          extern PyTypeObject *PY_TYPE(Array2DHashSet);

          class t_Array2DHashSet {
          public:
            PyObject_HEAD
            Array2DHashSet object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Array2DHashSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Array2DHashSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Array2DHashSet&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
