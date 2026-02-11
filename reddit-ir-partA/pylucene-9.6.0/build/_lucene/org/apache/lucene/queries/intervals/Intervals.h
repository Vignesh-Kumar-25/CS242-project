#ifndef org_apache_lucene_queries_intervals_Intervals_H
#define org_apache_lucene_queries_intervals_Intervals_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    namespace function {
      class Predicate;
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
      namespace queries {
        namespace intervals {

          class Intervals : public ::java::lang::Object {
           public:
            enum {
              mid_after_7544ace3d21c8095,
              mid_analyzedText_c23846006760ff69,
              mid_analyzedText_802a95f50c8f717a,
              mid_atLeast_069478dab9a95294,
              mid_before_7544ace3d21c8095,
              mid_containedBy_7544ace3d21c8095,
              mid_containing_7544ace3d21c8095,
              mid_extend_7f4a8a609bffe5bb,
              mid_fixField_b2a9b10c73d1d393,
              mid_fuzzyTerm_a8816b040aa34912,
              mid_fuzzyTerm_e6b4464b85e3aa91,
              mid_maxgaps_7b71dfabf46924ab,
              mid_maxwidth_7b71dfabf46924ab,
              mid_multiterm_33fe1d3a2f124bc7,
              mid_multiterm_2b325e6e56cb9d97,
              mid_nonOverlapping_7544ace3d21c8095,
              mid_notContainedBy_7544ace3d21c8095,
              mid_notContaining_7544ace3d21c8095,
              mid_notWithin_dca63be6dcd228c1,
              mid_or_727b3e0bce1a79f0,
              mid_or_65c0f470650377e5,
              mid_or_791135ed23eae9c6,
              mid_or_e7541e165874d3fa,
              mid_ordered_727b3e0bce1a79f0,
              mid_overlapping_7544ace3d21c8095,
              mid_phrase_8baa2174ca591837,
              mid_phrase_727b3e0bce1a79f0,
              mid_prefix_1917b5f9f0a8d3c1,
              mid_prefix_d0dfbf3b7a51c581,
              mid_term_0c5f840c18df4687,
              mid_term_1917b5f9f0a8d3c1,
              mid_term_8b9ddbd9dedede31,
              mid_term_d3957eb310cf09d4,
              mid_unordered_727b3e0bce1a79f0,
              mid_unorderedNoOverlaps_7544ace3d21c8095,
              mid_wildcard_1917b5f9f0a8d3c1,
              mid_wildcard_d0dfbf3b7a51c581,
              mid_within_dca63be6dcd228c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Intervals(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Intervals(const Intervals& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_EXPANSIONS;

            static ::org::apache::lucene::queries::intervals::IntervalsSource after(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource analyzedText(const ::org::apache::lucene::analysis::TokenStream &, jint, jboolean);
            static ::org::apache::lucene::queries::intervals::IntervalsSource analyzedText(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, jint, jboolean);
            static ::org::apache::lucene::queries::intervals::IntervalsSource atLeast(jint, const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource before(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource containedBy(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource containing(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource extend(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource fixField(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource fuzzyTerm(const ::java::lang::String &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource fuzzyTerm(const ::java::lang::String &, jint, jint, jboolean, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxgaps(jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxwidth(jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource multiterm(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource multiterm(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, jint, const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource nonOverlapping(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notContainedBy(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notContaining(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notWithin(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(const ::java::util::List &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(jboolean, const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(jboolean, const ::java::util::List &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource ordered(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource overlapping(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource phrase(const JArray< ::java::lang::String > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource phrase(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource prefix(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource prefix(const ::org::apache::lucene::util::BytesRef &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::java::lang::String &, const ::java::util::function::Predicate &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::org::apache::lucene::util::BytesRef &, const ::java::util::function::Predicate &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource unordered(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource unorderedNoOverlaps(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource wildcard(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource wildcard(const ::org::apache::lucene::util::BytesRef &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource within(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
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
      namespace queries {
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(Intervals);
          extern PyTypeObject *PY_TYPE(Intervals);

          class t_Intervals {
          public:
            PyObject_HEAD
            Intervals object;
            static PyObject *wrap_Object(const Intervals&);
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
