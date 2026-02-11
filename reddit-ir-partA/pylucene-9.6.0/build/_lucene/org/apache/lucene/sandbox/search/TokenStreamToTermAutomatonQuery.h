#ifndef org_apache_lucene_sandbox_search_TokenStreamToTermAutomatonQuery_H
#define org_apache_lucene_sandbox_search_TokenStreamToTermAutomatonQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
      namespace sandbox {
        namespace search {
          class TermAutomatonQuery;
        }
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class TokenStreamToTermAutomatonQuery : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_setPreservePositionIncrements_4f96af910856b303,
              mid_toQuery_506e00fd7c56bcd2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenStreamToTermAutomatonQuery(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenStreamToTermAutomatonQuery(const TokenStreamToTermAutomatonQuery& obj) : ::java::lang::Object(obj) {}

            TokenStreamToTermAutomatonQuery();

            void setPreservePositionIncrements(jboolean) const;
            ::org::apache::lucene::sandbox::search::TermAutomatonQuery toQuery(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(TokenStreamToTermAutomatonQuery);
          extern PyTypeObject *PY_TYPE(TokenStreamToTermAutomatonQuery);

          class t_TokenStreamToTermAutomatonQuery {
          public:
            PyObject_HEAD
            TokenStreamToTermAutomatonQuery object;
            static PyObject *wrap_Object(const TokenStreamToTermAutomatonQuery&);
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
