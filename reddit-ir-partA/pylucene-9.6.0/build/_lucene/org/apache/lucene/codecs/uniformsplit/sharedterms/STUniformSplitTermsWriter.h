#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitTermsWriter_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitTermsWriter_H

#include "org/apache/lucene/codecs/uniformsplit/UniformSplitTermsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class SegmentWriteState;
        class Fields;
      }
      namespace codecs {
        class NormsProducer;
        namespace uniformsplit {
          class BlockEncoder;
        }
        class PostingsWriterBase;
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

            class STUniformSplitTermsWriter : public ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsWriter {
             public:
              enum {
                mid_init$_a8fa0ed828fb0168,
                mid_init$_fcee30310b79461e,
                mid_merge_ffb3640445e072a1,
                mid_write_1c5943e17cbcb841,
                mid_writeDictionary_eb52d4c88ec8df51,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STUniformSplitTermsWriter(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STUniformSplitTermsWriter(const STUniformSplitTermsWriter& obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsWriter(obj) {}

              STUniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);
              STUniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);

              void merge(const ::org::apache::lucene::index::MergeState &, const ::org::apache::lucene::codecs::NormsProducer &) const;
              void write(const ::org::apache::lucene::index::Fields &, const ::org::apache::lucene::codecs::NormsProducer &) const;
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
            extern PyType_Def PY_TYPE_DEF(STUniformSplitTermsWriter);
            extern PyTypeObject *PY_TYPE(STUniformSplitTermsWriter);

            class t_STUniformSplitTermsWriter {
            public:
              PyObject_HEAD
              STUniformSplitTermsWriter object;
              static PyObject *wrap_Object(const STUniformSplitTermsWriter&);
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
