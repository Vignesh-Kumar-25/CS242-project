#ifndef org_apache_lucene_index_IndexReaderContext_H
#define org_apache_lucene_index_IndexReaderContext_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class UnsupportedOperationException;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CompositeReaderContext;
        class IndexReaderContext;
        class IndexReader;
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexReaderContext : public ::java::lang::Object {
         public:
          enum {
            mid_children_0bc66e960964b70a,
            mid_id_bdd51648087bae52,
            mid_leaves_0bc66e960964b70a,
            mid_reader_5412d7f2b2358551,
            max_mid
          };

          enum {
            fid_docBaseInParent,
            fid_isTopLevel,
            fid_ordInParent,
            fid_parent,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexReaderContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexReaderContext(const IndexReaderContext& obj) : ::java::lang::Object(obj) {}

          jint _get_docBaseInParent() const;
          jboolean _get_isTopLevel() const;
          jint _get_ordInParent() const;
          ::org::apache::lucene::index::CompositeReaderContext _get_parent() const;

          ::java::util::List children() const;
          ::java::lang::Object id() const;
          ::java::util::List leaves() const;
          ::org::apache::lucene::index::IndexReader reader() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexReaderContext);
        extern PyTypeObject *PY_TYPE(IndexReaderContext);

        class t_IndexReaderContext {
        public:
          PyObject_HEAD
          IndexReaderContext object;
          static PyObject *wrap_Object(const IndexReaderContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
