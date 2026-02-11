#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class CharSequence;
    class Appendable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class CharTermAttribute : public ::org::apache::lucene::util::Attribute {
           public:
            enum {
              mid_append_262e0b463c416b2a,
              mid_append_956612a0b8b66709,
              mid_append_b0c6c2ad314a784e,
              mid_append_b1404e8ac3694cd7,
              mid_append_f9434ca2f2ec9eb2,
              mid_append_968758447c827be0,
              mid_buffer_44e5186a889ad767,
              mid_copyBuffer_9df2689bc3d19600,
              mid_resizeBuffer_d9d508f40fc379ff,
              mid_setEmpty_ad42848721fa1b99,
              mid_setLength_08f6c04b1f54f3a3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTermAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTermAttribute(const CharTermAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            CharTermAttribute append(const ::java::lang::StringBuilder &) const;
            CharTermAttribute append(const ::java::lang::String &) const;
            CharTermAttribute append(jchar) const;
            CharTermAttribute append(const ::java::lang::CharSequence &) const;
            CharTermAttribute append(const CharTermAttribute &) const;
            CharTermAttribute append(const ::java::lang::CharSequence &, jint, jint) const;
            JArray< jchar > buffer() const;
            void copyBuffer(const JArray< jchar > &, jint, jint) const;
            JArray< jchar > resizeBuffer(jint) const;
            CharTermAttribute setEmpty() const;
            CharTermAttribute setLength(jint) const;
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
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(CharTermAttribute);
          extern PyTypeObject *PY_TYPE(CharTermAttribute);

          class t_CharTermAttribute {
          public:
            PyObject_HEAD
            CharTermAttribute object;
            static PyObject *wrap_Object(const CharTermAttribute&);
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
