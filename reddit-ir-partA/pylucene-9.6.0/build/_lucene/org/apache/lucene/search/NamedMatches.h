#ifndef org_apache_lucene_search_NamedMatches_H
#define org_apache_lucene_search_NamedMatches_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class NamedMatches;
        class MatchesIterator;
        class Matches;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class NamedMatches : public ::java::lang::Object {
         public:
          enum {
            mid_init$_25ea085bb17a551e,
            mid_findNamedMatches_7a9739217bc8a826,
            mid_getMatches_7745730327a85d52,
            mid_getName_dc633f13a47328a8,
            mid_getSubMatches_b47b7eaa8124fb60,
            mid_iterator_7c74834ad8788f5d,
            mid_wrapQuery_bd61f4c5390feb3c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NamedMatches(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NamedMatches(const NamedMatches& obj) : ::java::lang::Object(obj) {}

          NamedMatches(const ::java::lang::String &, const ::org::apache::lucene::search::Matches &);

          static ::java::util::List findNamedMatches(const ::org::apache::lucene::search::Matches &);
          ::org::apache::lucene::search::MatchesIterator getMatches(const ::java::lang::String &) const;
          ::java::lang::String getName() const;
          ::java::util::Collection getSubMatches() const;
          ::java::util::Iterator iterator() const;
          static ::org::apache::lucene::search::Query wrapQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &);
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
        extern PyType_Def PY_TYPE_DEF(NamedMatches);
        extern PyTypeObject *PY_TYPE(NamedMatches);

        class t_NamedMatches {
        public:
          PyObject_HEAD
          NamedMatches object;
          static PyObject *wrap_Object(const NamedMatches&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
