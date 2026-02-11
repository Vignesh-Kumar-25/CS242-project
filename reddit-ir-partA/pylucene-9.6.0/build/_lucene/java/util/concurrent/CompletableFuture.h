#ifndef java_util_concurrent_CompletableFuture_H
#define java_util_concurrent_CompletableFuture_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace concurrent {
      class Executor;
      class TimeUnit;
      class ExecutionException;
      class CompletableFuture;
      class Future;
      class CompletionStage;
      class TimeoutException;
    }
    namespace function {
      class Supplier;
      class Function;
      class BiConsumer;
      class BiFunction;
      class Consumer;
    }
  }
  namespace lang {
    class Void;
    class Runnable;
    class Throwable;
    class InterruptedException;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class CompletableFuture : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3353d9f14bbfd91a,
          mid_acceptEither_a7af683e7a5c6c94,
          mid_acceptEitherAsync_a7af683e7a5c6c94,
          mid_acceptEitherAsync_ebf67de440dfaf4c,
          mid_allOf_4da217f58ae8dce7,
          mid_anyOf_4da217f58ae8dce7,
          mid_applyToEither_75a770c486372b8e,
          mid_applyToEitherAsync_75a770c486372b8e,
          mid_applyToEitherAsync_0c708963e19b4f1b,
          mid_cancel_c0205ec42405174a,
          mid_complete_6084f78e09b6c0c3,
          mid_completeAsync_df1399f7edb341e1,
          mid_completeAsync_09f5277720de4955,
          mid_completeExceptionally_e60438c935d263eb,
          mid_completeOnTimeout_e6d6916a1b8e00d0,
          mid_completedFuture_55fd489bd94e6043,
          mid_completedStage_6a2d230e42393564,
          mid_copy_8b022ffd0e46887e,
          mid_defaultExecutor_58bdccaf49bf778f,
          mid_delayedExecutor_6f6e8e259f4e06bd,
          mid_delayedExecutor_86f5bc1f42654a19,
          mid_exceptionally_4c20b80d74e2bad3,
          mid_failedFuture_41f2117a635e6186,
          mid_failedStage_f8c3ca2f90b80b91,
          mid_get_bdd51648087bae52,
          mid_get_2d3d3d774f848779,
          mid_getNow_73b517fb00cf5d09,
          mid_getNumberOfDependents_15aa3d485e96b665,
          mid_handle_125be55c6922441d,
          mid_handleAsync_125be55c6922441d,
          mid_handleAsync_37f3775d11ebea8c,
          mid_isCancelled_ee8b0a5fa521ddac,
          mid_isCompletedExceptionally_ee8b0a5fa521ddac,
          mid_isDone_ee8b0a5fa521ddac,
          mid_join_bdd51648087bae52,
          mid_minimalCompletionStage_e575c22435815b21,
          mid_newIncompleteFuture_8b022ffd0e46887e,
          mid_obtrudeException_923f33f8220e0899,
          mid_obtrudeValue_301632c741f5d054,
          mid_orTimeout_b1b66482dd6c720d,
          mid_runAfterBoth_fcc0c75001c3d36d,
          mid_runAfterBothAsync_fcc0c75001c3d36d,
          mid_runAfterBothAsync_301310b1700e5619,
          mid_runAfterEither_fcc0c75001c3d36d,
          mid_runAfterEitherAsync_fcc0c75001c3d36d,
          mid_runAfterEitherAsync_301310b1700e5619,
          mid_runAsync_ee040853b4fb8929,
          mid_runAsync_70df12279fcdf780,
          mid_supplyAsync_df1399f7edb341e1,
          mid_supplyAsync_09f5277720de4955,
          mid_thenAccept_96a9ab95fc12b0a9,
          mid_thenAcceptAsync_96a9ab95fc12b0a9,
          mid_thenAcceptAsync_1d5bbf271aa0e29f,
          mid_thenAcceptBoth_4449f9af72c3f79f,
          mid_thenAcceptBothAsync_4449f9af72c3f79f,
          mid_thenAcceptBothAsync_a1f58ab12793708a,
          mid_thenApply_4c20b80d74e2bad3,
          mid_thenApplyAsync_4c20b80d74e2bad3,
          mid_thenApplyAsync_22698a0ef4e7ad30,
          mid_thenCombine_312db08e9a3b813b,
          mid_thenCombineAsync_312db08e9a3b813b,
          mid_thenCombineAsync_8167511c2231273c,
          mid_thenCompose_4c20b80d74e2bad3,
          mid_thenComposeAsync_4c20b80d74e2bad3,
          mid_thenComposeAsync_22698a0ef4e7ad30,
          mid_thenRun_ee040853b4fb8929,
          mid_thenRunAsync_ee040853b4fb8929,
          mid_thenRunAsync_70df12279fcdf780,
          mid_toCompletableFuture_8b022ffd0e46887e,
          mid_toString_dc633f13a47328a8,
          mid_whenComplete_6e508ab4ae1a9f44,
          mid_whenCompleteAsync_6e508ab4ae1a9f44,
          mid_whenCompleteAsync_b4588ab4a7d70d17,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CompletableFuture(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CompletableFuture(const CompletableFuture& obj) : ::java::lang::Object(obj) {}

        CompletableFuture();

        CompletableFuture acceptEither(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Consumer &) const;
        CompletableFuture acceptEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Consumer &) const;
        CompletableFuture acceptEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Consumer &, const ::java::util::concurrent::Executor &) const;
        static CompletableFuture allOf(const JArray< CompletableFuture > &);
        static CompletableFuture anyOf(const JArray< CompletableFuture > &);
        CompletableFuture applyToEither(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Function &) const;
        CompletableFuture applyToEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Function &) const;
        CompletableFuture applyToEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        jboolean cancel(jboolean) const;
        jboolean complete(const ::java::lang::Object &) const;
        CompletableFuture completeAsync(const ::java::util::function::Supplier &) const;
        CompletableFuture completeAsync(const ::java::util::function::Supplier &, const ::java::util::concurrent::Executor &) const;
        jboolean completeExceptionally(const ::java::lang::Throwable &) const;
        CompletableFuture completeOnTimeout(const ::java::lang::Object &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        static CompletableFuture completedFuture(const ::java::lang::Object &);
        static ::java::util::concurrent::CompletionStage completedStage(const ::java::lang::Object &);
        CompletableFuture copy() const;
        ::java::util::concurrent::Executor defaultExecutor() const;
        static ::java::util::concurrent::Executor delayedExecutor(jlong, const ::java::util::concurrent::TimeUnit &);
        static ::java::util::concurrent::Executor delayedExecutor(jlong, const ::java::util::concurrent::TimeUnit &, const ::java::util::concurrent::Executor &);
        CompletableFuture exceptionally(const ::java::util::function::Function &) const;
        static CompletableFuture failedFuture(const ::java::lang::Throwable &);
        static ::java::util::concurrent::CompletionStage failedStage(const ::java::lang::Throwable &);
        ::java::lang::Object get() const;
        ::java::lang::Object get(jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object getNow(const ::java::lang::Object &) const;
        jint getNumberOfDependents() const;
        CompletableFuture handle(const ::java::util::function::BiFunction &) const;
        CompletableFuture handleAsync(const ::java::util::function::BiFunction &) const;
        CompletableFuture handleAsync(const ::java::util::function::BiFunction &, const ::java::util::concurrent::Executor &) const;
        jboolean isCancelled() const;
        jboolean isCompletedExceptionally() const;
        jboolean isDone() const;
        ::java::lang::Object join() const;
        ::java::util::concurrent::CompletionStage minimalCompletionStage() const;
        CompletableFuture newIncompleteFuture() const;
        void obtrudeException(const ::java::lang::Throwable &) const;
        void obtrudeValue(const ::java::lang::Object &) const;
        CompletableFuture orTimeout(jlong, const ::java::util::concurrent::TimeUnit &) const;
        CompletableFuture runAfterBoth(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &) const;
        CompletableFuture runAfterBothAsync(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &) const;
        CompletableFuture runAfterBothAsync(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture runAfterEither(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &) const;
        CompletableFuture runAfterEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &) const;
        CompletableFuture runAfterEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        static CompletableFuture runAsync(const ::java::lang::Runnable &);
        static CompletableFuture runAsync(const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &);
        static CompletableFuture supplyAsync(const ::java::util::function::Supplier &);
        static CompletableFuture supplyAsync(const ::java::util::function::Supplier &, const ::java::util::concurrent::Executor &);
        CompletableFuture thenAccept(const ::java::util::function::Consumer &) const;
        CompletableFuture thenAcceptAsync(const ::java::util::function::Consumer &) const;
        CompletableFuture thenAcceptAsync(const ::java::util::function::Consumer &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenAcceptBoth(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiConsumer &) const;
        CompletableFuture thenAcceptBothAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiConsumer &) const;
        CompletableFuture thenAcceptBothAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiConsumer &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenApply(const ::java::util::function::Function &) const;
        CompletableFuture thenApplyAsync(const ::java::util::function::Function &) const;
        CompletableFuture thenApplyAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenCombine(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiFunction &) const;
        CompletableFuture thenCombineAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiFunction &) const;
        CompletableFuture thenCombineAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiFunction &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenCompose(const ::java::util::function::Function &) const;
        CompletableFuture thenComposeAsync(const ::java::util::function::Function &) const;
        CompletableFuture thenComposeAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenRun(const ::java::lang::Runnable &) const;
        CompletableFuture thenRunAsync(const ::java::lang::Runnable &) const;
        CompletableFuture thenRunAsync(const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture toCompletableFuture() const;
        ::java::lang::String toString() const;
        CompletableFuture whenComplete(const ::java::util::function::BiConsumer &) const;
        CompletableFuture whenCompleteAsync(const ::java::util::function::BiConsumer &) const;
        CompletableFuture whenCompleteAsync(const ::java::util::function::BiConsumer &, const ::java::util::concurrent::Executor &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(CompletableFuture);
      extern PyTypeObject *PY_TYPE(CompletableFuture);

      class t_CompletableFuture {
      public:
        PyObject_HEAD
        CompletableFuture object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CompletableFuture *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CompletableFuture&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CompletableFuture&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
