#ifndef org_apache_lucene_facet_taxonomy_BackCompatSortedNumericDocValues_H
#define org_apache_lucene_facet_taxonomy_BackCompatSortedNumericDocValues_H

#include "org/apache/lucene/index/SortedNumericDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class IntsRef;
      }
      namespace index {
        class BinaryDocValues;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    namespace function {
      class BiConsumer;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class BackCompatSortedNumericDocValues : public ::org::apache::lucene::index::SortedNumericDocValues {
           public:
            enum {
              mid_advance_58b165b57740feff,
              mid_advanceExact_92eccba87b045bbc,
              mid_cost_058f5911dcf5d8a4,
              mid_docID_15aa3d485e96b665,
              mid_docValueCount_15aa3d485e96b665,
              mid_nextDoc_15aa3d485e96b665,
              mid_nextValue_058f5911dcf5d8a4,
              mid_wrap_62aa2647a85faa1a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BackCompatSortedNumericDocValues(jobject obj) : ::org::apache::lucene::index::SortedNumericDocValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BackCompatSortedNumericDocValues(const BackCompatSortedNumericDocValues& obj) : ::org::apache::lucene::index::SortedNumericDocValues(obj) {}

            jint advance(jint) const;
            jboolean advanceExact(jint) const;
            jlong cost() const;
            jint docID() const;
            jint docValueCount() const;
            jint nextDoc() const;
            jlong nextValue() const;
            static ::org::apache::lucene::index::SortedNumericDocValues wrap(const ::org::apache::lucene::index::BinaryDocValues &, const ::java::util::function::BiConsumer &);
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
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(BackCompatSortedNumericDocValues);
          extern PyTypeObject *PY_TYPE(BackCompatSortedNumericDocValues);

          class t_BackCompatSortedNumericDocValues {
          public:
            PyObject_HEAD
            BackCompatSortedNumericDocValues object;
            static PyObject *wrap_Object(const BackCompatSortedNumericDocValues&);
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
