#ifndef org_apache_lucene_search_matchhighlight_OffsetsFromPositions_H
#define org_apache_lucene_search_matchhighlight_OffsetsFromPositions_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class OffsetsRetrievalStrategy;
          class OffsetRange;
          class MatchRegionRetriever$FieldValueProvider;
        }
        class MatchesIterator;
      }
      namespace analysis {
        class Analyzer;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class OffsetsFromPositions : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2dc91590b2674915,
              mid_get_6d4c1993fdccd971,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsFromPositions(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsFromPositions(const OffsetsFromPositions& obj) : ::java::lang::Object(obj) {}

            OffsetsFromPositions(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::java::util::List get(const ::org::apache::lucene::search::MatchesIterator &, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$FieldValueProvider &) const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetsFromPositions);
          extern PyTypeObject *PY_TYPE(OffsetsFromPositions);

          class t_OffsetsFromPositions {
          public:
            PyObject_HEAD
            OffsetsFromPositions object;
            static PyObject *wrap_Object(const OffsetsFromPositions&);
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
