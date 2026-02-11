#ifndef org_apache_lucene_facet_range_LongRange_H
#define org_apache_lucene_facet_range_LongRange_H

#include "org/apache/lucene/facet/range/Range.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class LongValuesSource;
      }
      namespace facet {
        class MultiLongValuesSource;
      }
    }
  }
}
namespace java {
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
      namespace facet {
        namespace range {

          class LongRange : public ::org::apache::lucene::facet::range::Range {
           public:
            enum {
              mid_init$_c098e6123bd3dab1,
              mid_accept_2000a3857a9ce9c5,
              mid_equals_6084f78e09b6c0c3,
              mid_getQuery_386bf4bf3a019c1d,
              mid_getQuery_dd4702597ab53836,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_max,
              fid_min,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRange(jobject obj) : ::org::apache::lucene::facet::range::Range(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRange(const LongRange& obj) : ::org::apache::lucene::facet::range::Range(obj) {}

            jlong _get_max() const;
            jlong _get_min() const;

            LongRange(const ::java::lang::String &, jlong, jboolean, jlong, jboolean);

            jboolean accept(jlong) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Query getQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::facet::MultiLongValuesSource &) const;
            ::org::apache::lucene::search::Query getQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::LongValuesSource &) const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
      namespace facet {
        namespace range {
          extern PyType_Def PY_TYPE_DEF(LongRange);
          extern PyTypeObject *PY_TYPE(LongRange);

          class t_LongRange {
          public:
            PyObject_HEAD
            LongRange object;
            static PyObject *wrap_Object(const LongRange&);
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
