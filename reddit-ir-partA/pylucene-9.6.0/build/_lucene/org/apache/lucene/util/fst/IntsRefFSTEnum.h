#ifndef org_apache_lucene_util_fst_IntsRefFSTEnum_H
#define org_apache_lucene_util_fst_IntsRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST;
          class IntsRefFSTEnum$InputOutput;
        }
        class IntsRef;
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

          class IntsRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
           public:
            enum {
              mid_init$_cd5d6de82c7b0383,
              mid_current_0d4c3517577e9fb9,
              mid_next_0d4c3517577e9fb9,
              mid_seekCeil_0feb5f345da16663,
              mid_seekExact_0feb5f345da16663,
              mid_seekFloor_0feb5f345da16663,
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

            explicit IntsRefFSTEnum(jobject obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntsRefFSTEnum(const IntsRefFSTEnum& obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {}

            IntsRefFSTEnum(const ::org::apache::lucene::util::fst::FST &);

            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput current() const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput next() const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekCeil(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekExact(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekFloor(const ::org::apache::lucene::util::IntsRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntsRefFSTEnum);
          extern PyTypeObject *PY_TYPE(IntsRefFSTEnum);

          class t_IntsRefFSTEnum {
          public:
            PyObject_HEAD
            IntsRefFSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntsRefFSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntsRefFSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntsRefFSTEnum&, PyTypeObject *);
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
