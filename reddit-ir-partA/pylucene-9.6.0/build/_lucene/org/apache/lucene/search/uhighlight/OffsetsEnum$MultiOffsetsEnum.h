#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$MultiOffsetsEnum_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$MultiOffsetsEnum_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class OffsetsEnum$MultiOffsetsEnum : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_1a2e28000748bc88,
              mid_close_3353d9f14bbfd91a,
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

            explicit OffsetsEnum$MultiOffsetsEnum(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$MultiOffsetsEnum(const OffsetsEnum$MultiOffsetsEnum& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$MultiOffsetsEnum(const ::java::util::List &);

            void close() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$MultiOffsetsEnum);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$MultiOffsetsEnum);

          class t_OffsetsEnum$MultiOffsetsEnum {
          public:
            PyObject_HEAD
            OffsetsEnum$MultiOffsetsEnum object;
            static PyObject *wrap_Object(const OffsetsEnum$MultiOffsetsEnum&);
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
