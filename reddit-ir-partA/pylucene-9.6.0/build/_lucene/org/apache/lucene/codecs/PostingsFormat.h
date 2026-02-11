#ifndef org_apache_lucene_codecs_PostingsFormat_H
#define org_apache_lucene_codecs_PostingsFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentWriteState;
        class SegmentReadState;
      }
      namespace codecs {
        class PostingsFormat;
        class FieldsConsumer;
        class FieldsProducer;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Set;
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

        class PostingsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_availablePostingsFormats_9a625d56b67c7390,
            mid_fieldsConsumer_95207e04328b6d61,
            mid_fieldsProducer_1e9598eade8d7936,
            mid_forName_dd4605bd447066ad,
            mid_getName_dc633f13a47328a8,
            mid_reloadPostingsFormats_265d190b7c213a14,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsFormat(const PostingsFormat& obj) : ::java::lang::Object(obj) {}

          static JArray< PostingsFormat > *EMPTY;

          static ::java::util::Set availablePostingsFormats();
          ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
          static PostingsFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static void reloadPostingsFormats(const ::java::lang::ClassLoader &);
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
        extern PyType_Def PY_TYPE_DEF(PostingsFormat);
        extern PyTypeObject *PY_TYPE(PostingsFormat);

        class t_PostingsFormat {
        public:
          PyObject_HEAD
          PostingsFormat object;
          static PyObject *wrap_Object(const PostingsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
