#ifndef org_apache_lucene_monitor_HighlightsMatch$Hit_H
#define org_apache_lucene_monitor_HighlightsMatch$Hit_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class HighlightsMatch$Hit;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class HighlightsMatch$Hit : public ::java::lang::Object {
         public:
          enum {
            mid_init$_dfabecda8fb9b5ea,
            mid_compareTo_f9d8ef9185f833ce,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_endOffset,
            fid_endPosition,
            fid_startOffset,
            fid_startPosition,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighlightsMatch$Hit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighlightsMatch$Hit(const HighlightsMatch$Hit& obj) : ::java::lang::Object(obj) {}

          jint _get_endOffset() const;
          jint _get_endPosition() const;
          jint _get_startOffset() const;
          jint _get_startPosition() const;

          HighlightsMatch$Hit(jint, jint, jint, jint);

          jint compareTo(const HighlightsMatch$Hit &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(HighlightsMatch$Hit);
        extern PyTypeObject *PY_TYPE(HighlightsMatch$Hit);

        class t_HighlightsMatch$Hit {
        public:
          PyObject_HEAD
          HighlightsMatch$Hit object;
          static PyObject *wrap_Object(const HighlightsMatch$Hit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
