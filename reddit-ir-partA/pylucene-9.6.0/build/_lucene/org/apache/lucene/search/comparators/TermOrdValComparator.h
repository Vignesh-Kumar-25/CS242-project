#ifndef org_apache_lucene_search_comparators_TermOrdValComparator_H
#define org_apache_lucene_search_comparators_TermOrdValComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class LeafFieldComparator;
      }
      namespace index {
        class LeafReaderContext;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class TermOrdValComparator : public ::org::apache::lucene::search::FieldComparator {
           public:
            enum {
              mid_init$_8e2ead8a53a6cf6a,
              mid_compare_cd4894667d94f4d3,
              mid_compareValues_2043ccb7f68fbcb7,
              mid_disableSkipping_3353d9f14bbfd91a,
              mid_getLeafComparator_24af0401587da8a8,
              mid_setSingleSort_3353d9f14bbfd91a,
              mid_setTopValue_46caeaebccf31ffe,
              mid_value_1ad28ec3fc5251fa,
              mid_getSortedDocValues_eb0812fe7146af46,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermOrdValComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermOrdValComparator(const TermOrdValComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

            TermOrdValComparator(jint, const ::java::lang::String &, jboolean, jboolean, jboolean);

            jint compare(jint, jint) const;
            jint compareValues(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            void disableSkipping() const;
            ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setSingleSort() const;
            void setTopValue(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef value(jint) const;
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
      namespace search {
        namespace comparators {
          extern PyType_Def PY_TYPE_DEF(TermOrdValComparator);
          extern PyTypeObject *PY_TYPE(TermOrdValComparator);

          class t_TermOrdValComparator {
          public:
            PyObject_HEAD
            TermOrdValComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TermOrdValComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TermOrdValComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TermOrdValComparator&, PyTypeObject *);
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
