#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
    class MissingResourceException;
    class Locale$IsoCountryCode;
    class Set;
    class Locale$Category;
    class Locale$FilteringMode;
    class Locale;
    class Locale$LanguageRange;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Character;
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale : public ::java::lang::Object {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_1c92f57e5f37bb8d,
        mid_init$_e9bc0b4173a3531d,
        mid_clone_bdd51648087bae52,
        mid_equals_6084f78e09b6c0c3,
        mid_filter_ef27a7a81320394a,
        mid_filter_e40043ef12d45c62,
        mid_filterTags_ef27a7a81320394a,
        mid_filterTags_e40043ef12d45c62,
        mid_forLanguageTag_2a9397bd64cd0f5f,
        mid_getAvailableLocales_40108ee1d11c7d0c,
        mid_getCountry_dc633f13a47328a8,
        mid_getDefault_1b00a58345a82b2b,
        mid_getDefault_f4d53a8285bdcff6,
        mid_getDisplayCountry_dc633f13a47328a8,
        mid_getDisplayCountry_477c45bdc4979c5d,
        mid_getDisplayLanguage_dc633f13a47328a8,
        mid_getDisplayLanguage_477c45bdc4979c5d,
        mid_getDisplayName_dc633f13a47328a8,
        mid_getDisplayName_477c45bdc4979c5d,
        mid_getDisplayScript_dc633f13a47328a8,
        mid_getDisplayScript_477c45bdc4979c5d,
        mid_getDisplayVariant_dc633f13a47328a8,
        mid_getDisplayVariant_477c45bdc4979c5d,
        mid_getExtension_19f4a1bbde9148a2,
        mid_getExtensionKeys_9a625d56b67c7390,
        mid_getISO3Country_dc633f13a47328a8,
        mid_getISO3Language_dc633f13a47328a8,
        mid_getISOCountries_995db70818ff4363,
        mid_getISOCountries_2011516123d51ded,
        mid_getISOLanguages_995db70818ff4363,
        mid_getLanguage_dc633f13a47328a8,
        mid_getScript_dc633f13a47328a8,
        mid_getUnicodeLocaleAttributes_9a625d56b67c7390,
        mid_getUnicodeLocaleKeys_9a625d56b67c7390,
        mid_getUnicodeLocaleType_04612c8360f09496,
        mid_getVariant_dc633f13a47328a8,
        mid_hasExtensions_ee8b0a5fa521ddac,
        mid_hashCode_15aa3d485e96b665,
        mid_lookup_6a2b8b52bc61958c,
        mid_lookupTag_07ed88d5112bd0b9,
        mid_setDefault_e8213851b17f2702,
        mid_setDefault_130b53d3911557c4,
        mid_stripExtensions_1b00a58345a82b2b,
        mid_toLanguageTag_dc633f13a47328a8,
        mid_toString_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale(const Locale& obj) : ::java::lang::Object(obj) {}

      static Locale *CANADA;
      static Locale *CANADA_FRENCH;
      static Locale *CHINA;
      static Locale *CHINESE;
      static Locale *ENGLISH;
      static Locale *FRANCE;
      static Locale *FRENCH;
      static Locale *GERMAN;
      static Locale *GERMANY;
      static Locale *ITALIAN;
      static Locale *ITALY;
      static Locale *JAPAN;
      static Locale *JAPANESE;
      static Locale *KOREA;
      static Locale *KOREAN;
      static Locale *PRC;
      static jchar PRIVATE_USE_EXTENSION;
      static Locale *ROOT;
      static Locale *SIMPLIFIED_CHINESE;
      static Locale *TAIWAN;
      static Locale *TRADITIONAL_CHINESE;
      static Locale *UK;
      static jchar UNICODE_LOCALE_EXTENSION;
      static Locale *US;

      Locale(const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      static ::java::util::List filter(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::util::List filter(const ::java::util::List &, const ::java::util::Collection &, const ::java::util::Locale$FilteringMode &);
      static ::java::util::List filterTags(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::util::List filterTags(const ::java::util::List &, const ::java::util::Collection &, const ::java::util::Locale$FilteringMode &);
      static Locale forLanguageTag(const ::java::lang::String &);
      static JArray< Locale > getAvailableLocales();
      ::java::lang::String getCountry() const;
      static Locale getDefault();
      static Locale getDefault(const ::java::util::Locale$Category &);
      ::java::lang::String getDisplayCountry() const;
      ::java::lang::String getDisplayCountry(const Locale &) const;
      ::java::lang::String getDisplayLanguage() const;
      ::java::lang::String getDisplayLanguage(const Locale &) const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const Locale &) const;
      ::java::lang::String getDisplayScript() const;
      ::java::lang::String getDisplayScript(const Locale &) const;
      ::java::lang::String getDisplayVariant() const;
      ::java::lang::String getDisplayVariant(const Locale &) const;
      ::java::lang::String getExtension(jchar) const;
      ::java::util::Set getExtensionKeys() const;
      ::java::lang::String getISO3Country() const;
      ::java::lang::String getISO3Language() const;
      static JArray< ::java::lang::String > getISOCountries();
      static ::java::util::Set getISOCountries(const ::java::util::Locale$IsoCountryCode &);
      static JArray< ::java::lang::String > getISOLanguages();
      ::java::lang::String getLanguage() const;
      ::java::lang::String getScript() const;
      ::java::util::Set getUnicodeLocaleAttributes() const;
      ::java::util::Set getUnicodeLocaleKeys() const;
      ::java::lang::String getUnicodeLocaleType(const ::java::lang::String &) const;
      ::java::lang::String getVariant() const;
      jboolean hasExtensions() const;
      jint hashCode() const;
      static Locale lookup(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::lang::String lookupTag(const ::java::util::List &, const ::java::util::Collection &);
      static void setDefault(const Locale &);
      static void setDefault(const ::java::util::Locale$Category &, const Locale &);
      Locale stripExtensions() const;
      ::java::lang::String toLanguageTag() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale);
    extern PyTypeObject *PY_TYPE(Locale);

    class t_Locale {
    public:
      PyObject_HEAD
      Locale object;
      static PyObject *wrap_Object(const Locale&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
