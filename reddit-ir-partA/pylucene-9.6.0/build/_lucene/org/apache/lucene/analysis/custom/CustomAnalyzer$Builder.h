#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer$Builder_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    namespace function {
      class Predicate;
    }
  }
  namespace lang {
    class CharSequence;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class ConditionalTokenFilterFactory;
        }
        class TokenFilterFactory;
        class TokenizerFactory;
        namespace custom {
          class CustomAnalyzer;
          class CustomAnalyzer$ConditionBuilder;
          class CustomAnalyzer$Builder;
        }
        class CharFilterFactory;
      }
      namespace util {
        class Version;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {

          class CustomAnalyzer$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_addCharFilter_b50ed8dee25d9e8d,
              mid_addCharFilter_4f25a542e546f19d,
              mid_addCharFilter_e5831e677d14be45,
              mid_addCharFilter_4be9bcb4502432b0,
              mid_addTokenFilter_b50ed8dee25d9e8d,
              mid_addTokenFilter_4f25a542e546f19d,
              mid_addTokenFilter_e5831e677d14be45,
              mid_addTokenFilter_4be9bcb4502432b0,
              mid_build_027142c74e2519ce,
              mid_when_628dc5a5fabfd9cd,
              mid_when_d0211fbbc1dfad1a,
              mid_when_f3af4a2aeed04298,
              mid_when_297a035c2f838942,
              mid_when_aea5cb513f7e43ea,
              mid_whenTerm_05f0fafa6e7eb5a0,
              mid_withDefaultMatchVersion_f72d1f083985afdc,
              mid_withOffsetGap_f2ca82f4929989bb,
              mid_withPositionIncrementGap_f2ca82f4929989bb,
              mid_withTokenizer_b50ed8dee25d9e8d,
              mid_withTokenizer_4f25a542e546f19d,
              mid_withTokenizer_e5831e677d14be45,
              mid_withTokenizer_4be9bcb4502432b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CustomAnalyzer$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CustomAnalyzer$Builder(const CustomAnalyzer$Builder& obj) : ::java::lang::Object(obj) {}

            CustomAnalyzer$Builder addCharFilter(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::String &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::String &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer build() const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::Class &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::String &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder whenTerm(const ::java::util::function::Predicate &) const;
            CustomAnalyzer$Builder withDefaultMatchVersion(const ::org::apache::lucene::util::Version &) const;
            CustomAnalyzer$Builder withOffsetGap(jint) const;
            CustomAnalyzer$Builder withPositionIncrementGap(jint) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::String &, const ::java::util::Map &) const;
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
      namespace analysis {
        namespace custom {
          extern PyType_Def PY_TYPE_DEF(CustomAnalyzer$Builder);
          extern PyTypeObject *PY_TYPE(CustomAnalyzer$Builder);

          class t_CustomAnalyzer$Builder {
          public:
            PyObject_HEAD
            CustomAnalyzer$Builder object;
            static PyObject *wrap_Object(const CustomAnalyzer$Builder&);
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
