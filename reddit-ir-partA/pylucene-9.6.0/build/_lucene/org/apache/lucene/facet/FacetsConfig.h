#ifndef org_apache_lucene_facet_FacetsConfig_H
#define org_apache_lucene_facet_FacetsConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig$DrillDownTermsIndexing;
        class FacetsConfig$DimConfig;
        namespace taxonomy {
          class TaxonomyWriter;
        }
      }
      namespace document {
        class Document;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsConfig : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_build_78ed124ede785f3a,
            mid_build_876c9a8e827bc2c5,
            mid_getDimConfig_1409ad580aca290f,
            mid_getDimConfigs_19f838df22aacf85,
            mid_isDimConfigured_77e0b5c3eb1962ba,
            mid_pathToString_d38d07d3a65ca943,
            mid_pathToString_aa4bfeeeca7664e5,
            mid_pathToString_3f71dd51a728bef7,
            mid_setDrillDownTermsIndexing_a6fda95dd0443adc,
            mid_setHierarchical_33d070369aa7d0f5,
            mid_setIndexFieldName_1c92f57e5f37bb8d,
            mid_setMultiValued_33d070369aa7d0f5,
            mid_setRequireDimCount_33d070369aa7d0f5,
            mid_stringToPath_5dfe22b47e50fb54,
            mid_dedupAndEncode_40e9c6e50e820c84,
            mid_getDefaultDimConfig_ffcb68c3fe021774,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsConfig(const FacetsConfig& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::facet::FacetsConfig$DimConfig *DEFAULT_DIM_CONFIG;
          static ::java::lang::String *DEFAULT_INDEX_FIELD_NAME;
          static jchar DELIM_CHAR;

          FacetsConfig();

          ::org::apache::lucene::document::Document build(const ::org::apache::lucene::document::Document &) const;
          ::org::apache::lucene::document::Document build(const ::org::apache::lucene::facet::taxonomy::TaxonomyWriter &, const ::org::apache::lucene::document::Document &) const;
          ::org::apache::lucene::facet::FacetsConfig$DimConfig getDimConfig(const ::java::lang::String &) const;
          ::java::util::Map getDimConfigs() const;
          jboolean isDimConfigured(const ::java::lang::String &) const;
          static ::java::lang::String pathToString(const JArray< ::java::lang::String > &);
          static ::java::lang::String pathToString(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          static ::java::lang::String pathToString(const JArray< ::java::lang::String > &, jint);
          void setDrillDownTermsIndexing(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsConfig$DrillDownTermsIndexing &) const;
          void setHierarchical(const ::java::lang::String &, jboolean) const;
          void setIndexFieldName(const ::java::lang::String &, const ::java::lang::String &) const;
          void setMultiValued(const ::java::lang::String &, jboolean) const;
          void setRequireDimCount(const ::java::lang::String &, jboolean) const;
          static JArray< ::java::lang::String > stringToPath(const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsConfig);
        extern PyTypeObject *PY_TYPE(FacetsConfig);

        class t_FacetsConfig {
        public:
          PyObject_HEAD
          FacetsConfig object;
          static PyObject *wrap_Object(const FacetsConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
