#ifndef org_apache_lucene_search_vectorhighlight_SimpleFragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_SimpleFragmentsBuilder_H

#include "org/apache/lucene/search/vectorhighlight/BaseFragmentsBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class BoundaryScanner;
          class FieldFragList$WeightedFragInfo;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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

          class SimpleFragmentsBuilder : public ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_4fb33a9ac40a1035,
              mid_init$_58003701199a0876,
              mid_init$_5d22e44516e42ba6,
              mid_getWeightedFragInfoList_8cdc94b2f26ee964,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleFragmentsBuilder(jobject obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleFragmentsBuilder(const SimpleFragmentsBuilder& obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder(obj) {}

            SimpleFragmentsBuilder();
            SimpleFragmentsBuilder(const ::org::apache::lucene::search::vectorhighlight::BoundaryScanner &);
            SimpleFragmentsBuilder(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &);
            SimpleFragmentsBuilder(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::vectorhighlight::BoundaryScanner &);

            ::java::util::List getWeightedFragInfoList(const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleFragmentsBuilder);
          extern PyTypeObject *PY_TYPE(SimpleFragmentsBuilder);

          class t_SimpleFragmentsBuilder {
          public:
            PyObject_HEAD
            SimpleFragmentsBuilder object;
            static PyObject *wrap_Object(const SimpleFragmentsBuilder&);
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
