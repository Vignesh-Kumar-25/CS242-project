#ifndef org_apache_lucene_search_vectorhighlight_FieldQuery$QueryPhraseMap_H
#define org_apache_lucene_search_vectorhighlight_FieldQuery$QueryPhraseMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldQuery;
          class FieldQuery$QueryPhraseMap;
          class FieldTermStack$TermInfo;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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
      namespace search {
        namespace vectorhighlight {

          class FieldQuery$QueryPhraseMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f4022593c9790c5a,
              mid_getBoost_15cd8574741b1394,
              mid_getSlop_15aa3d485e96b665,
              mid_getTermMap_6a75f133191f9e3e,
              mid_getTermOrPhraseNumber_15aa3d485e96b665,
              mid_isTerminal_ee8b0a5fa521ddac,
              mid_isValidTermOrPhrase_daf8cdabab803bff,
              mid_searchPhrase_723cb0066050a931,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldQuery$QueryPhraseMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldQuery$QueryPhraseMap(const FieldQuery$QueryPhraseMap& obj) : ::java::lang::Object(obj) {}

            FieldQuery$QueryPhraseMap(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);

            jfloat getBoost() const;
            jint getSlop() const;
            FieldQuery$QueryPhraseMap getTermMap(const ::java::lang::String &) const;
            jint getTermOrPhraseNumber() const;
            jboolean isTerminal() const;
            jboolean isValidTermOrPhrase(const ::java::util::List &) const;
            FieldQuery$QueryPhraseMap searchPhrase(const ::java::util::List &) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldQuery$QueryPhraseMap);
          extern PyTypeObject *PY_TYPE(FieldQuery$QueryPhraseMap);

          class t_FieldQuery$QueryPhraseMap {
          public:
            PyObject_HEAD
            FieldQuery$QueryPhraseMap object;
            static PyObject *wrap_Object(const FieldQuery$QueryPhraseMap&);
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
