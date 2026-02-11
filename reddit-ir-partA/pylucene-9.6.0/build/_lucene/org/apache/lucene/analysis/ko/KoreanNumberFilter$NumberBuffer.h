#ifndef org_apache_lucene_analysis_ko_KoreanNumberFilter$NumberBuffer_H
#define org_apache_lucene_analysis_ko_KoreanNumberFilter$NumberBuffer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class KoreanNumberFilter$NumberBuffer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4a883f7810d2effa,
              mid_advance_3353d9f14bbfd91a,
              mid_charAt_c36d5d142dcfe0b2,
              mid_length_15aa3d485e96b665,
              mid_position_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanNumberFilter$NumberBuffer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanNumberFilter$NumberBuffer(const KoreanNumberFilter$NumberBuffer& obj) : ::java::lang::Object(obj) {}

            KoreanNumberFilter$NumberBuffer(const ::java::lang::String &);

            void advance() const;
            jchar charAt(jint) const;
            jint length() const;
            jint position() const;
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
      namespace analysis {
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanNumberFilter$NumberBuffer);
          extern PyTypeObject *PY_TYPE(KoreanNumberFilter$NumberBuffer);

          class t_KoreanNumberFilter$NumberBuffer {
          public:
            PyObject_HEAD
            KoreanNumberFilter$NumberBuffer object;
            static PyObject *wrap_Object(const KoreanNumberFilter$NumberBuffer&);
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
