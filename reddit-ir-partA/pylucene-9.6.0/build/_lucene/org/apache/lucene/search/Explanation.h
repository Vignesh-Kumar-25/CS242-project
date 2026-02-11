#ifndef org_apache_lucene_search_Explanation_H
#define org_apache_lucene_search_Explanation_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Number;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Explanation : public ::java::lang::Object {
         public:
          enum {
            mid_equals_6084f78e09b6c0c3,
            mid_getDescription_dc633f13a47328a8,
            mid_getDetails_cbbeef0ee1b70b9b,
            mid_getValue_72def02dd614d827,
            mid_hashCode_15aa3d485e96b665,
            mid_isMatch_ee8b0a5fa521ddac,
            mid_match_fdf2c771bbeceae2,
            mid_match_37fcd9c21e820ee5,
            mid_noMatch_bf92d728bdad15fc,
            mid_noMatch_197747838d784940,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Explanation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Explanation(const Explanation& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getDescription() const;
          JArray< Explanation > getDetails() const;
          ::java::lang::Number getValue() const;
          jint hashCode() const;
          jboolean isMatch() const;
          static Explanation match(const ::java::lang::Number &, const ::java::lang::String &, const JArray< Explanation > &);
          static Explanation match(const ::java::lang::Number &, const ::java::lang::String &, const ::java::util::Collection &);
          static Explanation noMatch(const ::java::lang::String &, const JArray< Explanation > &);
          static Explanation noMatch(const ::java::lang::String &, const ::java::util::Collection &);
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(Explanation);
        extern PyTypeObject *PY_TYPE(Explanation);

        class t_Explanation {
        public:
          PyObject_HEAD
          Explanation object;
          static PyObject *wrap_Object(const Explanation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
