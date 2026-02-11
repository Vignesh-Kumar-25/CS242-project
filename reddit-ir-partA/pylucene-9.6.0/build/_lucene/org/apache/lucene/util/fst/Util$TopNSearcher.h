#ifndef org_apache_lucene_util_fst_Util$TopNSearcher_H
#define org_apache_lucene_util_fst_Util$TopNSearcher_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRefBuilder;
        namespace fst {
          class FST;
          class Util$FSTPath;
          class Util$TopResults;
          class FST$Arc;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util$TopNSearcher : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ef1a58d648f1c9d5,
              mid_init$_83c5ab1bed369ba9,
              mid_addStartPaths_988635934f138e9c,
              mid_addStartPaths_60a33a94dc86722f,
              mid_search_c149baf859c40c3f,
              mid_addIfCompetitive_eba86c60d4d9dd2a,
              mid_acceptResult_816dbb4bf06f98ce,
              mid_acceptResult_2087596251e30d95,
              mid_acceptPartialPath_816dbb4bf06f98ce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$TopNSearcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Util$TopNSearcher(const Util$TopNSearcher& obj) : ::java::lang::Object(obj) {}

            Util$TopNSearcher(const ::org::apache::lucene::util::fst::FST &, jint, jint, const ::java::util::Comparator &);
            Util$TopNSearcher(const ::org::apache::lucene::util::fst::FST &, jint, jint, const ::java::util::Comparator &, const ::java::util::Comparator &);

            void addStartPaths(const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::util::IntsRefBuilder &) const;
            void addStartPaths(const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::util::IntsRefBuilder &, jfloat, const ::java::lang::CharSequence &, jint) const;
            ::org::apache::lucene::util::fst::Util$TopResults search() const;
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
          extern PyType_Def PY_TYPE_DEF(Util$TopNSearcher);
          extern PyTypeObject *PY_TYPE(Util$TopNSearcher);

          class t_Util$TopNSearcher {
          public:
            PyObject_HEAD
            Util$TopNSearcher object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$TopNSearcher *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$TopNSearcher&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$TopNSearcher&, PyTypeObject *);
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
