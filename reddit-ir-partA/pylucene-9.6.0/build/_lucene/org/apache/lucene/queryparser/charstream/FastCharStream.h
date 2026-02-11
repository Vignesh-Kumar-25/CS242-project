#ifndef org_apache_lucene_queryparser_charstream_FastCharStream_H
#define org_apache_lucene_queryparser_charstream_FastCharStream_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {

          class FastCharStream : public ::java::lang::Object {
           public:
            enum {
              mid_init$_48be8a5844a4c6e0,
              mid_BeginToken_b2ab5238d4cbdf34,
              mid_Done_3353d9f14bbfd91a,
              mid_GetImage_dc633f13a47328a8,
              mid_GetSuffix_d9d508f40fc379ff,
              mid_backup_da425451c8de636b,
              mid_getBeginColumn_15aa3d485e96b665,
              mid_getBeginLine_15aa3d485e96b665,
              mid_getEndColumn_15aa3d485e96b665,
              mid_getEndLine_15aa3d485e96b665,
              mid_readChar_b2ab5238d4cbdf34,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastCharStream(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastCharStream(const FastCharStream& obj) : ::java::lang::Object(obj) {}

            FastCharStream(const ::java::io::Reader &);

            jchar BeginToken() const;
            void Done() const;
            ::java::lang::String GetImage() const;
            JArray< jchar > GetSuffix(jint) const;
            void backup(jint) const;
            jint getBeginColumn() const;
            jint getBeginLine() const;
            jint getEndColumn() const;
            jint getEndLine() const;
            jchar readChar() const;
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
      namespace queryparser {
        namespace charstream {
          extern PyType_Def PY_TYPE_DEF(FastCharStream);
          extern PyTypeObject *PY_TYPE(FastCharStream);

          class t_FastCharStream {
          public:
            PyObject_HEAD
            FastCharStream object;
            static PyObject *wrap_Object(const FastCharStream&);
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
