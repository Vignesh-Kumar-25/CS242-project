#ifndef org_apache_lucene_search_similarities_BasicStats_H
#define org_apache_lucene_search_similarities_BasicStats_H

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
        namespace similarities {

          class BasicStats : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8494653dfbc27b70,
              mid_getAvgFieldLength_409d010a7a53d0d1,
              mid_getBoost_409d010a7a53d0d1,
              mid_getDocFreq_058f5911dcf5d8a4,
              mid_getNumberOfDocuments_058f5911dcf5d8a4,
              mid_getNumberOfFieldTokens_058f5911dcf5d8a4,
              mid_getTotalTermFreq_058f5911dcf5d8a4,
              mid_setAvgFieldLength_c1f7206c104d501e,
              mid_setDocFreq_db2028ac45cd5b77,
              mid_setNumberOfDocuments_db2028ac45cd5b77,
              mid_setNumberOfFieldTokens_db2028ac45cd5b77,
              mid_setTotalTermFreq_db2028ac45cd5b77,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicStats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasicStats(const BasicStats& obj) : ::java::lang::Object(obj) {}

            BasicStats(const ::java::lang::String &, jdouble);

            jdouble getAvgFieldLength() const;
            jdouble getBoost() const;
            jlong getDocFreq() const;
            jlong getNumberOfDocuments() const;
            jlong getNumberOfFieldTokens() const;
            jlong getTotalTermFreq() const;
            void setAvgFieldLength(jdouble) const;
            void setDocFreq(jlong) const;
            void setNumberOfDocuments(jlong) const;
            void setNumberOfFieldTokens(jlong) const;
            void setTotalTermFreq(jlong) const;
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
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(BasicStats);
          extern PyTypeObject *PY_TYPE(BasicStats);

          class t_BasicStats {
          public:
            PyObject_HEAD
            BasicStats object;
            static PyObject *wrap_Object(const BasicStats&);
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
