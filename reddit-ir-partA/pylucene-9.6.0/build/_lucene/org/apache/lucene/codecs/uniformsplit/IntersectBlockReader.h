#ifndef org_apache_lucene_codecs_uniformsplit_IntersectBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_IntersectBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermState;
        class TermsEnum$SeekStatus;
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

          class IntersectBlockReader : public ::org::apache::lucene::codecs::uniformsplit::BlockReader {
           public:
            enum {
              mid_next_e6961a1ebae5a29a,
              mid_seekCeil_9eba252e35b6bc50,
              mid_seekExact_d146ede34c2ecacf,
              mid_seekExact_db2028ac45cd5b77,
              mid_seekExact_e2a49f0a9649fd0e,
              mid_nextBlock_ee8b0a5fa521ddac,
              mid_getMinTermLength_15aa3d485e96b665,
              mid_seekFirstBlock_ee8b0a5fa521ddac,
              mid_nextTermInBlockMatching_e6961a1ebae5a29a,
              mid_endsWithCommonSuffix_9f377c6299706fec,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntersectBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntersectBlockReader(const IntersectBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {}

            ::org::apache::lucene::util::BytesRef next() const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(IntersectBlockReader);
          extern PyTypeObject *PY_TYPE(IntersectBlockReader);

          class t_IntersectBlockReader {
          public:
            PyObject_HEAD
            IntersectBlockReader object;
            static PyObject *wrap_Object(const IntersectBlockReader&);
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
