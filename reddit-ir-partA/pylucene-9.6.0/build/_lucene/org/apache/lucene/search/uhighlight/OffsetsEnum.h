#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace uhighlight {
          class OffsetsEnum;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class OffsetsEnum : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_close_3353d9f14bbfd91a,
              mid_compareTo_a812156466304c25,
              mid_endOffset_15aa3d485e96b665,
              mid_freq_15aa3d485e96b665,
              mid_getTerm_e6961a1ebae5a29a,
              mid_nextPosition_ee8b0a5fa521ddac,
              mid_startOffset_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum(const OffsetsEnum& obj) : ::java::lang::Object(obj) {}

            static OffsetsEnum *EMPTY;

            OffsetsEnum();

            void close() const;
            jint compareTo(const OffsetsEnum &) const;
            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jboolean nextPosition() const;
            jint startOffset() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum);
          extern PyTypeObject *PY_TYPE(OffsetsEnum);

          class t_OffsetsEnum {
          public:
            PyObject_HEAD
            OffsetsEnum object;
            static PyObject *wrap_Object(const OffsetsEnum&);
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
