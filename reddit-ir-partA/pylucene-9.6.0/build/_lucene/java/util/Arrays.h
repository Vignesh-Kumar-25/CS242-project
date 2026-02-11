#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class DoubleBinaryOperator;
      class IntFunction;
      class IntToLongFunction;
      class IntBinaryOperator;
      class IntUnaryOperator;
      class BinaryOperator;
      class LongBinaryOperator;
      class IntToDoubleFunction;
    }
    class Comparator;
    class List;
    class Spliterator;
    class Spliterator$OfLong;
    class Spliterator$OfDouble;
    class Spliterator$OfInt;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Arrays : public ::java::lang::Object {
     public:
      enum {
        mid_asList_82453859a0e984ab,
        mid_binarySearch_fc97219136568a65,
        mid_binarySearch_4a958ab3df1ec575,
        mid_binarySearch_deba508920ed0288,
        mid_binarySearch_47596db609ce97c2,
        mid_binarySearch_1604315fb0127841,
        mid_binarySearch_700f49483a7fac5b,
        mid_binarySearch_83ee8f806ce5e4d0,
        mid_binarySearch_f0a7ae23061339da,
        mid_binarySearch_5714f2295818cde4,
        mid_binarySearch_8082d46dc57c709e,
        mid_binarySearch_045b3f0a0a29be56,
        mid_binarySearch_1b2808661fa4cda9,
        mid_binarySearch_6a096c2331640fd9,
        mid_binarySearch_53e589389ea78b4f,
        mid_binarySearch_56e519c5d48bcd0f,
        mid_binarySearch_90ba768ee84da6a2,
        mid_binarySearch_340e575fd604e6e7,
        mid_binarySearch_c908ba5e3e182210,
        mid_compare_bf5986131909f8a8,
        mid_compare_a16161086fc3f8f0,
        mid_compare_7758fc6111a1e845,
        mid_compare_a5a0192bc3377535,
        mid_compare_57f1828e8f6114ae,
        mid_compare_261eb6f767b08e6d,
        mid_compare_ab159c8fea49f986,
        mid_compare_04ae6cb13bd16780,
        mid_compare_a0f4298a0955645d,
        mid_compare_2c2726671f66eb48,
        mid_compare_6bd929767c32b164,
        mid_compare_7df5978d181a2b98,
        mid_compare_5447e6bf65c2dc49,
        mid_compare_d81eca4d8454b8bb,
        mid_compare_94f82011a7f9d835,
        mid_compare_c4724c0147dd76c1,
        mid_compare_41eb057f283c3b97,
        mid_compare_36fbca6119c39541,
        mid_compare_336b5179bd2c8ae7,
        mid_compare_958554a5261f21a3,
        mid_compareUnsigned_bf5986131909f8a8,
        mid_compareUnsigned_57f1828e8f6114ae,
        mid_compareUnsigned_261eb6f767b08e6d,
        mid_compareUnsigned_04ae6cb13bd16780,
        mid_compareUnsigned_6bd929767c32b164,
        mid_compareUnsigned_94f82011a7f9d835,
        mid_compareUnsigned_c4724c0147dd76c1,
        mid_compareUnsigned_36fbca6119c39541,
        mid_copyOf_8548fcbf05412e8a,
        mid_copyOf_5cedd241d60f62e3,
        mid_copyOf_317014e114661470,
        mid_copyOf_31571b0bba972e54,
        mid_copyOf_6b804638438f730e,
        mid_copyOf_f4ca588384f13ad0,
        mid_copyOf_d9dadb6c7b4baabf,
        mid_copyOf_ba9f13d2b21b01aa,
        mid_copyOf_3d3679e2b35e25a1,
        mid_copyOf_6b9122e9827df64d,
        mid_copyOfRange_3d028ccb8a7ce8dd,
        mid_copyOfRange_2995d238d1d3087a,
        mid_copyOfRange_ff52108f37e535dd,
        mid_copyOfRange_8ec185e2fe88d0c8,
        mid_copyOfRange_580808140cd1c560,
        mid_copyOfRange_ce19009954f67e4b,
        mid_copyOfRange_02457a8251816245,
        mid_copyOfRange_f053149a0f2739a7,
        mid_copyOfRange_992f8b48d6c7a48e,
        mid_copyOfRange_163eaa19d208f456,
        mid_deepEquals_c89dc87e5fd7e659,
        mid_deepHashCode_ebd6529be94ecf3c,
        mid_deepToString_a22c7551dd42f335,
        mid_equals_abb8c9ce47036f51,
        mid_equals_bef50ea14e43e2c7,
        mid_equals_e5169633ceac1be7,
        mid_equals_7e17a18e8820f646,
        mid_equals_f992d4ca549c41cc,
        mid_equals_6ebacc5d3d5c138f,
        mid_equals_c89dc87e5fd7e659,
        mid_equals_07f0fe8f76c6447f,
        mid_equals_ecf1ee9a17cd68d4,
        mid_equals_17e1cbacda81906f,
        mid_equals_e7368c7e782e2504,
        mid_equals_b4448ef62d3e4ee8,
        mid_equals_8c972b9b292975ed,
        mid_equals_7930c76f910a0663,
        mid_equals_fe76664cc806b68f,
        mid_equals_c57097783a9b9d5c,
        mid_equals_5c8c4b6194bbb57f,
        mid_equals_d4f1e9ab48c55d5b,
        mid_equals_38499b19f9feb7a7,
        mid_equals_3400fde5e263e4ac,
        mid_fill_f2add010aa1a7717,
        mid_fill_2b5c0322f1d19a8e,
        mid_fill_c8666ded83cf7f44,
        mid_fill_56d0c6f0b479a8e0,
        mid_fill_1125ef6d42b71f88,
        mid_fill_145db64209ff94bc,
        mid_fill_83bdbd2d92f51118,
        mid_fill_6d135f286c8cc6d8,
        mid_fill_65a9c933075485c5,
        mid_fill_78357ff83b2dd8f0,
        mid_fill_23535e15a4a07fc5,
        mid_fill_ff6805fe860d0ff7,
        mid_fill_796a84614e055432,
        mid_fill_45b4c5884aefbdec,
        mid_fill_1ea62e90ebe6941a,
        mid_fill_797aa1676b2811d0,
        mid_fill_e152737ba4920c96,
        mid_fill_b5f7c126c985928d,
        mid_hashCode_a930f0564cc31e6f,
        mid_hashCode_81979beed9bf74aa,
        mid_hashCode_0cefc3db265e0d31,
        mid_hashCode_d5e2bbc2a9054d18,
        mid_hashCode_b7462ac2a96128e8,
        mid_hashCode_f06f0fc80543c083,
        mid_hashCode_ebd6529be94ecf3c,
        mid_hashCode_d5d7f40288a07682,
        mid_hashCode_85d266bee30f6cb2,
        mid_mismatch_bf5986131909f8a8,
        mid_mismatch_a16161086fc3f8f0,
        mid_mismatch_7758fc6111a1e845,
        mid_mismatch_a5a0192bc3377535,
        mid_mismatch_57f1828e8f6114ae,
        mid_mismatch_261eb6f767b08e6d,
        mid_mismatch_6219d2fd43a908c2,
        mid_mismatch_04ae6cb13bd16780,
        mid_mismatch_a0f4298a0955645d,
        mid_mismatch_2c2726671f66eb48,
        mid_mismatch_6bd929767c32b164,
        mid_mismatch_7df5978d181a2b98,
        mid_mismatch_5447e6bf65c2dc49,
        mid_mismatch_d81eca4d8454b8bb,
        mid_mismatch_94f82011a7f9d835,
        mid_mismatch_c4724c0147dd76c1,
        mid_mismatch_e84a5764a1aba0f1,
        mid_mismatch_36fbca6119c39541,
        mid_mismatch_336b5179bd2c8ae7,
        mid_mismatch_958554a5261f21a3,
        mid_parallelPrefix_1db635acf7df4aed,
        mid_parallelPrefix_1f6197ab2e0a70bb,
        mid_parallelPrefix_32b0e01968775f62,
        mid_parallelPrefix_861a683f42d0a843,
        mid_parallelPrefix_4f43c5b7bd6c1927,
        mid_parallelPrefix_32da9ac1fb2968e3,
        mid_parallelPrefix_f6ca56a6f436896c,
        mid_parallelPrefix_eb79d80bb2236b32,
        mid_parallelSetAll_cd3a0c34edc7cd16,
        mid_parallelSetAll_33d4a9a0c38bee93,
        mid_parallelSetAll_ec11805399ad0853,
        mid_parallelSetAll_7223c4717171b3b1,
        mid_parallelSort_e11791089a78895a,
        mid_parallelSort_7d636082e71ec259,
        mid_parallelSort_35819246f67b1e9e,
        mid_parallelSort_67ba706c3e390a2e,
        mid_parallelSort_6b9509e20a616019,
        mid_parallelSort_dcb1a1b31819b4fc,
        mid_parallelSort_5a46c7764c39a786,
        mid_parallelSort_705f8be867b64e9d,
        mid_parallelSort_aba56d2a2ac0d103,
        mid_parallelSort_411019d3e65b5a2d,
        mid_parallelSort_9df2689bc3d19600,
        mid_parallelSort_a2b29d41cb155dcd,
        mid_parallelSort_31ea054a5cbac743,
        mid_parallelSort_4aa7571f728d6752,
        mid_parallelSort_4e526d67da638372,
        mid_parallelSort_21cb31973bb2e568,
        mid_parallelSort_0371cf67681ebeb2,
        mid_parallelSort_564f7df069e30f97,
        mid_setAll_7223c4717171b3b1,
        mid_setAll_cd3a0c34edc7cd16,
        mid_setAll_33d4a9a0c38bee93,
        mid_setAll_ec11805399ad0853,
        mid_sort_e11791089a78895a,
        mid_sort_7d636082e71ec259,
        mid_sort_35819246f67b1e9e,
        mid_sort_67ba706c3e390a2e,
        mid_sort_6b9509e20a616019,
        mid_sort_dcb1a1b31819b4fc,
        mid_sort_4efd6e4020c96366,
        mid_sort_705f8be867b64e9d,
        mid_sort_aba56d2a2ac0d103,
        mid_sort_411019d3e65b5a2d,
        mid_sort_9df2689bc3d19600,
        mid_sort_a2b29d41cb155dcd,
        mid_sort_31ea054a5cbac743,
        mid_sort_4aa7571f728d6752,
        mid_sort_4e526d67da638372,
        mid_sort_d91c556c1ab58337,
        mid_sort_0371cf67681ebeb2,
        mid_sort_564f7df069e30f97,
        mid_spliterator_eab1adcbba570cf4,
        mid_spliterator_2c4861da93facb75,
        mid_spliterator_0eb34c730a38c1f1,
        mid_spliterator_195fbb195e4adbf1,
        mid_spliterator_549a34007b9a0bee,
        mid_spliterator_bdb9578011b08be3,
        mid_spliterator_7f722426786ce18f,
        mid_spliterator_528f3d374e402020,
        mid_toString_7784542c520dfdce,
        mid_toString_4ca7828cf6cc172c,
        mid_toString_4d5e945eef09e5c4,
        mid_toString_e21209c4618f6143,
        mid_toString_7321533c97a90eec,
        mid_toString_957907ea77d1729c,
        mid_toString_a22c7551dd42f335,
        mid_toString_5a035022d7f3da2f,
        mid_toString_d22cced40ea008f5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Arrays(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Arrays(const Arrays& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List asList(const JArray< ::java::lang::Object > &);
      static jint binarySearch(const JArray< jbyte > &, jbyte);
      static jint binarySearch(const JArray< jchar > &, jchar);
      static jint binarySearch(const JArray< jdouble > &, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jfloat);
      static jint binarySearch(const JArray< jint > &, jint);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jlong > &, jlong);
      static jint binarySearch(const JArray< jshort > &, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint binarySearch(const JArray< jbyte > &, jint, jint, jbyte);
      static jint binarySearch(const JArray< jchar > &, jint, jint, jchar);
      static jint binarySearch(const JArray< jdouble > &, jint, jint, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jint, jint, jfloat);
      static jint binarySearch(const JArray< jint > &, jint, jint, jint);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jlong > &, jint, jint, jlong);
      static jint binarySearch(const JArray< jshort > &, jint, jint, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint compare(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint compare(const JArray< jchar > &, const JArray< jchar > &);
      static jint compare(const JArray< jdouble > &, const JArray< jdouble > &);
      static jint compare(const JArray< jfloat > &, const JArray< jfloat > &);
      static jint compare(const JArray< jint > &, const JArray< jint > &);
      static jint compare(const JArray< jlong > &, const JArray< jlong > &);
      static jint compare(const JArray< ::java::lang::Comparable > &, const JArray< ::java::lang::Comparable > &);
      static jint compare(const JArray< jshort > &, const JArray< jshort > &);
      static jint compare(const JArray< jboolean > &, const JArray< jboolean > &);
      static jint compare(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jint compare(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint compare(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jint compare(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jint compare(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jint compare(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint compare(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint compare(const JArray< ::java::lang::Comparable > &, jint, jint, const JArray< ::java::lang::Comparable > &, jint, jint);
      static jint compare(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jint compare(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jint compare(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static jint compareUnsigned(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint compareUnsigned(const JArray< jint > &, const JArray< jint > &);
      static jint compareUnsigned(const JArray< jlong > &, const JArray< jlong > &);
      static jint compareUnsigned(const JArray< jshort > &, const JArray< jshort > &);
      static jint compareUnsigned(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint compareUnsigned(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint compareUnsigned(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint compareUnsigned(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static JArray< jbyte > copyOf(const JArray< jbyte > &, jint);
      static JArray< jchar > copyOf(const JArray< jchar > &, jint);
      static JArray< jdouble > copyOf(const JArray< jdouble > &, jint);
      static JArray< jfloat > copyOf(const JArray< jfloat > &, jint);
      static JArray< jint > copyOf(const JArray< jint > &, jint);
      static JArray< jlong > copyOf(const JArray< jlong > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint);
      static JArray< jshort > copyOf(const JArray< jshort > &, jint);
      static JArray< jboolean > copyOf(const JArray< jboolean > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint, const ::java::lang::Class &);
      static JArray< jbyte > copyOfRange(const JArray< jbyte > &, jint, jint);
      static JArray< jchar > copyOfRange(const JArray< jchar > &, jint, jint);
      static JArray< jdouble > copyOfRange(const JArray< jdouble > &, jint, jint);
      static JArray< jfloat > copyOfRange(const JArray< jfloat > &, jint, jint);
      static JArray< jint > copyOfRange(const JArray< jint > &, jint, jint);
      static JArray< jlong > copyOfRange(const JArray< jlong > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint);
      static JArray< jshort > copyOfRange(const JArray< jshort > &, jint, jint);
      static JArray< jboolean > copyOfRange(const JArray< jboolean > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Class &);
      static jboolean deepEquals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint deepHashCode(const JArray< ::java::lang::Object > &);
      static ::java::lang::String deepToString(const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jbyte > &, const JArray< jbyte > &);
      static jboolean equals(const JArray< jchar > &, const JArray< jchar > &);
      static jboolean equals(const JArray< jdouble > &, const JArray< jdouble > &);
      static jboolean equals(const JArray< jfloat > &, const JArray< jfloat > &);
      static jboolean equals(const JArray< jint > &, const JArray< jint > &);
      static jboolean equals(const JArray< jlong > &, const JArray< jlong > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jshort > &, const JArray< jshort > &);
      static jboolean equals(const JArray< jboolean > &, const JArray< jboolean > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jboolean equals(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jboolean equals(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jboolean equals(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jboolean equals(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jboolean equals(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jboolean equals(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jboolean equals(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint);
      static jboolean equals(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jboolean equals(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jboolean equals(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void fill(const JArray< jbyte > &, jbyte);
      static void fill(const JArray< jchar > &, jchar);
      static void fill(const JArray< jboolean > &, jboolean);
      static void fill(const JArray< jdouble > &, jdouble);
      static void fill(const JArray< jfloat > &, jfloat);
      static void fill(const JArray< jint > &, jint);
      static void fill(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jlong);
      static void fill(const JArray< jshort > &, jshort);
      static void fill(const JArray< jbyte > &, jint, jint, jbyte);
      static void fill(const JArray< jchar > &, jint, jint, jchar);
      static void fill(const JArray< jdouble > &, jint, jint, jdouble);
      static void fill(const JArray< jfloat > &, jint, jint, jfloat);
      static void fill(const JArray< jint > &, jint, jint, jint);
      static void fill(const JArray< jboolean > &, jint, jint, jboolean);
      static void fill(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jint, jint, jlong);
      static void fill(const JArray< jshort > &, jint, jint, jshort);
      static jint hashCode(const JArray< jbyte > &);
      static jint hashCode(const JArray< jchar > &);
      static jint hashCode(const JArray< jdouble > &);
      static jint hashCode(const JArray< jfloat > &);
      static jint hashCode(const JArray< jint > &);
      static jint hashCode(const JArray< jlong > &);
      static jint hashCode(const JArray< ::java::lang::Object > &);
      static jint hashCode(const JArray< jshort > &);
      static jint hashCode(const JArray< jboolean > &);
      static jint mismatch(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint mismatch(const JArray< jchar > &, const JArray< jchar > &);
      static jint mismatch(const JArray< jdouble > &, const JArray< jdouble > &);
      static jint mismatch(const JArray< jfloat > &, const JArray< jfloat > &);
      static jint mismatch(const JArray< jint > &, const JArray< jint > &);
      static jint mismatch(const JArray< jlong > &, const JArray< jlong > &);
      static jint mismatch(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint mismatch(const JArray< jshort > &, const JArray< jshort > &);
      static jint mismatch(const JArray< jboolean > &, const JArray< jboolean > &);
      static jint mismatch(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jint mismatch(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint mismatch(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jint mismatch(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jint mismatch(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jint mismatch(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint mismatch(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint mismatch(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint);
      static jint mismatch(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jint mismatch(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jint mismatch(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void parallelPrefix(const JArray< ::java::lang::Object > &, const ::java::util::function::BinaryOperator &);
      static void parallelPrefix(const JArray< jdouble > &, const ::java::util::function::DoubleBinaryOperator &);
      static void parallelPrefix(const JArray< jint > &, const ::java::util::function::IntBinaryOperator &);
      static void parallelPrefix(const JArray< jlong > &, const ::java::util::function::LongBinaryOperator &);
      static void parallelPrefix(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::function::BinaryOperator &);
      static void parallelPrefix(const JArray< jdouble > &, jint, jint, const ::java::util::function::DoubleBinaryOperator &);
      static void parallelPrefix(const JArray< jint > &, jint, jint, const ::java::util::function::IntBinaryOperator &);
      static void parallelPrefix(const JArray< jlong > &, jint, jint, const ::java::util::function::LongBinaryOperator &);
      static void parallelSetAll(const JArray< jdouble > &, const ::java::util::function::IntToDoubleFunction &);
      static void parallelSetAll(const JArray< jlong > &, const ::java::util::function::IntToLongFunction &);
      static void parallelSetAll(const JArray< jint > &, const ::java::util::function::IntUnaryOperator &);
      static void parallelSetAll(const JArray< ::java::lang::Object > &, const ::java::util::function::IntFunction &);
      static void parallelSort(const JArray< jbyte > &);
      static void parallelSort(const JArray< jchar > &);
      static void parallelSort(const JArray< jdouble > &);
      static void parallelSort(const JArray< jfloat > &);
      static void parallelSort(const JArray< jint > &);
      static void parallelSort(const JArray< jlong > &);
      static void parallelSort(const JArray< ::java::lang::Comparable > &);
      static void parallelSort(const JArray< jshort > &);
      static void parallelSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void parallelSort(const JArray< jbyte > &, jint, jint);
      static void parallelSort(const JArray< jchar > &, jint, jint);
      static void parallelSort(const JArray< jdouble > &, jint, jint);
      static void parallelSort(const JArray< jfloat > &, jint, jint);
      static void parallelSort(const JArray< jint > &, jint, jint);
      static void parallelSort(const JArray< jlong > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Comparable > &, jint, jint);
      static void parallelSort(const JArray< jshort > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void setAll(const JArray< ::java::lang::Object > &, const ::java::util::function::IntFunction &);
      static void setAll(const JArray< jdouble > &, const ::java::util::function::IntToDoubleFunction &);
      static void setAll(const JArray< jlong > &, const ::java::util::function::IntToLongFunction &);
      static void setAll(const JArray< jint > &, const ::java::util::function::IntUnaryOperator &);
      static void sort(const JArray< jbyte > &);
      static void sort(const JArray< jchar > &);
      static void sort(const JArray< jdouble > &);
      static void sort(const JArray< jfloat > &);
      static void sort(const JArray< jint > &);
      static void sort(const JArray< jlong > &);
      static void sort(const JArray< ::java::lang::Object > &);
      static void sort(const JArray< jshort > &);
      static void sort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void sort(const JArray< jbyte > &, jint, jint);
      static void sort(const JArray< jchar > &, jint, jint);
      static void sort(const JArray< jdouble > &, jint, jint);
      static void sort(const JArray< jfloat > &, jint, jint);
      static void sort(const JArray< jint > &, jint, jint);
      static void sort(const JArray< jlong > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint);
      static void sort(const JArray< jshort > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &, jint, jint);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &, jint, jint);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &, jint, jint);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &, jint, jint);
      static ::java::lang::String toString(const JArray< jbyte > &);
      static ::java::lang::String toString(const JArray< jchar > &);
      static ::java::lang::String toString(const JArray< jdouble > &);
      static ::java::lang::String toString(const JArray< jfloat > &);
      static ::java::lang::String toString(const JArray< jint > &);
      static ::java::lang::String toString(const JArray< jlong > &);
      static ::java::lang::String toString(const JArray< ::java::lang::Object > &);
      static ::java::lang::String toString(const JArray< jshort > &);
      static ::java::lang::String toString(const JArray< jboolean > &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Arrays);
    extern PyTypeObject *PY_TYPE(Arrays);

    class t_Arrays {
    public:
      PyObject_HEAD
      Arrays object;
      static PyObject *wrap_Object(const Arrays&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
