#ifndef java_util_concurrent_CompletionStage_H
#define java_util_concurrent_CompletionStage_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace concurrent {
      class CompletionStage;
      class Executor;
      class CompletableFuture;
    }
    namespace function {
      class Function;
      class BiFunction;
      class BiConsumer;
      class Consumer;
    }
  }
  namespace lang {
    class Runnable;
    class Throwable;
    class Void;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class CompletionStage : public ::java::lang::Object {
       public:
        enum {
          mid_acceptEither_6d50dcc4f58cf755,
          mid_acceptEitherAsync_6d50dcc4f58cf755,
          mid_acceptEitherAsync_2eb58a6d2d2b0813,
          mid_applyToEither_54a8ba61b3250c3b,
          mid_applyToEitherAsync_54a8ba61b3250c3b,
          mid_applyToEitherAsync_e0a555ca4c6de60c,
          mid_exceptionally_5748580700426970,
          mid_handle_08736b926203a1f0,
          mid_handleAsync_08736b926203a1f0,
          mid_handleAsync_7ca42f0d6b02b035,
          mid_runAfterBoth_38fe868859f9865f,
          mid_runAfterBothAsync_38fe868859f9865f,
          mid_runAfterBothAsync_c5461d37d96a02a1,
          mid_runAfterEither_38fe868859f9865f,
          mid_runAfterEitherAsync_38fe868859f9865f,
          mid_runAfterEitherAsync_c5461d37d96a02a1,
          mid_thenAccept_bcfd8cbf52e8432d,
          mid_thenAcceptAsync_bcfd8cbf52e8432d,
          mid_thenAcceptAsync_7061ec2c0ba1a770,
          mid_thenAcceptBoth_74cace025a62f9d8,
          mid_thenAcceptBothAsync_74cace025a62f9d8,
          mid_thenAcceptBothAsync_c744332d1ca99008,
          mid_thenApply_5748580700426970,
          mid_thenApplyAsync_5748580700426970,
          mid_thenApplyAsync_04c0c6ed05cd9d1e,
          mid_thenCombine_04401f62199716c1,
          mid_thenCombineAsync_04401f62199716c1,
          mid_thenCombineAsync_aed2c33789d775a3,
          mid_thenCompose_5748580700426970,
          mid_thenComposeAsync_5748580700426970,
          mid_thenComposeAsync_04c0c6ed05cd9d1e,
          mid_thenRun_688b8c0d4d502a05,
          mid_thenRunAsync_688b8c0d4d502a05,
          mid_thenRunAsync_ef64b2cc65c808e7,
          mid_toCompletableFuture_8b022ffd0e46887e,
          mid_whenComplete_4ae251fda5832216,
          mid_whenCompleteAsync_4ae251fda5832216,
          mid_whenCompleteAsync_d7ec8f4231a1b78c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CompletionStage(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CompletionStage(const CompletionStage& obj) : ::java::lang::Object(obj) {}

        CompletionStage acceptEither(const CompletionStage &, const ::java::util::function::Consumer &) const;
        CompletionStage acceptEitherAsync(const CompletionStage &, const ::java::util::function::Consumer &) const;
        CompletionStage acceptEitherAsync(const CompletionStage &, const ::java::util::function::Consumer &, const ::java::util::concurrent::Executor &) const;
        CompletionStage applyToEither(const CompletionStage &, const ::java::util::function::Function &) const;
        CompletionStage applyToEitherAsync(const CompletionStage &, const ::java::util::function::Function &) const;
        CompletionStage applyToEitherAsync(const CompletionStage &, const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletionStage exceptionally(const ::java::util::function::Function &) const;
        CompletionStage handle(const ::java::util::function::BiFunction &) const;
        CompletionStage handleAsync(const ::java::util::function::BiFunction &) const;
        CompletionStage handleAsync(const ::java::util::function::BiFunction &, const ::java::util::concurrent::Executor &) const;
        CompletionStage runAfterBoth(const CompletionStage &, const ::java::lang::Runnable &) const;
        CompletionStage runAfterBothAsync(const CompletionStage &, const ::java::lang::Runnable &) const;
        CompletionStage runAfterBothAsync(const CompletionStage &, const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        CompletionStage runAfterEither(const CompletionStage &, const ::java::lang::Runnable &) const;
        CompletionStage runAfterEitherAsync(const CompletionStage &, const ::java::lang::Runnable &) const;
        CompletionStage runAfterEitherAsync(const CompletionStage &, const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenAccept(const ::java::util::function::Consumer &) const;
        CompletionStage thenAcceptAsync(const ::java::util::function::Consumer &) const;
        CompletionStage thenAcceptAsync(const ::java::util::function::Consumer &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenAcceptBoth(const CompletionStage &, const ::java::util::function::BiConsumer &) const;
        CompletionStage thenAcceptBothAsync(const CompletionStage &, const ::java::util::function::BiConsumer &) const;
        CompletionStage thenAcceptBothAsync(const CompletionStage &, const ::java::util::function::BiConsumer &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenApply(const ::java::util::function::Function &) const;
        CompletionStage thenApplyAsync(const ::java::util::function::Function &) const;
        CompletionStage thenApplyAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenCombine(const CompletionStage &, const ::java::util::function::BiFunction &) const;
        CompletionStage thenCombineAsync(const CompletionStage &, const ::java::util::function::BiFunction &) const;
        CompletionStage thenCombineAsync(const CompletionStage &, const ::java::util::function::BiFunction &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenCompose(const ::java::util::function::Function &) const;
        CompletionStage thenComposeAsync(const ::java::util::function::Function &) const;
        CompletionStage thenComposeAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenRun(const ::java::lang::Runnable &) const;
        CompletionStage thenRunAsync(const ::java::lang::Runnable &) const;
        CompletionStage thenRunAsync(const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        ::java::util::concurrent::CompletableFuture toCompletableFuture() const;
        CompletionStage whenComplete(const ::java::util::function::BiConsumer &) const;
        CompletionStage whenCompleteAsync(const ::java::util::function::BiConsumer &) const;
        CompletionStage whenCompleteAsync(const ::java::util::function::BiConsumer &, const ::java::util::concurrent::Executor &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(CompletionStage);
      extern PyTypeObject *PY_TYPE(CompletionStage);

      class t_CompletionStage {
      public:
        PyObject_HEAD
        CompletionStage object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CompletionStage *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CompletionStage&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CompletionStage&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
