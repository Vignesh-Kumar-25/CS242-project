#ifndef org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat$SimpleTextNormsConsumer_H
#define org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat$SimpleTextNormsConsumer_H

#include "org/apache/lucene/codecs/NormsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentWriteState;
        class FieldInfo;
      }
      namespace codecs {
        class NormsProducer;
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
        namespace simpletext {

          class SimpleTextNormsFormat$SimpleTextNormsConsumer : public ::org::apache::lucene::codecs::NormsConsumer {
           public:
            enum {
              mid_init$_cde348df1e26e832,
              mid_addNormsField_aca18aacb63a7e4c,
              mid_close_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextNormsFormat$SimpleTextNormsConsumer(jobject obj) : ::org::apache::lucene::codecs::NormsConsumer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextNormsFormat$SimpleTextNormsConsumer(const SimpleTextNormsFormat$SimpleTextNormsConsumer& obj) : ::org::apache::lucene::codecs::NormsConsumer(obj) {}

            SimpleTextNormsFormat$SimpleTextNormsConsumer(const ::org::apache::lucene::index::SegmentWriteState &);

            void addNormsField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::NormsProducer &) const;
            void close() const;
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
      namespace codecs {
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextNormsFormat$SimpleTextNormsConsumer);
          extern PyTypeObject *PY_TYPE(SimpleTextNormsFormat$SimpleTextNormsConsumer);

          class t_SimpleTextNormsFormat$SimpleTextNormsConsumer {
          public:
            PyObject_HEAD
            SimpleTextNormsFormat$SimpleTextNormsConsumer object;
            static PyObject *wrap_Object(const SimpleTextNormsFormat$SimpleTextNormsConsumer&);
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
