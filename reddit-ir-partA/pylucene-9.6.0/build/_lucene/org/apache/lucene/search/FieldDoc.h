#ifndef org_apache_lucene_search_FieldDoc_H
#define org_apache_lucene_search_FieldDoc_H

#include "org/apache/lucene/search/ScoreDoc.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldDoc : public ::org::apache::lucene::search::ScoreDoc {
         public:
          enum {
            mid_init$_ad01d3552d962fe8,
            mid_init$_0a67a098cacb93c5,
            mid_init$_30480b3df96b0c1e,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_fields,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDoc(jobject obj) : ::org::apache::lucene::search::ScoreDoc(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldDoc(const FieldDoc& obj) : ::org::apache::lucene::search::ScoreDoc(obj) {}

          JArray< ::java::lang::Object > _get_fields() const;
          void _set_fields(const JArray< ::java::lang::Object > &) const;

          FieldDoc(jint, jfloat);
          FieldDoc(jint, jfloat, const JArray< ::java::lang::Object > &);
          FieldDoc(jint, jfloat, const JArray< ::java::lang::Object > &, jint);

          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FieldDoc);
        extern PyTypeObject *PY_TYPE(FieldDoc);

        class t_FieldDoc {
        public:
          PyObject_HEAD
          FieldDoc object;
          static PyObject *wrap_Object(const FieldDoc&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
