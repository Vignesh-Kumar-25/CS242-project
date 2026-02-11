#ifndef org_apache_lucene_misc_search_DiversifiedTopDocsCollector_H
#define org_apache_lucene_misc_search_DiversifiedTopDocsCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class ScoreMode;
      }
      namespace misc {
        namespace search {
          class DiversifiedTopDocsCollector$ScoreDocKey;
        }
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {

          class DiversifiedTopDocsCollector : public ::org::apache::lucene::search::TopDocsCollector {
           public:
            enum {
              mid_init$_078cef180abf5351,
              mid_getLeafCollector_dcdb54a62a154134,
              mid_scoreMode_2c1f1f28428089a8,
              mid_newTopDocs_9d803f831119b07b,
              mid_getKeys_6cfa1b6605f71681,
              mid_insert_0aa70ba74aa758fa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DiversifiedTopDocsCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DiversifiedTopDocsCollector(const DiversifiedTopDocsCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

            DiversifiedTopDocsCollector(jint, jint);

            ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
      namespace misc {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(DiversifiedTopDocsCollector);
          extern PyTypeObject *PY_TYPE(DiversifiedTopDocsCollector);

          class t_DiversifiedTopDocsCollector {
          public:
            PyObject_HEAD
            DiversifiedTopDocsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DiversifiedTopDocsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DiversifiedTopDocsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DiversifiedTopDocsCollector&, PyTypeObject *);
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
