#ifndef java_lang_Character_H
#define java_lang_Character_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Character;
    class Class;
    class String;
    class Comparable;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Character : public ::java::lang::Object {
     public:
      enum {
        mid_init$_216a2efc81ae4aff,
        mid_charCount_58b165b57740feff,
        mid_charValue_b2ab5238d4cbdf34,
        mid_codePointAt_2b0b4b7e30587253,
        mid_codePointAt_c3905adfad8b6d67,
        mid_codePointAt_cb7d7dc978d108f2,
        mid_codePointBefore_2b0b4b7e30587253,
        mid_codePointBefore_c3905adfad8b6d67,
        mid_codePointBefore_cb7d7dc978d108f2,
        mid_codePointCount_cb7d7dc978d108f2,
        mid_codePointCount_0c061f26a4db1fd6,
        mid_codePointOf_08c5dabd7f8f1590,
        mid_compare_3831e03c57fb0569,
        mid_compareTo_83ae2563cb849543,
        mid_digit_f7826c4034245b94,
        mid_digit_cd4894667d94f4d3,
        mid_equals_6084f78e09b6c0c3,
        mid_forDigit_4be30bd3e093317c,
        mid_getDirectionality_4d05fb01ca0505f3,
        mid_getDirectionality_c69adb548510f994,
        mid_getName_78a7b318cefaee15,
        mid_getNumericValue_01bbf7fd37c1198f,
        mid_getNumericValue_58b165b57740feff,
        mid_getType_01bbf7fd37c1198f,
        mid_getType_58b165b57740feff,
        mid_hashCode_15aa3d485e96b665,
        mid_hashCode_01bbf7fd37c1198f,
        mid_highSurrogate_c36d5d142dcfe0b2,
        mid_isAlphabetic_92eccba87b045bbc,
        mid_isBmpCodePoint_92eccba87b045bbc,
        mid_isDefined_7bae3cc4661f3586,
        mid_isDefined_92eccba87b045bbc,
        mid_isDigit_7bae3cc4661f3586,
        mid_isDigit_92eccba87b045bbc,
        mid_isHighSurrogate_7bae3cc4661f3586,
        mid_isISOControl_7bae3cc4661f3586,
        mid_isISOControl_92eccba87b045bbc,
        mid_isIdentifierIgnorable_7bae3cc4661f3586,
        mid_isIdentifierIgnorable_92eccba87b045bbc,
        mid_isIdeographic_92eccba87b045bbc,
        mid_isJavaIdentifierPart_7bae3cc4661f3586,
        mid_isJavaIdentifierPart_92eccba87b045bbc,
        mid_isJavaIdentifierStart_7bae3cc4661f3586,
        mid_isJavaIdentifierStart_92eccba87b045bbc,
        mid_isJavaLetter_7bae3cc4661f3586,
        mid_isJavaLetterOrDigit_7bae3cc4661f3586,
        mid_isLetter_7bae3cc4661f3586,
        mid_isLetter_92eccba87b045bbc,
        mid_isLetterOrDigit_7bae3cc4661f3586,
        mid_isLetterOrDigit_92eccba87b045bbc,
        mid_isLowSurrogate_7bae3cc4661f3586,
        mid_isLowerCase_7bae3cc4661f3586,
        mid_isLowerCase_92eccba87b045bbc,
        mid_isMirrored_7bae3cc4661f3586,
        mid_isMirrored_92eccba87b045bbc,
        mid_isSpace_7bae3cc4661f3586,
        mid_isSpaceChar_7bae3cc4661f3586,
        mid_isSpaceChar_92eccba87b045bbc,
        mid_isSupplementaryCodePoint_92eccba87b045bbc,
        mid_isSurrogate_7bae3cc4661f3586,
        mid_isSurrogatePair_20f502e6b8e3cf8a,
        mid_isTitleCase_7bae3cc4661f3586,
        mid_isTitleCase_92eccba87b045bbc,
        mid_isUnicodeIdentifierPart_7bae3cc4661f3586,
        mid_isUnicodeIdentifierPart_92eccba87b045bbc,
        mid_isUnicodeIdentifierStart_7bae3cc4661f3586,
        mid_isUnicodeIdentifierStart_92eccba87b045bbc,
        mid_isUpperCase_7bae3cc4661f3586,
        mid_isUpperCase_92eccba87b045bbc,
        mid_isValidCodePoint_92eccba87b045bbc,
        mid_isWhitespace_7bae3cc4661f3586,
        mid_isWhitespace_92eccba87b045bbc,
        mid_lowSurrogate_c36d5d142dcfe0b2,
        mid_offsetByCodePoints_0c061f26a4db1fd6,
        mid_offsetByCodePoints_1933a58d99cb2c4e,
        mid_reverseBytes_18bc01776e360eab,
        mid_toChars_d9d508f40fc379ff,
        mid_toChars_6179173f30cf0312,
        mid_toCodePoint_3831e03c57fb0569,
        mid_toLowerCase_18bc01776e360eab,
        mid_toLowerCase_58b165b57740feff,
        mid_toString_dc633f13a47328a8,
        mid_toString_19f4a1bbde9148a2,
        mid_toString_78a7b318cefaee15,
        mid_toTitleCase_18bc01776e360eab,
        mid_toTitleCase_58b165b57740feff,
        mid_toUpperCase_18bc01776e360eab,
        mid_toUpperCase_58b165b57740feff,
        mid_valueOf_96b0038091374807,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Character(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Character(const Character& obj) : ::java::lang::Object(obj) {}

      static jint BYTES;
      static jbyte COMBINING_SPACING_MARK;
      static jbyte CONNECTOR_PUNCTUATION;
      static jbyte CONTROL;
      static jbyte CURRENCY_SYMBOL;
      static jbyte DASH_PUNCTUATION;
      static jbyte DECIMAL_DIGIT_NUMBER;
      static jbyte DIRECTIONALITY_ARABIC_NUMBER;
      static jbyte DIRECTIONALITY_BOUNDARY_NEUTRAL;
      static jbyte DIRECTIONALITY_COMMON_NUMBER_SEPARATOR;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR;
      static jbyte DIRECTIONALITY_FIRST_STRONG_ISOLATE;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE;
      static jbyte DIRECTIONALITY_NONSPACING_MARK;
      static jbyte DIRECTIONALITY_OTHER_NEUTRALS;
      static jbyte DIRECTIONALITY_PARAGRAPH_SEPARATOR;
      static jbyte DIRECTIONALITY_POP_DIRECTIONAL_FORMAT;
      static jbyte DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE;
      static jbyte DIRECTIONALITY_SEGMENT_SEPARATOR;
      static jbyte DIRECTIONALITY_UNDEFINED;
      static jbyte DIRECTIONALITY_WHITESPACE;
      static jbyte ENCLOSING_MARK;
      static jbyte END_PUNCTUATION;
      static jbyte FINAL_QUOTE_PUNCTUATION;
      static jbyte FORMAT;
      static jbyte INITIAL_QUOTE_PUNCTUATION;
      static jbyte LETTER_NUMBER;
      static jbyte LINE_SEPARATOR;
      static jbyte LOWERCASE_LETTER;
      static jbyte MATH_SYMBOL;
      static jint MAX_CODE_POINT;
      static jchar MAX_HIGH_SURROGATE;
      static jchar MAX_LOW_SURROGATE;
      static jint MAX_RADIX;
      static jchar MAX_SURROGATE;
      static jchar MAX_VALUE;
      static jint MIN_CODE_POINT;
      static jchar MIN_HIGH_SURROGATE;
      static jchar MIN_LOW_SURROGATE;
      static jint MIN_RADIX;
      static jint MIN_SUPPLEMENTARY_CODE_POINT;
      static jchar MIN_SURROGATE;
      static jchar MIN_VALUE;
      static jbyte MODIFIER_LETTER;
      static jbyte MODIFIER_SYMBOL;
      static jbyte NON_SPACING_MARK;
      static jbyte OTHER_LETTER;
      static jbyte OTHER_NUMBER;
      static jbyte OTHER_PUNCTUATION;
      static jbyte OTHER_SYMBOL;
      static jbyte PARAGRAPH_SEPARATOR;
      static jbyte PRIVATE_USE;
      static jint SIZE;
      static jbyte SPACE_SEPARATOR;
      static jbyte START_PUNCTUATION;
      static jbyte SURROGATE;
      static jbyte TITLECASE_LETTER;
      static ::java::lang::Class *TYPE;
      static jbyte UNASSIGNED;
      static jbyte UPPERCASE_LETTER;

      Character(jchar);

      static jint charCount(jint);
      jchar charValue() const;
      static jint codePointAt(const JArray< jchar > &, jint);
      static jint codePointAt(const ::java::lang::CharSequence &, jint);
      static jint codePointAt(const JArray< jchar > &, jint, jint);
      static jint codePointBefore(const JArray< jchar > &, jint);
      static jint codePointBefore(const ::java::lang::CharSequence &, jint);
      static jint codePointBefore(const JArray< jchar > &, jint, jint);
      static jint codePointCount(const JArray< jchar > &, jint, jint);
      static jint codePointCount(const ::java::lang::CharSequence &, jint, jint);
      static jint codePointOf(const ::java::lang::String &);
      static jint compare(jchar, jchar);
      jint compareTo(const Character &) const;
      static jint digit(jchar, jint);
      static jint digit(jint, jint);
      jboolean equals(const ::java::lang::Object &) const;
      static jchar forDigit(jint, jint);
      static jbyte getDirectionality(jchar);
      static jbyte getDirectionality(jint);
      static ::java::lang::String getName(jint);
      static jint getNumericValue(jchar);
      static jint getNumericValue(jint);
      static jint getType(jchar);
      static jint getType(jint);
      jint hashCode() const;
      static jint hashCode(jchar);
      static jchar highSurrogate(jint);
      static jboolean isAlphabetic(jint);
      static jboolean isBmpCodePoint(jint);
      static jboolean isDefined(jchar);
      static jboolean isDefined(jint);
      static jboolean isDigit(jchar);
      static jboolean isDigit(jint);
      static jboolean isHighSurrogate(jchar);
      static jboolean isISOControl(jchar);
      static jboolean isISOControl(jint);
      static jboolean isIdentifierIgnorable(jchar);
      static jboolean isIdentifierIgnorable(jint);
      static jboolean isIdeographic(jint);
      static jboolean isJavaIdentifierPart(jchar);
      static jboolean isJavaIdentifierPart(jint);
      static jboolean isJavaIdentifierStart(jchar);
      static jboolean isJavaIdentifierStart(jint);
      static jboolean isJavaLetter(jchar);
      static jboolean isJavaLetterOrDigit(jchar);
      static jboolean isLetter(jchar);
      static jboolean isLetter(jint);
      static jboolean isLetterOrDigit(jchar);
      static jboolean isLetterOrDigit(jint);
      static jboolean isLowSurrogate(jchar);
      static jboolean isLowerCase(jchar);
      static jboolean isLowerCase(jint);
      static jboolean isMirrored(jchar);
      static jboolean isMirrored(jint);
      static jboolean isSpace(jchar);
      static jboolean isSpaceChar(jchar);
      static jboolean isSpaceChar(jint);
      static jboolean isSupplementaryCodePoint(jint);
      static jboolean isSurrogate(jchar);
      static jboolean isSurrogatePair(jchar, jchar);
      static jboolean isTitleCase(jchar);
      static jboolean isTitleCase(jint);
      static jboolean isUnicodeIdentifierPart(jchar);
      static jboolean isUnicodeIdentifierPart(jint);
      static jboolean isUnicodeIdentifierStart(jchar);
      static jboolean isUnicodeIdentifierStart(jint);
      static jboolean isUpperCase(jchar);
      static jboolean isUpperCase(jint);
      static jboolean isValidCodePoint(jint);
      static jboolean isWhitespace(jchar);
      static jboolean isWhitespace(jint);
      static jchar lowSurrogate(jint);
      static jint offsetByCodePoints(const ::java::lang::CharSequence &, jint, jint);
      static jint offsetByCodePoints(const JArray< jchar > &, jint, jint, jint, jint);
      static jchar reverseBytes(jchar);
      static JArray< jchar > toChars(jint);
      static jint toChars(jint, const JArray< jchar > &, jint);
      static jint toCodePoint(jchar, jchar);
      static jchar toLowerCase(jchar);
      static jint toLowerCase(jint);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jchar);
      static ::java::lang::String toString(jint);
      static jchar toTitleCase(jchar);
      static jint toTitleCase(jint);
      static jchar toUpperCase(jchar);
      static jint toUpperCase(jint);
      static Character valueOf(jchar);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Character);
    extern PyTypeObject *PY_TYPE(Character);

    class t_Character {
    public:
      PyObject_HEAD
      Character object;
      static PyObject *wrap_Object(const Character&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
