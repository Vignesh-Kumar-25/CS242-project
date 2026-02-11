#ifndef org_apache_lucene_util_ArrayUtil_H
#define org_apache_lucene_util_ArrayUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class NumberFormatException;
    class Class;
    class Comparable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ArrayUtil$ByteArrayComparator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ArrayUtil : public ::java::lang::Object {
         public:
          enum {
            mid_compareUnsigned4_c21fc805c7168ff0,
            mid_compareUnsigned8_c21fc805c7168ff0,
            mid_copyOfSubArray_3d028ccb8a7ce8dd,
            mid_copyOfSubArray_2995d238d1d3087a,
            mid_copyOfSubArray_ff52108f37e535dd,
            mid_copyOfSubArray_8ec185e2fe88d0c8,
            mid_copyOfSubArray_580808140cd1c560,
            mid_copyOfSubArray_ce19009954f67e4b,
            mid_copyOfSubArray_02457a8251816245,
            mid_copyOfSubArray_f053149a0f2739a7,
            mid_getUnsignedComparator_3b1c60b76d3cfaed,
            mid_grow_02719320d99da6c6,
            mid_grow_25d71ed48e265732,
            mid_grow_ebb012ea4a8422da,
            mid_grow_5489bf48b917a180,
            mid_grow_77602e3166be86cb,
            mid_grow_5dc9a1e961d6163d,
            mid_grow_a53302d2d48784e1,
            mid_grow_0f3a5b23d534042a,
            mid_grow_8548fcbf05412e8a,
            mid_grow_5cedd241d60f62e3,
            mid_grow_317014e114661470,
            mid_grow_31571b0bba972e54,
            mid_grow_6b804638438f730e,
            mid_grow_f4ca588384f13ad0,
            mid_grow_d9dadb6c7b4baabf,
            mid_grow_ba9f13d2b21b01aa,
            mid_growExact_8548fcbf05412e8a,
            mid_growExact_5cedd241d60f62e3,
            mid_growExact_317014e114661470,
            mid_growExact_31571b0bba972e54,
            mid_growExact_6b804638438f730e,
            mid_growExact_f4ca588384f13ad0,
            mid_growExact_d9dadb6c7b4baabf,
            mid_growExact_ba9f13d2b21b01aa,
            mid_growNoCopy_8548fcbf05412e8a,
            mid_growNoCopy_6b804638438f730e,
            mid_growNoCopy_f4ca588384f13ad0,
            mid_hashCode_cb7d7dc978d108f2,
            mid_introSort_5a46c7764c39a786,
            mid_introSort_aba56d2a2ac0d103,
            mid_introSort_21cb31973bb2e568,
            mid_introSort_564f7df069e30f97,
            mid_oversize_cd4894667d94f4d3,
            mid_parseInt_cb7d7dc978d108f2,
            mid_parseInt_c25e3fce3da7313a,
            mid_select_7c39a8cad936e320,
            mid_swap_d91c556c1ab58337,
            mid_timSort_5a46c7764c39a786,
            mid_timSort_aba56d2a2ac0d103,
            mid_timSort_21cb31973bb2e568,
            mid_timSort_564f7df069e30f97,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ArrayUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ArrayUtil(const ArrayUtil& obj) : ::java::lang::Object(obj) {}

          static jint MAX_ARRAY_LENGTH;

          static jint compareUnsigned4(const JArray< jbyte > &, jint, const JArray< jbyte > &, jint);
          static jint compareUnsigned8(const JArray< jbyte > &, jint, const JArray< jbyte > &, jint);
          static JArray< jbyte > copyOfSubArray(const JArray< jbyte > &, jint, jint);
          static JArray< jchar > copyOfSubArray(const JArray< jchar > &, jint, jint);
          static JArray< jdouble > copyOfSubArray(const JArray< jdouble > &, jint, jint);
          static JArray< jfloat > copyOfSubArray(const JArray< jfloat > &, jint, jint);
          static JArray< jint > copyOfSubArray(const JArray< jint > &, jint, jint);
          static JArray< jlong > copyOfSubArray(const JArray< jlong > &, jint, jint);
          static JArray< ::java::lang::Object > copyOfSubArray(const JArray< ::java::lang::Object > &, jint, jint);
          static JArray< jshort > copyOfSubArray(const JArray< jshort > &, jint, jint);
          static ::org::apache::lucene::util::ArrayUtil$ByteArrayComparator getUnsignedComparator(jint);
          static JArray< jbyte > grow(const JArray< jbyte > &);
          static JArray< jchar > grow(const JArray< jchar > &);
          static JArray< jdouble > grow(const JArray< jdouble > &);
          static JArray< jfloat > grow(const JArray< jfloat > &);
          static JArray< jint > grow(const JArray< jint > &);
          static JArray< jlong > grow(const JArray< jlong > &);
          static JArray< ::java::lang::Object > grow(const JArray< ::java::lang::Object > &);
          static JArray< jshort > grow(const JArray< jshort > &);
          static JArray< jbyte > grow(const JArray< jbyte > &, jint);
          static JArray< jchar > grow(const JArray< jchar > &, jint);
          static JArray< jdouble > grow(const JArray< jdouble > &, jint);
          static JArray< jfloat > grow(const JArray< jfloat > &, jint);
          static JArray< jint > grow(const JArray< jint > &, jint);
          static JArray< jlong > grow(const JArray< jlong > &, jint);
          static JArray< ::java::lang::Object > grow(const JArray< ::java::lang::Object > &, jint);
          static JArray< jshort > grow(const JArray< jshort > &, jint);
          static JArray< jbyte > growExact(const JArray< jbyte > &, jint);
          static JArray< jchar > growExact(const JArray< jchar > &, jint);
          static JArray< jdouble > growExact(const JArray< jdouble > &, jint);
          static JArray< jfloat > growExact(const JArray< jfloat > &, jint);
          static JArray< jint > growExact(const JArray< jint > &, jint);
          static JArray< jlong > growExact(const JArray< jlong > &, jint);
          static JArray< ::java::lang::Object > growExact(const JArray< ::java::lang::Object > &, jint);
          static JArray< jshort > growExact(const JArray< jshort > &, jint);
          static JArray< jbyte > growNoCopy(const JArray< jbyte > &, jint);
          static JArray< jint > growNoCopy(const JArray< jint > &, jint);
          static JArray< jlong > growNoCopy(const JArray< jlong > &, jint);
          static jint hashCode(const JArray< jchar > &, jint, jint);
          static void introSort(const JArray< ::java::lang::Comparable > &);
          static void introSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
          static void introSort(const JArray< ::java::lang::Comparable > &, jint, jint);
          static void introSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
          static jint oversize(jint, jint);
          static jint parseInt(const JArray< jchar > &, jint, jint);
          static jint parseInt(const JArray< jchar > &, jint, jint, jint);
          static void select(const JArray< ::java::lang::Object > &, jint, jint, jint, const ::java::util::Comparator &);
          static void swap(const JArray< ::java::lang::Object > &, jint, jint);
          static void timSort(const JArray< ::java::lang::Comparable > &);
          static void timSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
          static void timSort(const JArray< ::java::lang::Comparable > &, jint, jint);
          static void timSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(ArrayUtil);
        extern PyTypeObject *PY_TYPE(ArrayUtil);

        class t_ArrayUtil {
        public:
          PyObject_HEAD
          ArrayUtil object;
          static PyObject *wrap_Object(const ArrayUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
