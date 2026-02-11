#ifndef org_apache_lucene_search_matchhighlight_BreakIteratorShrinkingAdjuster_H
#define org_apache_lucene_search_matchhighlight_BreakIteratorShrinkingAdjuster_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace text {
    class BreakIterator;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class Passage;
          class PassageAdjuster;
          class OffsetRange;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class BreakIteratorShrinkingAdjuster : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_30742cc4dbfb0d6e,
              mid_adjust_b69fb12652d0df5d,
              mid_currentValue_b00f79ee482db81d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BreakIteratorShrinkingAdjuster(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BreakIteratorShrinkingAdjuster(const BreakIteratorShrinkingAdjuster& obj) : ::java::lang::Object(obj) {}

            BreakIteratorShrinkingAdjuster();
            BreakIteratorShrinkingAdjuster(const ::java::text::BreakIterator &);

            ::org::apache::lucene::search::matchhighlight::OffsetRange adjust(const ::org::apache::lucene::search::matchhighlight::Passage &) const;
            void currentValue(const ::java::lang::CharSequence &) const;
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
      namespace search {
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(BreakIteratorShrinkingAdjuster);
          extern PyTypeObject *PY_TYPE(BreakIteratorShrinkingAdjuster);

          class t_BreakIteratorShrinkingAdjuster {
          public:
            PyObject_HEAD
            BreakIteratorShrinkingAdjuster object;
            static PyObject *wrap_Object(const BreakIteratorShrinkingAdjuster&);
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
