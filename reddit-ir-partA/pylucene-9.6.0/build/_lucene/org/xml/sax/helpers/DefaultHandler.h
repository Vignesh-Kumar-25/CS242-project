#ifndef org_xml_sax_helpers_DefaultHandler_H
#define org_xml_sax_helpers_DefaultHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {

        class DefaultHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_characters_9df2689bc3d19600,
            mid_endDocument_3353d9f14bbfd91a,
            mid_endElement_e9bc0b4173a3531d,
            mid_endPrefixMapping_4a883f7810d2effa,
            mid_ignorableWhitespace_9df2689bc3d19600,
            mid_notationDecl_e9bc0b4173a3531d,
            mid_processingInstruction_1c92f57e5f37bb8d,
            mid_skippedEntity_4a883f7810d2effa,
            mid_startDocument_3353d9f14bbfd91a,
            mid_startPrefixMapping_1c92f57e5f37bb8d,
            mid_unparsedEntityDecl_f03aa885c07596b2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DefaultHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DefaultHandler(const DefaultHandler& obj) : ::java::lang::Object(obj) {}

          DefaultHandler();

          void characters(const JArray< jchar > &, jint, jint) const;
          void endDocument() const;
          void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void endPrefixMapping(const ::java::lang::String &) const;
          void ignorableWhitespace(const JArray< jchar > &, jint, jint) const;
          void notationDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void processingInstruction(const ::java::lang::String &, const ::java::lang::String &) const;
          void skippedEntity(const ::java::lang::String &) const;
          void startDocument() const;
          void startPrefixMapping(const ::java::lang::String &, const ::java::lang::String &) const;
          void unparsedEntityDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {
        extern PyType_Def PY_TYPE_DEF(DefaultHandler);
        extern PyTypeObject *PY_TYPE(DefaultHandler);

        class t_DefaultHandler {
        public:
          PyObject_HEAD
          DefaultHandler object;
          static PyObject *wrap_Object(const DefaultHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
