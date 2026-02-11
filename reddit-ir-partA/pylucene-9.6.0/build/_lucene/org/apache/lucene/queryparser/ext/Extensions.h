#ifndef org_apache_lucene_queryparser_ext_Extensions_H
#define org_apache_lucene_queryparser_ext_Extensions_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {
          class Extensions$Pair;
          class ParserExtension;
        }
      }
    }
  }
}
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
      namespace queryparser {
        namespace ext {

          class Extensions : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_216a2efc81ae4aff,
              mid_add_43ab8ecb7ecb82d6,
              mid_buildExtensionField_04612c8360f09496,
              mid_buildExtensionField_4178ea5d4aed7988,
              mid_escapeExtensionField_04612c8360f09496,
              mid_getExtension_476aacaa659112e5,
              mid_getExtensionFieldDelimiter_b2ab5238d4cbdf34,
              mid_splitExtensionField_5b6de7ca9562e47f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Extensions(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Extensions(const Extensions& obj) : ::java::lang::Object(obj) {}

            static jchar DEFAULT_EXTENSION_FIELD_DELIMITER;

            Extensions();
            Extensions(jchar);

            void add(const ::java::lang::String &, const ::org::apache::lucene::queryparser::ext::ParserExtension &) const;
            ::java::lang::String buildExtensionField(const ::java::lang::String &) const;
            ::java::lang::String buildExtensionField(const ::java::lang::String &, const ::java::lang::String &) const;
            ::java::lang::String escapeExtensionField(const ::java::lang::String &) const;
            ::org::apache::lucene::queryparser::ext::ParserExtension getExtension(const ::java::lang::String &) const;
            jchar getExtensionFieldDelimiter() const;
            ::org::apache::lucene::queryparser::ext::Extensions$Pair splitExtensionField(const ::java::lang::String &, const ::java::lang::String &) const;
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
        namespace ext {
          extern PyType_Def PY_TYPE_DEF(Extensions);
          extern PyTypeObject *PY_TYPE(Extensions);

          class t_Extensions {
          public:
            PyObject_HEAD
            Extensions object;
            static PyObject *wrap_Object(const Extensions&);
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
