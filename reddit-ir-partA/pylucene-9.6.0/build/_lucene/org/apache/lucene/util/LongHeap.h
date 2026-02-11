#ifndef org_apache_lucene_util_LongHeap_H
#define org_apache_lucene_util_LongHeap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongHeap;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class LongHeap : public ::java::lang::Object {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_clear_3353d9f14bbfd91a,
            mid_get_70b2a956d0e32bc7,
            mid_insertWithOverflow_2000a3857a9ce9c5,
            mid_pop_058f5911dcf5d8a4,
            mid_push_df4b83f9c1b9d174,
            mid_pushAll_297db32ff1428bc2,
            mid_size_15aa3d485e96b665,
            mid_top_058f5911dcf5d8a4,
            mid_updateTop_df4b83f9c1b9d174,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongHeap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongHeap(const LongHeap& obj) : ::java::lang::Object(obj) {}

          LongHeap(jint);

          void clear() const;
          jlong get(jint) const;
          jboolean insertWithOverflow(jlong) const;
          jlong pop() const;
          jlong push(jlong) const;
          void pushAll(const LongHeap &) const;
          jint size() const;
          jlong top() const;
          jlong updateTop(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(LongHeap);
        extern PyTypeObject *PY_TYPE(LongHeap);

        class t_LongHeap {
        public:
          PyObject_HEAD
          LongHeap object;
          static PyObject *wrap_Object(const LongHeap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
