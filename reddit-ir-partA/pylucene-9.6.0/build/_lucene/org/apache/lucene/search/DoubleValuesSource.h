#ifndef org_apache_lucene_search_DoubleValuesSource_H
#define org_apache_lucene_search_DoubleValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
        class Explanation;
        class LongValuesSource;
        class DoubleValuesSource;
        class Scorable;
        class SegmentCacheable;
        class SortField;
        class DoubleValues;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class LongToDoubleFunction;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DoubleValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_constant_67738e3118456e96,
            mid_equals_6084f78e09b6c0c3,
            mid_explain_256278eb63995c0f,
            mid_fromDoubleField_b4b0a824e5bc479e,
            mid_fromField_a89aee97531d0668,
            mid_fromFloatField_b4b0a824e5bc479e,
            mid_fromIntField_b4b0a824e5bc479e,
            mid_fromLongField_b4b0a824e5bc479e,
            mid_fromQuery_f396d00cccab259d,
            mid_fromScorer_1688455dbe82d2b5,
            mid_getSortField_d261ca5cf3b961c7,
            mid_getValues_887b529fc0eed9d7,
            mid_hashCode_15aa3d485e96b665,
            mid_needsScores_ee8b0a5fa521ddac,
            mid_rewrite_24a4f1b91c3516e8,
            mid_toLongValuesSource_f9e6e0f77d373cc1,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleValuesSource(const DoubleValuesSource& obj) : ::java::lang::Object(obj) {}

          static DoubleValuesSource *SCORES;

          DoubleValuesSource();

          static DoubleValuesSource constant(jdouble);
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint, const ::org::apache::lucene::search::Explanation &) const;
          static DoubleValuesSource fromDoubleField(const ::java::lang::String &);
          static DoubleValuesSource fromField(const ::java::lang::String &, const ::java::util::function::LongToDoubleFunction &);
          static DoubleValuesSource fromFloatField(const ::java::lang::String &);
          static DoubleValuesSource fromIntField(const ::java::lang::String &);
          static DoubleValuesSource fromLongField(const ::java::lang::String &);
          static DoubleValuesSource fromQuery(const ::org::apache::lucene::search::Query &);
          static ::org::apache::lucene::search::DoubleValues fromScorer(const ::org::apache::lucene::search::Scorable &);
          ::org::apache::lucene::search::SortField getSortField(jboolean) const;
          ::org::apache::lucene::search::DoubleValues getValues(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DoubleValues &) const;
          jint hashCode() const;
          jboolean needsScores() const;
          DoubleValuesSource rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          ::org::apache::lucene::search::LongValuesSource toLongValuesSource() const;
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
        extern PyType_Def PY_TYPE_DEF(DoubleValuesSource);
        extern PyTypeObject *PY_TYPE(DoubleValuesSource);

        class t_DoubleValuesSource {
        public:
          PyObject_HEAD
          DoubleValuesSource object;
          static PyObject *wrap_Object(const DoubleValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
