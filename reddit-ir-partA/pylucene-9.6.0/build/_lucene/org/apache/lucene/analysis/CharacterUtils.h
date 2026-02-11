#ifndef org_apache_lucene_analysis_CharacterUtils_H
#define org_apache_lucene_analysis_CharacterUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharacterUtils$CharacterBuffer;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharacterUtils : public ::java::lang::Object {
         public:
          enum {
            mid_fill_373587f2d5da505b,
            mid_fill_5c6507d9c0a51580,
            mid_newCharacterBuffer_5084e981dd38a93e,
            mid_toChars_25e421c915bf5f96,
            mid_toCodePoints_c1d5a7e95ebc1f4a,
            mid_toLowerCase_9df2689bc3d19600,
            mid_toUpperCase_9df2689bc3d19600,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharacterUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharacterUtils(const CharacterUtils& obj) : ::java::lang::Object(obj) {}

          static jboolean fill(const ::org::apache::lucene::analysis::CharacterUtils$CharacterBuffer &, const ::java::io::Reader &);
          static jboolean fill(const ::org::apache::lucene::analysis::CharacterUtils$CharacterBuffer &, const ::java::io::Reader &, jint);
          static ::org::apache::lucene::analysis::CharacterUtils$CharacterBuffer newCharacterBuffer(jint);
          static jint toChars(const JArray< jint > &, jint, jint, const JArray< jchar > &, jint);
          static jint toCodePoints(const JArray< jchar > &, jint, jint, const JArray< jint > &, jint);
          static void toLowerCase(const JArray< jchar > &, jint, jint);
          static void toUpperCase(const JArray< jchar > &, jint, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharacterUtils);
        extern PyTypeObject *PY_TYPE(CharacterUtils);

        class t_CharacterUtils {
        public:
          PyObject_HEAD
          CharacterUtils object;
          static PyObject *wrap_Object(const CharacterUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
