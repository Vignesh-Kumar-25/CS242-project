#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$OfPostings_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$OfPostings_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PostingsEnum;
      }
      namespace util {
        class BytesRef;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class OffsetsEnum$OfPostings : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_ef6fe6ce6dac5b7c,
              mid_init$_adafa1de46bc11f3,
              mid_endOffset_15aa3d485e96b665,
              mid_freq_15aa3d485e96b665,
              mid_getPostingsEnum_8fa3c095726b079c,
              mid_getTerm_e6961a1ebae5a29a,
              mid_nextPosition_ee8b0a5fa521ddac,
              mid_startOffset_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum$OfPostings(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$OfPostings(const OffsetsEnum$OfPostings& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$OfPostings(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::PostingsEnum &);
            OffsetsEnum$OfPostings(const ::org::apache::lucene::util::BytesRef &, jint, const ::org::apache::lucene::index::PostingsEnum &);

            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::index::PostingsEnum getPostingsEnum() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$OfPostings);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$OfPostings);

          class t_OffsetsEnum$OfPostings {
          public:
            PyObject_HEAD
            OffsetsEnum$OfPostings object;
            static PyObject *wrap_Object(const OffsetsEnum$OfPostings&);
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
