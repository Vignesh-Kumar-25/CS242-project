#ifndef org_apache_lucene_search_uhighlight_FieldOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_FieldOffsetStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UHComponents;
          class UnifiedHighlighter$OffsetSource;
          class OffsetsEnum;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
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
        namespace uhighlight {

          class FieldOffsetStrategy : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0b542fffbfe8ea4a,
              mid_getField_dc633f13a47328a8,
              mid_getOffsetSource_6759e56838c802c3,
              mid_getOffsetsEnum_c503c881e13cf6b2,
              mid_createOffsetsEnumFromReader_e35ff32450083a0a,
              mid_createOffsetsEnumsWeightMatcher_8935816fbd6eb595,
              mid_createOffsetsEnumsForTerms_f197eba629474472,
              mid_createOffsetsEnumsForAutomata_bd8e117abfe8800c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldOffsetStrategy(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldOffsetStrategy(const FieldOffsetStrategy& obj) : ::java::lang::Object(obj) {}

            FieldOffsetStrategy(const ::org::apache::lucene::search::uhighlight::UHComponents &);

            ::java::lang::String getField() const;
            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$OffsetSource getOffsetSource() const;
            ::org::apache::lucene::search::uhighlight::OffsetsEnum getOffsetsEnum(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::lang::String &) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldOffsetStrategy);
          extern PyTypeObject *PY_TYPE(FieldOffsetStrategy);

          class t_FieldOffsetStrategy {
          public:
            PyObject_HEAD
            FieldOffsetStrategy object;
            static PyObject *wrap_Object(const FieldOffsetStrategy&);
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
