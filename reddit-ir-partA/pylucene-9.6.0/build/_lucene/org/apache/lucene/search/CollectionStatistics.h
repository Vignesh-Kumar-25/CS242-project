#ifndef org_apache_lucene_search_CollectionStatistics_H
#define org_apache_lucene_search_CollectionStatistics_H

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
      namespace search {

        class CollectionStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_de5486209c353300,
            mid_docCount_058f5911dcf5d8a4,
            mid_field_dc633f13a47328a8,
            mid_maxDoc_058f5911dcf5d8a4,
            mid_sumDocFreq_058f5911dcf5d8a4,
            mid_sumTotalTermFreq_058f5911dcf5d8a4,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollectionStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollectionStatistics(const CollectionStatistics& obj) : ::java::lang::Object(obj) {}

          CollectionStatistics(const ::java::lang::String &, jlong, jlong, jlong, jlong);

          jlong docCount() const;
          ::java::lang::String field() const;
          jlong maxDoc() const;
          jlong sumDocFreq() const;
          jlong sumTotalTermFreq() const;
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
        extern PyType_Def PY_TYPE_DEF(CollectionStatistics);
        extern PyTypeObject *PY_TYPE(CollectionStatistics);

        class t_CollectionStatistics {
        public:
          PyObject_HEAD
          CollectionStatistics object;
          static PyObject *wrap_Object(const CollectionStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
