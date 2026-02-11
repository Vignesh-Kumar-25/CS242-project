#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitTermsReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitTermsReader_H

#include "org/apache/lucene/codecs/uniformsplit/UniformSplitTermsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class BlockDecoder;
        }
        class PostingsReaderBase;
      }
      namespace index {
        class SegmentReadState;
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STUniformSplitTermsReader : public ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsReader {
             public:
              enum {
                mid_init$_ddb55aee19e661e5,
                mid_fillFieldMap_a884d7f0db6aef83,
                mid_createUnionFieldMetadata_773c349d4d01a2b1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STUniformSplitTermsReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STUniformSplitTermsReader(const STUniformSplitTermsReader& obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsReader(obj) {}

              STUniformSplitTermsReader(const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, jboolean);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STUniformSplitTermsReader);
            extern PyTypeObject *PY_TYPE(STUniformSplitTermsReader);

            class t_STUniformSplitTermsReader {
            public:
              PyObject_HEAD
              STUniformSplitTermsReader object;
              static PyObject *wrap_Object(const STUniformSplitTermsReader&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
