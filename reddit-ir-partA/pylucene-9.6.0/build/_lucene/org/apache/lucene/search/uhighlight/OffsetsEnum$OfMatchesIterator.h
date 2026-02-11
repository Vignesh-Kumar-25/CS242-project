#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$OfMatchesIterator_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$OfMatchesIterator_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class MatchesIterator;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Class;
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
        namespace uhighlight {

          class OffsetsEnum$OfMatchesIterator : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_2ed055ee41a8a250,
              mid_endOffset_15aa3d485e96b665,
              mid_freq_15aa3d485e96b665,
              mid_getTerm_e6961a1ebae5a29a,
              mid_nextPosition_ee8b0a5fa521ddac,
              mid_startOffset_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum$OfMatchesIterator(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$OfMatchesIterator(const OffsetsEnum$OfMatchesIterator& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$OfMatchesIterator(const ::org::apache::lucene::search::MatchesIterator &, const ::java::util::function::Supplier &);

            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jboolean nextPosition() const;
            jint startOffset() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$OfMatchesIterator);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$OfMatchesIterator);

          class t_OffsetsEnum$OfMatchesIterator {
          public:
            PyObject_HEAD
            OffsetsEnum$OfMatchesIterator object;
            static PyObject *wrap_Object(const OffsetsEnum$OfMatchesIterator&);
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
