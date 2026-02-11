#ifndef org_apache_lucene_backward_codecs_lucene70_Lucene70NormsFormat_H
#define org_apache_lucene_backward_codecs_lucene70_Lucene70NormsFormat_H

#include "org/apache/lucene/codecs/NormsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentWriteState;
        class SegmentReadState;
      }
      namespace codecs {
        class NormsProducer;
        class NormsConsumer;
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
      namespace backward_codecs {
        namespace lucene70 {

          class Lucene70NormsFormat : public ::org::apache::lucene::codecs::NormsFormat {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_normsConsumer_051302125b3968ab,
              mid_normsProducer_aa7fdbbbe0ff52d5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene70NormsFormat(jobject obj) : ::org::apache::lucene::codecs::NormsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene70NormsFormat(const Lucene70NormsFormat& obj) : ::org::apache::lucene::codecs::NormsFormat(obj) {}

            Lucene70NormsFormat();

            ::org::apache::lucene::codecs::NormsConsumer normsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::NormsProducer normsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
      namespace backward_codecs {
        namespace lucene70 {
          extern PyType_Def PY_TYPE_DEF(Lucene70NormsFormat);
          extern PyTypeObject *PY_TYPE(Lucene70NormsFormat);

          class t_Lucene70NormsFormat {
          public:
            PyObject_HEAD
            Lucene70NormsFormat object;
            static PyObject *wrap_Object(const Lucene70NormsFormat&);
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
