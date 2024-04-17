// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: model_3d.proto
#ifndef GRPC_model_5f3d_2eproto__INCLUDED
#define GRPC_model_5f3d_2eproto__INCLUDED

#include "model_3d.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

class Model3D final {
 public:
  static constexpr char const* service_full_name() {
    return "Model3D";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Convert(::grpc::ClientContext* context, const ::Model& request, ::Model* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Model>> AsyncConvert(::grpc::ClientContext* context, const ::Model& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Model>>(AsyncConvertRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Model>> PrepareAsyncConvert(::grpc::ClientContext* context, const ::Model& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Model>>(PrepareAsyncConvertRaw(context, request, cq));
    }
    virtual ::grpc::Status Version(::grpc::ClientContext* context, const ::VersionNumber& request, ::VersionNumber* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::VersionNumber>> AsyncVersion(::grpc::ClientContext* context, const ::VersionNumber& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::VersionNumber>>(AsyncVersionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::VersionNumber>> PrepareAsyncVersion(::grpc::ClientContext* context, const ::VersionNumber& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::VersionNumber>>(PrepareAsyncVersionRaw(context, request, cq));
    }
    // return new Version;
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Convert(::grpc::ClientContext* context, const ::Model* request, ::Model* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Convert(::grpc::ClientContext* context, const ::Model* request, ::Model* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Version(::grpc::ClientContext* context, const ::VersionNumber* request, ::VersionNumber* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Version(::grpc::ClientContext* context, const ::VersionNumber* request, ::VersionNumber* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // return new Version;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Model>* AsyncConvertRaw(::grpc::ClientContext* context, const ::Model& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Model>* PrepareAsyncConvertRaw(::grpc::ClientContext* context, const ::Model& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::VersionNumber>* AsyncVersionRaw(::grpc::ClientContext* context, const ::VersionNumber& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::VersionNumber>* PrepareAsyncVersionRaw(::grpc::ClientContext* context, const ::VersionNumber& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Convert(::grpc::ClientContext* context, const ::Model& request, ::Model* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Model>> AsyncConvert(::grpc::ClientContext* context, const ::Model& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Model>>(AsyncConvertRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Model>> PrepareAsyncConvert(::grpc::ClientContext* context, const ::Model& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Model>>(PrepareAsyncConvertRaw(context, request, cq));
    }
    ::grpc::Status Version(::grpc::ClientContext* context, const ::VersionNumber& request, ::VersionNumber* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::VersionNumber>> AsyncVersion(::grpc::ClientContext* context, const ::VersionNumber& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::VersionNumber>>(AsyncVersionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::VersionNumber>> PrepareAsyncVersion(::grpc::ClientContext* context, const ::VersionNumber& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::VersionNumber>>(PrepareAsyncVersionRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Convert(::grpc::ClientContext* context, const ::Model* request, ::Model* response, std::function<void(::grpc::Status)>) override;
      void Convert(::grpc::ClientContext* context, const ::Model* request, ::Model* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Version(::grpc::ClientContext* context, const ::VersionNumber* request, ::VersionNumber* response, std::function<void(::grpc::Status)>) override;
      void Version(::grpc::ClientContext* context, const ::VersionNumber* request, ::VersionNumber* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::Model>* AsyncConvertRaw(::grpc::ClientContext* context, const ::Model& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Model>* PrepareAsyncConvertRaw(::grpc::ClientContext* context, const ::Model& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::VersionNumber>* AsyncVersionRaw(::grpc::ClientContext* context, const ::VersionNumber& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::VersionNumber>* PrepareAsyncVersionRaw(::grpc::ClientContext* context, const ::VersionNumber& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Convert_;
    const ::grpc::internal::RpcMethod rpcmethod_Version_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Convert(::grpc::ServerContext* context, const ::Model* request, ::Model* response);
    virtual ::grpc::Status Version(::grpc::ServerContext* context, const ::VersionNumber* request, ::VersionNumber* response);
    // return new Version;
  };
  template <class BaseClass>
  class WithAsyncMethod_Convert : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Convert() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Convert() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Convert(::grpc::ServerContext* /*context*/, const ::Model* /*request*/, ::Model* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConvert(::grpc::ServerContext* context, ::Model* request, ::grpc::ServerAsyncResponseWriter< ::Model>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Version : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Version() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Version() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Version(::grpc::ServerContext* /*context*/, const ::VersionNumber* /*request*/, ::VersionNumber* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestVersion(::grpc::ServerContext* context, ::VersionNumber* request, ::grpc::ServerAsyncResponseWriter< ::VersionNumber>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Convert<WithAsyncMethod_Version<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Convert : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Convert() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::Model, ::Model>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::Model* request, ::Model* response) { return this->Convert(context, request, response); }));}
    void SetMessageAllocatorFor_Convert(
        ::grpc::MessageAllocator< ::Model, ::Model>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::Model, ::Model>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Convert() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Convert(::grpc::ServerContext* /*context*/, const ::Model* /*request*/, ::Model* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Convert(
      ::grpc::CallbackServerContext* /*context*/, const ::Model* /*request*/, ::Model* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Version : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Version() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::VersionNumber, ::VersionNumber>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::VersionNumber* request, ::VersionNumber* response) { return this->Version(context, request, response); }));}
    void SetMessageAllocatorFor_Version(
        ::grpc::MessageAllocator< ::VersionNumber, ::VersionNumber>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::VersionNumber, ::VersionNumber>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Version() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Version(::grpc::ServerContext* /*context*/, const ::VersionNumber* /*request*/, ::VersionNumber* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Version(
      ::grpc::CallbackServerContext* /*context*/, const ::VersionNumber* /*request*/, ::VersionNumber* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Convert<WithCallbackMethod_Version<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Convert : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Convert() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Convert() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Convert(::grpc::ServerContext* /*context*/, const ::Model* /*request*/, ::Model* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Version : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Version() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Version() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Version(::grpc::ServerContext* /*context*/, const ::VersionNumber* /*request*/, ::VersionNumber* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Convert : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Convert() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Convert() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Convert(::grpc::ServerContext* /*context*/, const ::Model* /*request*/, ::Model* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConvert(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Version : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Version() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Version() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Version(::grpc::ServerContext* /*context*/, const ::VersionNumber* /*request*/, ::VersionNumber* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestVersion(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Convert : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Convert() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Convert(context, request, response); }));
    }
    ~WithRawCallbackMethod_Convert() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Convert(::grpc::ServerContext* /*context*/, const ::Model* /*request*/, ::Model* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Convert(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Version : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Version() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Version(context, request, response); }));
    }
    ~WithRawCallbackMethod_Version() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Version(::grpc::ServerContext* /*context*/, const ::VersionNumber* /*request*/, ::VersionNumber* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Version(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Convert : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Convert() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::Model, ::Model>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::Model, ::Model>* streamer) {
                       return this->StreamedConvert(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Convert() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Convert(::grpc::ServerContext* /*context*/, const ::Model* /*request*/, ::Model* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedConvert(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Model,::Model>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Version : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Version() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::VersionNumber, ::VersionNumber>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::VersionNumber, ::VersionNumber>* streamer) {
                       return this->StreamedVersion(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Version() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Version(::grpc::ServerContext* /*context*/, const ::VersionNumber* /*request*/, ::VersionNumber* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedVersion(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::VersionNumber,::VersionNumber>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Convert<WithStreamedUnaryMethod_Version<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Convert<WithStreamedUnaryMethod_Version<Service > > StreamedService;
};


#endif  // GRPC_model_5f3d_2eproto__INCLUDED
