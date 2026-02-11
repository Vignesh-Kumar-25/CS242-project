#ifndef org_apache_lucene_util_packed_AbstractPagedMutable_H
#define org_apache_lucene_util_packed_AbstractPagedMutable_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class AbstractPagedMutable;
        }
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class AbstractPagedMutable : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_get_df4b83f9c1b9d174,
              mid_grow_992bf563d64f3008,
              mid_grow_55e783681c5d7c3b,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_resize_55e783681c5d7c3b,
              mid_set_330edd6fec9fab93,
              mid_size_058f5911dcf5d8a4,
              mid_toString_dc633f13a47328a8,
              mid_baseRamBytesUsed_058f5911dcf5d8a4,
              mid_fillPages_3353d9f14bbfd91a,
              mid_newMutable_c6ea3949c61e96a4,
              mid_newUnfilledCopy_55e783681c5d7c3b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractPagedMutable(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractPagedMutable(const AbstractPagedMutable& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong get(jlong) const;
            AbstractPagedMutable grow() const;
            AbstractPagedMutable grow(jlong) const;
            jlong ramBytesUsed() const;
            AbstractPagedMutable resize(jlong) const;
            void set(jlong, jlong) const;
            jlong size() const;
            ::java::lang::String toString() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(AbstractPagedMutable);
          extern PyTypeObject *PY_TYPE(AbstractPagedMutable);

          class t_AbstractPagedMutable {
          public:
            PyObject_HEAD
            AbstractPagedMutable object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractPagedMutable *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractPagedMutable&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractPagedMutable&, PyTypeObject *);
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
