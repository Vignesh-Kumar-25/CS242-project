#ifndef org_apache_lucene_codecs_DocValuesFormat_H
#define org_apache_lucene_codecs_DocValuesFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentWriteState;
        class SegmentReadState;
      }
      namespace codecs {
        class DocValuesConsumer;
        class DocValuesProducer;
        class DocValuesFormat;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class DocValuesFormat : public ::java::lang::Object {
         public:
          enum {
            mid_availableDocValuesFormats_9a625d56b67c7390,
            mid_fieldsConsumer_6a590a7191e3c0fb,
            mid_fieldsProducer_8df89abc367e75b8,
            mid_forName_1cf473b5c7a1e815,
            mid_getName_dc633f13a47328a8,
            mid_reloadDocValuesFormats_265d190b7c213a14,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesFormat(const DocValuesFormat& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableDocValuesFormats();
          ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
          static DocValuesFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static void reloadDocValuesFormats(const ::java::lang::ClassLoader &);
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
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(DocValuesFormat);
        extern PyTypeObject *PY_TYPE(DocValuesFormat);

        class t_DocValuesFormat {
        public:
          PyObject_HEAD
          DocValuesFormat object;
          static PyObject *wrap_Object(const DocValuesFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
