/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <android/os/ConnectionInfo.h>
#include <android/os/IClientCallback.h>
#include <android/os/IServiceCallback.h>
#include <android/os/Service.h>
#include <android/os/ServiceDebugInfo.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <optional>
#include <string>
#include <utils/StrongPointer.h>
#include <vector>

namespace android::os {
class ConnectionInfo;
class IClientCallback;
class IServiceCallback;
class ServiceDebugInfo;
}  // namespace android::os
namespace android {
namespace os {
class LIBBINDER_EXPORTED IServiceManagerDelegator;

class LIBBINDER_EXPORTED IServiceManager : public ::android::IInterface {
public:
  typedef IServiceManagerDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(ServiceManager)
  enum : int32_t { DUMP_FLAG_PRIORITY_CRITICAL = 1 };
  enum : int32_t { DUMP_FLAG_PRIORITY_HIGH = 2 };
  enum : int32_t { DUMP_FLAG_PRIORITY_NORMAL = 4 };
  enum : int32_t { DUMP_FLAG_PRIORITY_DEFAULT = 8 };
  enum : int32_t { DUMP_FLAG_PRIORITY_ALL = 15 };
  enum : int32_t { FLAG_IS_LAZY_SERVICE = 1073741824 };
  enum : int32_t { DUMP_FLAG_PROTO = 16 };
  virtual ::android::binder::Status getService(const ::std::string& name, ::android::sp<::android::IBinder>* _aidl_return) __attribute__((deprecated("TODO(b/355394904): Use getService2 instead. This does not return metadata that is included in ServiceWithMetadata"))) = 0;
  virtual ::android::binder::Status getService2(const ::std::string& name, ::android::os::Service* _aidl_return) = 0;
  virtual ::android::binder::Status checkService(const ::std::string& name, ::android::sp<::android::IBinder>* _aidl_return) __attribute__((deprecated("TODO(b/355394904): Use checkService2 instead. This does not return metadata that is included in ServiceWithMetadata"))) = 0;
  virtual ::android::binder::Status checkService2(const ::std::string& name, ::android::os::Service* _aidl_return) = 0;
  virtual ::android::binder::Status addService(const ::std::string& name, const ::android::sp<::android::IBinder>& service, bool allowIsolated, int32_t dumpPriority) = 0;
  virtual ::android::binder::Status listServices(int32_t dumpPriority, ::std::vector<::std::string>* _aidl_return) = 0;
  virtual ::android::binder::Status registerForNotifications(const ::std::string& name, const ::android::sp<::android::os::IServiceCallback>& callback) = 0;
  virtual ::android::binder::Status unregisterForNotifications(const ::std::string& name, const ::android::sp<::android::os::IServiceCallback>& callback) = 0;
  virtual ::android::binder::Status isDeclared(const ::std::string& name, bool* _aidl_return) = 0;
  virtual ::android::binder::Status getDeclaredInstances(const ::std::string& iface, ::std::vector<::std::string>* _aidl_return) = 0;
  virtual ::android::binder::Status updatableViaApex(const ::std::string& name, ::std::optional<::std::string>* _aidl_return) = 0;
  virtual ::android::binder::Status getUpdatableNames(const ::std::string& apexName, ::std::vector<::std::string>* _aidl_return) = 0;
  virtual ::android::binder::Status getConnectionInfo(const ::std::string& name, ::std::optional<::android::os::ConnectionInfo>* _aidl_return) = 0;
  virtual ::android::binder::Status registerClientCallback(const ::std::string& name, const ::android::sp<::android::IBinder>& service, const ::android::sp<::android::os::IClientCallback>& callback) = 0;
  virtual ::android::binder::Status tryUnregisterService(const ::std::string& name, const ::android::sp<::android::IBinder>& service) = 0;
  virtual ::android::binder::Status getServiceDebugInfo(::std::vector<::android::os::ServiceDebugInfo>* _aidl_return) = 0;
};  // class IServiceManager

class LIBBINDER_EXPORTED IServiceManagerDefault : public IServiceManager {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status getService(const ::std::string& /*name*/, ::android::sp<::android::IBinder>* /*_aidl_return*/) override __attribute__((deprecated("TODO(b/355394904): Use getService2 instead. This does not return metadata that is included in ServiceWithMetadata"))) {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getService2(const ::std::string& /*name*/, ::android::os::Service* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status checkService(const ::std::string& /*name*/, ::android::sp<::android::IBinder>* /*_aidl_return*/) override __attribute__((deprecated("TODO(b/355394904): Use checkService2 instead. This does not return metadata that is included in ServiceWithMetadata"))) {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status checkService2(const ::std::string& /*name*/, ::android::os::Service* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status addService(const ::std::string& /*name*/, const ::android::sp<::android::IBinder>& /*service*/, bool /*allowIsolated*/, int32_t /*dumpPriority*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status listServices(int32_t /*dumpPriority*/, ::std::vector<::std::string>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status registerForNotifications(const ::std::string& /*name*/, const ::android::sp<::android::os::IServiceCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status unregisterForNotifications(const ::std::string& /*name*/, const ::android::sp<::android::os::IServiceCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status isDeclared(const ::std::string& /*name*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getDeclaredInstances(const ::std::string& /*iface*/, ::std::vector<::std::string>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status updatableViaApex(const ::std::string& /*name*/, ::std::optional<::std::string>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getUpdatableNames(const ::std::string& /*apexName*/, ::std::vector<::std::string>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getConnectionInfo(const ::std::string& /*name*/, ::std::optional<::android::os::ConnectionInfo>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status registerClientCallback(const ::std::string& /*name*/, const ::android::sp<::android::IBinder>& /*service*/, const ::android::sp<::android::os::IClientCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status tryUnregisterService(const ::std::string& /*name*/, const ::android::sp<::android::IBinder>& /*service*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getServiceDebugInfo(::std::vector<::android::os::ServiceDebugInfo>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IServiceManagerDefault
}  // namespace os
}  // namespace android
