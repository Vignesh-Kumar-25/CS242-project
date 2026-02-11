#ifndef org_apache_lucene_util_fst_FST_H
#define org_apache_lucene_util_fst_FST_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class Outputs;
          class FST$BytesReader;
          class FST;
          class FSTStore;
          class FST$Arc;
        }
        class Accountable;
      }
      namespace store {
        class DataOutput;
        class DataInput;
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
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class FST : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9c2790cf52bc092f,
              mid_init$_d7503e8c5a69201b,
              mid_findTargetArc_8a398e098e008313,
              mid_getBytesReader_82f2a67854cb5354,
              mid_getEmptyOutput_bdd51648087bae52,
              mid_getFirstArc_4ad9864c4e02057b,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_read_aeceff3b58d077f6,
              mid_readArcByDirectAddressing_20804c26d1cdcb20,
              mid_readArcByIndex_20804c26d1cdcb20,
              mid_readFirstRealTargetArc_d335045f215c50b1,
              mid_readFirstTargetArc_48d5ce686e491836,
              mid_readLabel_b3a5f8b269848c58,
              mid_readLastArcByDirectAddressing_d23a555e846fa2be,
              mid_readNextArc_d23a555e846fa2be,
              mid_readNextRealArc_d23a555e846fa2be,
              mid_save_9a1eff7d5b4532fc,
              mid_save_129e545bfd8bea86,
              mid_targetHasArcs_7c7b2b1047fd6bcc,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_outputs,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FST(const FST& obj) : ::java::lang::Object(obj) {}

            static jbyte ARCS_FOR_BINARY_SEARCH;
            static jint BIT_ARC_HAS_OUTPUT;
            static jint END_LABEL;

            ::org::apache::lucene::util::fst::Outputs _get_outputs() const;

            FST(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::fst::Outputs &);
            FST(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::fst::Outputs &, const ::org::apache::lucene::util::fst::FSTStore &);

            ::org::apache::lucene::util::fst::FST$Arc findTargetArc(jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$BytesReader getBytesReader() const;
            ::java::lang::Object getEmptyOutput() const;
            ::org::apache::lucene::util::fst::FST$Arc getFirstArc(const ::org::apache::lucene::util::fst::FST$Arc &) const;
            jlong ramBytesUsed() const;
            static FST read(const ::java::nio::file::Path &, const ::org::apache::lucene::util::fst::Outputs &);
            ::org::apache::lucene::util::fst::FST$Arc readArcByDirectAddressing(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &, jint) const;
            ::org::apache::lucene::util::fst::FST$Arc readArcByIndex(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &, jint) const;
            ::org::apache::lucene::util::fst::FST$Arc readFirstRealTargetArc(jlong, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readFirstTargetArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            jint readLabel(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::fst::FST$Arc readLastArcByDirectAddressing(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readNextArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readNextRealArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            void save(const ::java::nio::file::Path &) const;
            void save(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::store::DataOutput &) const;
            static jboolean targetHasArcs(const ::org::apache::lucene::util::fst::FST$Arc &);
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(FST);
          extern PyTypeObject *PY_TYPE(FST);

          class t_FST {
          public:
            PyObject_HEAD
            FST object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST&, PyTypeObject *);
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
