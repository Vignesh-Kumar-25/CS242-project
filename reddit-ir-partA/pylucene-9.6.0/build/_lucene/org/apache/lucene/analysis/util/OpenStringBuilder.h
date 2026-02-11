#ifndef org_apache_lucene_analysis_util_OpenStringBuilder_H
#define org_apache_lucene_analysis_util_OpenStringBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class OpenStringBuilder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Appendable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class OpenStringBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_da425451c8de636b,
              mid_init$_8077910d0b141c99,
              mid_append_cf561d5bf28fc73f,
              mid_append_01566a00b02e7953,
              mid_append_522621180b6a4b34,
              mid_capacity_15aa3d485e96b665,
              mid_charAt_c36d5d142dcfe0b2,
              mid_flush_3353d9f14bbfd91a,
              mid_getArray_44e5186a889ad767,
              mid_length_15aa3d485e96b665,
              mid_reserve_da425451c8de636b,
              mid_reset_3353d9f14bbfd91a,
              mid_set_8077910d0b141c99,
              mid_setCharAt_5219ca4e678668cb,
              mid_setLength_da425451c8de636b,
              mid_size_15aa3d485e96b665,
              mid_subSequence_d258919c83060ac0,
              mid_toCharArray_44e5186a889ad767,
              mid_toString_dc633f13a47328a8,
              mid_unsafeWrite_216a2efc81ae4aff,
              mid_unsafeWrite_da425451c8de636b,
              mid_unsafeWrite_9df2689bc3d19600,
              mid_write_7d636082e71ec259,
              mid_write_4a883f7810d2effa,
              mid_write_ef844d98320442d4,
              mid_write_216a2efc81ae4aff,
              mid_write_da425451c8de636b,
              mid_write_9df2689bc3d19600,
              mid_resize_da425451c8de636b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OpenStringBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OpenStringBuilder(const OpenStringBuilder& obj) : ::java::lang::Object(obj) {}

            OpenStringBuilder();
            OpenStringBuilder(jint);
            OpenStringBuilder(const JArray< jchar > &, jint);

            ::java::lang::Appendable append(jchar) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &, jint, jint) const;
            jint capacity() const;
            jchar charAt(jint) const;
            void flush() const;
            JArray< jchar > getArray() const;
            jint length() const;
            void reserve(jint) const;
            void reset() const;
            void set(const JArray< jchar > &, jint) const;
            void setCharAt(jint, jchar) const;
            void setLength(jint) const;
            jint size() const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
            JArray< jchar > toCharArray() const;
            ::java::lang::String toString() const;
            void unsafeWrite(jchar) const;
            void unsafeWrite(jint) const;
            void unsafeWrite(const JArray< jchar > &, jint, jint) const;
            void write(const JArray< jchar > &) const;
            void write(const ::java::lang::String &) const;
            void write(const OpenStringBuilder &) const;
            void write(jchar) const;
            void write(jint) const;
            void write(const JArray< jchar > &, jint, jint) const;
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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(OpenStringBuilder);
          extern PyTypeObject *PY_TYPE(OpenStringBuilder);

          class t_OpenStringBuilder {
          public:
            PyObject_HEAD
            OpenStringBuilder object;
            static PyObject *wrap_Object(const OpenStringBuilder&);
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
