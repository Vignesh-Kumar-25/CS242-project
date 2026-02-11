#ifndef org_apache_lucene_util_fst_BytesRefFSTEnum_H
#define org_apache_lucene_util_fst_BytesRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace fst {
          class FST;
          class BytesRefFSTEnum$InputOutput;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class BytesRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
           public:
            enum {
              mid_init$_cd5d6de82c7b0383,
              mid_current_5544ddf27d877b5d,
              mid_next_5544ddf27d877b5d,
              mid_seekCeil_fec7a26640148e62,
              mid_seekExact_fec7a26640148e62,
              mid_seekFloor_fec7a26640148e62,
              mid_getCurrentLabel_15aa3d485e96b665,
              mid_setCurrentLabel_da425451c8de636b,
              mid_getTargetLabel_15aa3d485e96b665,
              mid_grow_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BytesRefFSTEnum(jobject obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BytesRefFSTEnum(const BytesRefFSTEnum& obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {}

            BytesRefFSTEnum(const ::org::apache::lucene::util::fst::FST &);

            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput current() const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput next() const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekFloor(const ::org::apache::lucene::util::BytesRef &) const;
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(BytesRefFSTEnum);
          extern PyTypeObject *PY_TYPE(BytesRefFSTEnum);

          class t_BytesRefFSTEnum {
          public:
            PyObject_HEAD
            BytesRefFSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BytesRefFSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BytesRefFSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BytesRefFSTEnum&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
