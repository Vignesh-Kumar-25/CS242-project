#ifndef org_apache_lucene_analysis_miscellaneous_StemmerOverrideFilter$StemmerOverrideMap_H
#define org_apache_lucene_analysis_miscellaneous_StemmerOverrideFilter$StemmerOverrideMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FST;
          class FST$Arc;
        }
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace io {
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
        namespace miscellaneous {

          class StemmerOverrideFilter$StemmerOverrideMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2c4c73dd970863ff,
              mid_get_4eec4b1fb07a05ac,
              mid_getBytesReader_82f2a67854cb5354,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StemmerOverrideFilter$StemmerOverrideMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StemmerOverrideFilter$StemmerOverrideMap(const StemmerOverrideFilter$StemmerOverrideMap& obj) : ::java::lang::Object(obj) {}

            StemmerOverrideFilter$StemmerOverrideMap(const ::org::apache::lucene::util::fst::FST &, jboolean);

            ::org::apache::lucene::util::BytesRef get(const JArray< jchar > &, jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$BytesReader getBytesReader() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(StemmerOverrideFilter$StemmerOverrideMap);
          extern PyTypeObject *PY_TYPE(StemmerOverrideFilter$StemmerOverrideMap);

          class t_StemmerOverrideFilter$StemmerOverrideMap {
          public:
            PyObject_HEAD
            StemmerOverrideFilter$StemmerOverrideMap object;
            static PyObject *wrap_Object(const StemmerOverrideFilter$StemmerOverrideMap&);
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
