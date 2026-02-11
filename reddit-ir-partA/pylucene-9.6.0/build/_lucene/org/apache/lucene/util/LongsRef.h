#ifndef org_apache_lucene_util_LongsRef_H
#define org_apache_lucene_util_LongsRef_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongsRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Cloneable;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class LongsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_da425451c8de636b,
            mid_init$_4e526d67da638372,
            mid_clone_26a259bc77c4042b,
            mid_compareTo_f8fcc11b045a73fb,
            mid_deepCopyOf_0950bf92bd1e1163,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_isValid_ee8b0a5fa521ddac,
            mid_longsEquals_e88cb08f35320dbc,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_length,
            fid_longs,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongsRef(const LongsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jlong > *EMPTY_LONGS;

          jint _get_length() const;
          void _set_length(jint) const;
          JArray< jlong > _get_longs() const;
          void _set_longs(const JArray< jlong > &) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          LongsRef();
          LongsRef(jint);
          LongsRef(const JArray< jlong > &, jint, jint);

          LongsRef clone() const;
          jint compareTo(const LongsRef &) const;
          static LongsRef deepCopyOf(const LongsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean isValid() const;
          jboolean longsEquals(const LongsRef &) const;
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
      namespace util {
        extern PyType_Def PY_TYPE_DEF(LongsRef);
        extern PyTypeObject *PY_TYPE(LongsRef);

        class t_LongsRef {
        public:
          PyObject_HEAD
          LongsRef object;
          static PyObject *wrap_Object(const LongsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
