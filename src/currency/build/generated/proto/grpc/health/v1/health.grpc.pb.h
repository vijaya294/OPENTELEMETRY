// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpc/health/v1/health.proto
// Original file comments:
// Copyright 2015 The gRPC Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// The canonical version of this proto can be found at
// https://github.com/grpc/grpc-proto/blob/master/grpc/health/v1/health.proto
//
#ifndef GRPC_grpc_2fhealth_2fv1_2fhealth_2eproto__INCLUDED
#define GRPC_grpc_2fhealth_2fv1_2fhealth_2eproto__INCLUDED

#include "grpc/health/v1/health.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace grpc {
namespace health {
namespace v1 {

class Health final {
 public:
  static constexpr char const* service_full_name() {
    return "grpc.health.v1.Health";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Check(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::health::v1::HealthCheckResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc::health::v1::HealthCheckResponse>> AsyncCheck(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc::health::v1::HealthCheckResponse>>(AsyncCheckRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc::health::v1::HealthCheckResponse>> PrepareAsyncCheck(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc::health::v1::HealthCheckResponse>>(PrepareAsyncCheckRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Check(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest* request, ::grpc::health::v1::HealthCheckResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Check(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest* request, ::grpc::health::v1::HealthCheckResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpc::health::v1::HealthCheckResponse>* AsyncCheckRaw(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpc::health::v1::HealthCheckResponse>* PrepareAsyncCheckRaw(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Check(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::health::v1::HealthCheckResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc::health::v1::HealthCheckResponse>> AsyncCheck(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc::health::v1::HealthCheckResponse>>(AsyncCheckRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc::health::v1::HealthCheckResponse>> PrepareAsyncCheck(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc::health::v1::HealthCheckResponse>>(PrepareAsyncCheckRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Check(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest* request, ::grpc::health::v1::HealthCheckResponse* response, std::function<void(::grpc::Status)>) override;
      void Check(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest* request, ::grpc::health::v1::HealthCheckResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpc::health::v1::HealthCheckResponse>* AsyncCheckRaw(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpc::health::v1::HealthCheckResponse>* PrepareAsyncCheckRaw(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Check_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Check(::grpc::ServerContext* context, const ::grpc::health::v1::HealthCheckRequest* request, ::grpc::health::v1::HealthCheckResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Check : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Check() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Check() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Check(::grpc::ServerContext* /*context*/, const ::grpc::health::v1::HealthCheckRequest* /*request*/, ::grpc::health::v1::HealthCheckResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCheck(::grpc::ServerContext* context, ::grpc::health::v1::HealthCheckRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpc::health::v1::HealthCheckResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Check<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Check : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Check() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::health::v1::HealthCheckRequest, ::grpc::health::v1::HealthCheckResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::health::v1::HealthCheckRequest* request, ::grpc::health::v1::HealthCheckResponse* response) { return this->Check(context, request, response); }));}
    void SetMessageAllocatorFor_Check(
        ::grpc::MessageAllocator< ::grpc::health::v1::HealthCheckRequest, ::grpc::health::v1::HealthCheckResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpc::health::v1::HealthCheckRequest, ::grpc::health::v1::HealthCheckResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Check() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Check(::grpc::ServerContext* /*context*/, const ::grpc::health::v1::HealthCheckRequest* /*request*/, ::grpc::health::v1::HealthCheckResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Check(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::health::v1::HealthCheckRequest* /*request*/, ::grpc::health::v1::HealthCheckResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Check<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Check : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Check() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Check() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Check(::grpc::ServerContext* /*context*/, const ::grpc::health::v1::HealthCheckRequest* /*request*/, ::grpc::health::v1::HealthCheckResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Check : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Check() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Check() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Check(::grpc::ServerContext* /*context*/, const ::grpc::health::v1::HealthCheckRequest* /*request*/, ::grpc::health::v1::HealthCheckResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCheck(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Check : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Check() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Check(context, request, response); }));
    }
    ~WithRawCallbackMethod_Check() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Check(::grpc::ServerContext* /*context*/, const ::grpc::health::v1::HealthCheckRequest* /*request*/, ::grpc::health::v1::HealthCheckResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Check(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Check : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Check() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpc::health::v1::HealthCheckRequest, ::grpc::health::v1::HealthCheckResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpc::health::v1::HealthCheckRequest, ::grpc::health::v1::HealthCheckResponse>* streamer) {
                       return this->StreamedCheck(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Check() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Check(::grpc::ServerContext* /*context*/, const ::grpc::health::v1::HealthCheckRequest* /*request*/, ::grpc::health::v1::HealthCheckResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCheck(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpc::health::v1::HealthCheckRequest,::grpc::health::v1::HealthCheckResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Check<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Check<Service > StreamedService;
};

}  // namespace v1
}  // namespace health
}  // namespace grpc


#endif  // GRPC_grpc_2fhealth_2fv1_2fhealth_2eproto__INCLUDED