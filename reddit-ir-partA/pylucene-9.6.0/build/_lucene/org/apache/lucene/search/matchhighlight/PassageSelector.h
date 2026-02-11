#ifndef org_apache_lucene_search_matchhighlight_PassageSelector_H
#define org_apache_lucene_search_matchhighlight_PassageSelector_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class List;
  }
  namespace lang {
    class CharSequence;
    class Class;
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

          class PassageSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_66ceb3ec3491e504,
              mid_pickBest_c29db79b60d4783e,
              mid_pickBest_10f69fccadc2a9f4,
              mid_pickDefaultPassage_e8f4c1728ae98d44,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageSelector(const PassageSelector& obj) : ::java::lang::Object(obj) {}

            static ::java::util::Comparator *DEFAULT_SCORER;

            PassageSelector();
            PassageSelector(const ::java::util::Comparator &, const ::org::apache::lucene::search::matchhighlight::PassageAdjuster &);

            ::java::util::List pickBest(const ::java::lang::CharSequence &, const ::java::util::List &, jint, jint) const;
            ::java::util::List pickBest(const ::java::lang::CharSequence &, const ::java::util::List &, jint, jint, const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(PassageSelector);
          extern PyTypeObject *PY_TYPE(PassageSelector);

          class t_PassageSelector {
          public:
            PyObject_HEAD
            PassageSelector object;
            static PyObject *wrap_Object(const PassageSelector&);
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
