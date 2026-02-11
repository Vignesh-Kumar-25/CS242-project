#ifndef org_apache_lucene_payloads_PayloadSpanCollector_H
#define org_apache_lucene_payloads_PayloadSpanCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanCollector;
        }
      }
      namespace index {
        class Term;
        class PostingsEnum;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace payloads {

        class PayloadSpanCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_collectLeaf_71faa65a0d37a079,
            mid_getPayloads_b47b7eaa8124fb60,
            mid_reset_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PayloadSpanCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PayloadSpanCollector(const PayloadSpanCollector& obj) : ::java::lang::Object(obj) {}

          PayloadSpanCollector();

          void collectLeaf(const ::org::apache::lucene::index::PostingsEnum &, jint, const ::org::apache::lucene::index::Term &) const;
          ::java::util::Collection getPayloads() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace payloads {
        extern PyType_Def PY_TYPE_DEF(PayloadSpanCollector);
        extern PyTypeObject *PY_TYPE(PayloadSpanCollector);

        class t_PayloadSpanCollector {
        public:
          PyObject_HEAD
          PayloadSpanCollector object;
          static PyObject *wrap_Object(const PayloadSpanCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
