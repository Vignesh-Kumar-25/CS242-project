#ifndef org_apache_lucene_search_matchhighlight_MatchRegionRetriever$MatchOffsetsConsumer_H
#define org_apache_lucene_search_matchhighlight_MatchRegionRetriever$MatchOffsetsConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
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
      namespace search {
        namespace matchhighlight {
          class OffsetRange;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class MatchRegionRetriever$MatchOffsetsConsumer : public ::java::lang::Object {
           public:
            enum {
              mid_accept_e3eea5696de1736c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchRegionRetriever$MatchOffsetsConsumer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchRegionRetriever$MatchOffsetsConsumer(const MatchRegionRetriever$MatchOffsetsConsumer& obj) : ::java::lang::Object(obj) {}

            void accept(jint, const ::org::apache::lucene::index::LeafReader &, jint, const ::java::util::Map &) const;
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(MatchRegionRetriever$MatchOffsetsConsumer);
          extern PyTypeObject *PY_TYPE(MatchRegionRetriever$MatchOffsetsConsumer);

          class t_MatchRegionRetriever$MatchOffsetsConsumer {
          public:
            PyObject_HEAD
            MatchRegionRetriever$MatchOffsetsConsumer object;
            static PyObject *wrap_Object(const MatchRegionRetriever$MatchOffsetsConsumer&);
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
