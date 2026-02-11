#ifndef org_apache_lucene_search_matchhighlight_OffsetsFromMatchIterator_H
#define org_apache_lucene_search_matchhighlight_OffsetsFromMatchIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class OffsetsRetrievalStrategy;
          class OffsetRange;
          class MatchRegionRetriever$FieldValueProvider;
          class OffsetsFromPositions;
        }
        class MatchesIterator;
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

          class OffsetsFromMatchIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f44d147b7dc59584,
              mid_get_6d4c1993fdccd971,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsFromMatchIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsFromMatchIterator(const OffsetsFromMatchIterator& obj) : ::java::lang::Object(obj) {}

            OffsetsFromMatchIterator(const ::java::lang::String &, const ::org::apache::lucene::search::matchhighlight::OffsetsFromPositions &);

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
          extern PyType_Def PY_TYPE_DEF(OffsetsFromMatchIterator);
          extern PyTypeObject *PY_TYPE(OffsetsFromMatchIterator);

          class t_OffsetsFromMatchIterator {
          public:
            PyObject_HEAD
            OffsetsFromMatchIterator object;
            static PyObject *wrap_Object(const OffsetsFromMatchIterator&);
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
