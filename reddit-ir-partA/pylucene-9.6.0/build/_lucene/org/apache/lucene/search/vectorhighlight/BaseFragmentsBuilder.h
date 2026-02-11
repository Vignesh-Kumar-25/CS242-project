#ifndef org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FragmentsBuilder;
          class FieldFragList$WeightedFragInfo;
          class FieldFragList;
        }
        namespace highlight {
          class Encoder;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
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
      namespace search {
        namespace vectorhighlight {

          class BaseFragmentsBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_createFragment_1ed15c5f9e3a5596,
              mid_createFragment_ebcba24e775eca72,
              mid_createFragments_77a492c948b90042,
              mid_createFragments_cdcb9b044b94d65c,
              mid_getMultiValuedSeparator_b2ab5238d4cbdf34,
              mid_getWeightedFragInfoList_8cdc94b2f26ee964,
              mid_isDiscreteMultiValueHighlighting_ee8b0a5fa521ddac,
              mid_setDiscreteMultiValueHighlighting_4f96af910856b303,
              mid_setMultiValuedSeparator_216a2efc81ae4aff,
              mid_discreteMultiValueHighlighting_2bec050db6379cb3,
              mid_makeFragment_d251c02126f39438,
              mid_getFragmentSourceMSO_1213c887d4108c3c,
              mid_getFragmentSource_2eb8c0099e4cfae7,
              mid_getPreTag_78a7b318cefaee15,
              mid_getPreTag_3f71dd51a728bef7,
              mid_getPostTag_3f71dd51a728bef7,
              mid_getPostTag_78a7b318cefaee15,
              mid_getFields_088091758d1201a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseFragmentsBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseFragmentsBuilder(const BaseFragmentsBuilder& obj) : ::java::lang::Object(obj) {}

            static JArray< ::java::lang::String > *COLORED_POST_TAGS;
            static JArray< ::java::lang::String > *COLORED_PRE_TAGS;

            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &) const;
            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            jchar getMultiValuedSeparator() const;
            ::java::util::List getWeightedFragInfoList(const ::java::util::List &) const;
            jboolean isDiscreteMultiValueHighlighting() const;
            void setDiscreteMultiValueHighlighting(jboolean) const;
            void setMultiValuedSeparator(jchar) const;
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
      namespace search {
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(BaseFragmentsBuilder);
          extern PyTypeObject *PY_TYPE(BaseFragmentsBuilder);

          class t_BaseFragmentsBuilder {
          public:
            PyObject_HEAD
            BaseFragmentsBuilder object;
            static PyObject *wrap_Object(const BaseFragmentsBuilder&);
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
