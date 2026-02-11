#ifndef org_apache_lucene_index_SortFieldProvider_H
#define org_apache_lucene_index_SortFieldProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
      namespace search {
        class SortField;
      }
      namespace index {
        class SortFieldProvider;
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
      namespace index {

        class SortFieldProvider : public ::java::lang::Object {
         public:
          enum {
            mid_availableSortFieldProviders_9a625d56b67c7390,
            mid_forName_646e9bf3b29da8f4,
            mid_getName_dc633f13a47328a8,
            mid_readSortField_017c656fd3f2ad05,
            mid_reloadSortFieldProviders_265d190b7c213a14,
            mid_write_2632dec841a755af,
            mid_writeSortField_2632dec841a755af,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortFieldProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortFieldProvider(const SortFieldProvider& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableSortFieldProviders();
          static SortFieldProvider forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          ::org::apache::lucene::search::SortField readSortField(const ::org::apache::lucene::store::DataInput &) const;
          static void reloadSortFieldProviders(const ::java::lang::ClassLoader &);
          static void write(const ::org::apache::lucene::search::SortField &, const ::org::apache::lucene::store::DataOutput &);
          void writeSortField(const ::org::apache::lucene::search::SortField &, const ::org::apache::lucene::store::DataOutput &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(SortFieldProvider);
        extern PyTypeObject *PY_TYPE(SortFieldProvider);

        class t_SortFieldProvider {
        public:
          PyObject_HEAD
          SortFieldProvider object;
          static PyObject *wrap_Object(const SortFieldProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
