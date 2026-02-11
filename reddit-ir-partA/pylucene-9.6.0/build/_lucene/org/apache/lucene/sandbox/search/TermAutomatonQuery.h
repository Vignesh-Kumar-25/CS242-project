#ifndef org_apache_lucene_sandbox_search_TermAutomatonQuery_H
#define org_apache_lucene_sandbox_search_TermAutomatonQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace index {
        class IndexReader;
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
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class TermAutomatonQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_4a883f7810d2effa,
              mid_addAnyTransition_078cef180abf5351,
              mid_addTransition_ab1c7cbb103536f6,
              mid_addTransition_76e6229093d81ce2,
              mid_createState_15aa3d485e96b665,
              mid_createWeight_9d45be3ef0fc5210,
              mid_equals_6084f78e09b6c0c3,
              mid_finish_3353d9f14bbfd91a,
              mid_finish_da425451c8de636b,
              mid_hashCode_15aa3d485e96b665,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_rewrite_7da87bae82c9c483,
              mid_setAccept_5a9df8809b7e2c79,
              mid_toDot_dc633f13a47328a8,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermAutomatonQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermAutomatonQuery(const TermAutomatonQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            TermAutomatonQuery(const ::java::lang::String &);

            void addAnyTransition(jint, jint) const;
            void addTransition(jint, jint, const ::java::lang::String &) const;
            void addTransition(jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            jint createState() const;
            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            void finish() const;
            void finish(jint) const;
            jint hashCode() const;
            jlong ramBytesUsed() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setAccept(jint, jboolean) const;
            ::java::lang::String toDot() const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(TermAutomatonQuery);
          extern PyTypeObject *PY_TYPE(TermAutomatonQuery);

          class t_TermAutomatonQuery {
          public:
            PyObject_HEAD
            TermAutomatonQuery object;
            static PyObject *wrap_Object(const TermAutomatonQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
