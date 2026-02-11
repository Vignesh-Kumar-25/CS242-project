#ifndef org_apache_lucene_facet_taxonomy_DocValuesOrdinalsReader_H
#define org_apache_lucene_facet_taxonomy_DocValuesOrdinalsReader_H

#include "org/apache/lucene/facet/taxonomy/OrdinalsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class IntsRef;
      }
      namespace index {
        class LeafReaderContext;
      }
      namespace facet {
        namespace taxonomy {
          class OrdinalsReader$OrdinalsSegmentReader;
        }
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class DocValuesOrdinalsReader : public ::org::apache::lucene::facet::taxonomy::OrdinalsReader {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_4a883f7810d2effa,
              mid_decode_7a6266f0b57ee062,
              mid_getIndexFieldName_dc633f13a47328a8,
              mid_getReader_8e432932f5bdc720,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesOrdinalsReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesOrdinalsReader(const DocValuesOrdinalsReader& obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {}

            DocValuesOrdinalsReader();
            DocValuesOrdinalsReader(const ::java::lang::String &);

            void decode(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::java::lang::String getIndexFieldName() const;
            ::org::apache::lucene::facet::taxonomy::OrdinalsReader$OrdinalsSegmentReader getReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(DocValuesOrdinalsReader);
          extern PyTypeObject *PY_TYPE(DocValuesOrdinalsReader);

          class t_DocValuesOrdinalsReader {
          public:
            PyObject_HEAD
            DocValuesOrdinalsReader object;
            static PyObject *wrap_Object(const DocValuesOrdinalsReader&);
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
