#ifndef org_apache_lucene_search_LiveFieldValues_H
#define org_apache_lucene_search_LiveFieldValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager$RefreshListener;
        class ReferenceManager;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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

        class LiveFieldValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b1970cd9bf87c467,
            mid_add_d3d9e43ce4a29095,
            mid_afterRefresh_4f96af910856b303,
            mid_beforeRefresh_3353d9f14bbfd91a,
            mid_close_3353d9f14bbfd91a,
            mid_delete_4a883f7810d2effa,
            mid_get_b03820155b67db98,
            mid_size_15aa3d485e96b665,
            mid_lookupFromSearcher_a51f7027b33dc26c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveFieldValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LiveFieldValues(const LiveFieldValues& obj) : ::java::lang::Object(obj) {}

          LiveFieldValues(const ::org::apache::lucene::search::ReferenceManager &, const ::java::lang::Object &);

          void add(const ::java::lang::String &, const ::java::lang::Object &) const;
          void afterRefresh(jboolean) const;
          void beforeRefresh() const;
          void close() const;
          void delete$(const ::java::lang::String &) const;
          ::java::lang::Object get(const ::java::lang::String &) const;
          jint size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(LiveFieldValues);
        extern PyTypeObject *PY_TYPE(LiveFieldValues);

        class t_LiveFieldValues {
        public:
          PyObject_HEAD
          LiveFieldValues object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_LiveFieldValues *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LiveFieldValues&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LiveFieldValues&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
